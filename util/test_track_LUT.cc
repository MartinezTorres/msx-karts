////////////////////////////////////////////////////////////////////////
// Build MSX1 palette
//
// Manuel Martinez (salutte@gmail.com)
//
// FLAGS: -std=gnu++14 -g `pkg-config opencv4 --cflags --libs` -O1 -lpthread -fopenmp -lgomp -Wno-format-nonliteral -lSDL2

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include <fstream>
#include <vector>
#include <deque>
#include <map>
#include <thread>
#include <chrono>
#include <functional>
#include <SDL2/SDL.h>

typedef std::array<uint8_t, 8> Tile;


struct Entity3D {
	cv::Vec3f pos = cv::Vec3f(0.f,0.f,0.f);
	cv::Vec3f vel = cv::Vec3f(0.f,0.f,0.f);
	cv::Matx33f rot = cv::Matx33f::eye();
};

static cv::Matx33f rotX(float degrees) {
	cv::Matx33f rot = cv::Matx33f::eye();
	rot(1,1) = rot(2,2) = std::cos(degrees * (M_PI / 180.0));
	rot(1,2) = -std::sin(degrees * (M_PI / 180.0));
	rot(2,1) =  std::sin(degrees * (M_PI / 180.0));
	return rot;
}

static cv::Matx33f rotY(float degrees) {
	cv::Matx33f rot = cv::Matx33f::eye();
	rot(0,0) = rot(2,2) = std::cos(degrees * (M_PI / 180.0));
	rot(0,2) =  std::sin(degrees * (M_PI / 180.0));
	rot(2,0) = -std::sin(degrees * (M_PI / 180.0));
	return rot;
}

static cv::Matx33f rotZ(float degrees) {
	cv::Matx33f rot = cv::Matx33f::eye();
	rot(0,0) = rot(1,1) = std::cos(degrees * (M_PI / 180.0));
	rot(0,1) = -std::sin(degrees * (M_PI / 180.0));
	rot(1,0) =  std::sin(degrees * (M_PI / 180.0));
	return rot;
}


static cv::Mat3b framebuffer = cv::Mat3b(192,256,cv::Vec3b(0,0,0));

static SDL_Window* gWindow = nullptr;
static SDL_Renderer* gRenderer = nullptr;
static SDL_Texture* tex = nullptr;

static inline int8_t initSDL() {
	    
    // Intialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        //std::cout << "SDL could not initialize! error: " << SDL_GetError() << "\n";
        return -1;
	}

	// create window
	gWindow = SDL_CreateWindow("SDL Skeleton", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, framebuffer.cols*4, framebuffer.rows*4, SDL_WINDOW_SHOWN);
	if (gWindow == nullptr) {
		//std::cout << "Window could not be created! error: " << SDL_GetError() << "\n";
        return -2;
	}
	// create renderer for window
	gRenderer = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED);
	if (gRenderer == nullptr) {
		//std::cout << "Renderer could not be created. error: " << SDL_GetError() << "\n";
        return -3;
	}


	SDL_SetRenderDrawColor(gRenderer, 0xff, 0xff, 0xff, 0xff);
	tex = SDL_CreateTexture(gRenderer,SDL_PIXELFORMAT_BGR24,SDL_TEXTUREACCESS_STREAMING,framebuffer.cols,framebuffer.rows);

    return 0;
}

static int8_t displayFramebufferSDL() {
	
		// clear screen
		SDL_RenderClear(gRenderer);
		
		void *mPixels;
		int mPitch;

		//Lock texture for manipulation
		SDL_LockTexture( tex, nullptr, &mPixels, &mPitch );
		
		//Copy loaded/formatted surface pixels
		memcpy( mPixels, framebuffer.data, 3*framebuffer.cols*framebuffer.rows);

		//Unlock texture to update
		SDL_UnlockTexture( tex );
		
		SDL_RenderCopy(gRenderer, tex,nullptr,nullptr);
		// update screen
		SDL_RenderPresent(gRenderer);
		
		return 0;
}

int main(int argc, char **argv) {
	
	initSDL();
	
	double deg2rad = M_PI / 180.0;
    
    cv::Mat3b img = cv::imread(argv[1]);
 
	Entity3D player, camera;
	
    
	camera.pos[1] = -2;
	camera.pos[2] = 1;
	camera.rot = camera.rot*rotX(-14);

	float FoV = 43;
	float sFoV = std::sin(FoV * (M_PI / 180.0));
	float f = (256/2-0.5) * std::sqrt(1-sFoV*sFoV)/sFoV;

	cv::Vec3f p0 = cv::Vec3f(0.f,0.f,0.f);
	cv::Vec3f n = cv::Vec3f(0.f,0.f,1.f);
	
	static const int NUM_SUBDIVISIONS = 4;
	static const int NUM_ANGLES = 16;
	
	std::vector<std::vector<int>> LUT_SINGLE(NUM_SUBDIVISIONS*NUM_SUBDIVISIONS*NUM_ANGLES);
	std::vector<std::vector<int>> LUT_DOUBLE(NUM_SUBDIVISIONS*NUM_SUBDIVISIONS*NUM_ANGLES);
	
	
	for (int iy=0; iy<NUM_SUBDIVISIONS; iy++) {
//		std::cerr << "IY: " << iy << std::endl;
		for (int ix=0; ix<NUM_SUBDIVISIONS; ix++) {
//			std::cerr << "IX: " << ix << std::endl;
			for (int ia=0; ia<NUM_ANGLES; ia++) {
//				std::cerr << "IA: " << ia << std::endl;

				cv::Mat1b debugImg(256,256,uint8_t(0));
				{
					for (auto i=0; i<64; i++)
						debugImg(127-32+i,127-32) =
						debugImg(127-32,127-32+i) =
						debugImg(127-32+i,127+32) =
						debugImg(127+32,127-32+i) = 128;
				}
				
				player.rot = rotZ(45 - ia * (90./NUM_ANGLES));
				player.pos[0] = -0.5 + (1./NUM_SUBDIVISIONS)*ix + .5/NUM_SUBDIVISIONS;
				player.pos[1] = -0.5 + (1./NUM_SUBDIVISIONS)*iy + .5/NUM_SUBDIVISIONS;

				player.pos[0] = 0;
				player.pos[1] = 0;

				for (int itx=0; itx<32; itx++) {
					for (int ity=32; ity<64; ity++) {

						std::map<int, int> locationsLeft;
						std::map<int, int> locationsRight;

						for (int itx8=0; itx8<8; itx8++) {
							
							float i = -(ity + 0.5 - 64)/f;
							float j = -(8 * itx + itx8 + 0.5 - 128)/f;

							cv::Vec3f l(j,1,i);
							
							l = player.rot*camera.rot*l;
							
							if (l[2]>-0.001) continue;
							
							
							cv::Vec3f pos = player.pos + player.rot*camera.pos;
							float d = (p0 - (pos)).dot(n)/l.dot(n);
							cv::Vec3f p = d*l + pos;
							
							
//							int jj = std::floor(p[0]);
//							int ii = std::floor(p[1]);
//							int jj = std::round(p[0]);
//							int ii = std::round(p[1]);
							int jj = std::floor(p[0] + ((1./NUM_SUBDIVISIONS)*ix + .5/NUM_SUBDIVISIONS));
							int ii = std::floor(p[1] + ((1./NUM_SUBDIVISIONS)*iy + .5/NUM_SUBDIVISIONS));
							
							if (ii>63) ii=63;
							if (jj>63) jj=63;
							if (ii<-2) ii=-2;
							if (jj<-63) jj=-63;
							
							{
								int iii = ii+127;
								int jjj = jj+127;
								debugImg(iii,jjj)=255;
							}
							
							if (itx8<4) {
								locationsLeft[64*ii+jj]++;
							} else {
								locationsRight[64*ii+jj]++;
							}
						}
						
						int bestScore = 0;
						int bestPos = 8192-1;
						
						for (auto &ll : locationsLeft) {
							int score = ll.second + locationsRight[ll.first];
							if (score > bestScore) {
								bestScore = score;
								bestPos = 2*ll.first;
							}
						}

						for (auto &ll : locationsLeft) {
							int score = ll.second + locationsRight[ll.first-1];
							if (score > bestScore) {
								bestScore = score;
								bestPos = 2*ll.first-2+1;
							}
						}
						
						if (bestPos < -160) std::cerr << "bestPos: " << bestPos << std::endl;

						LUT_SINGLE[iy*NUM_SUBDIVISIONS*NUM_ANGLES+ix*NUM_ANGLES+ia].push_back(bestPos);
					}
				}
				
//				cv::imshow("debug", debugImg);
//				cv::waitKey(0);
				
				for (int itx=0; itx<32; itx++) {
					for (int ity=64; ity<128; ity+=2) {

						std::map<int, int> locationsLeft;
						std::map<int, int> locationsRight;

						for (int itx8=0; itx8<8; itx8++) {
							for (int ity2=0; ity2<2; ity2++) {
								
								float i = -(ity + ity2 + 0.5 - 64)/f;
								float j = -(8 * itx + itx8 + 0.5 - 128)/f;

								cv::Vec3f l(j,1,i);
								
								l = player.rot*camera.rot*l;
								
								if (l[2]>-0.001) continue;
								
								
								cv::Vec3f pos = player.pos + player.rot*camera.pos;
								float d = (p0 - (pos)).dot(n)/l.dot(n);
								cv::Vec3f p = d*l + pos;
								
								
//								int jj = std::floor(p[0]);
//								int ii = std::floor(p[1]);
//								int jj = std::round(p[0]);
//								int ii = std::round(p[1]);
								int jj = std::floor(p[0] + ((1./NUM_SUBDIVISIONS)*ix + .5/NUM_SUBDIVISIONS));
								int ii = std::floor(p[1] + ((1./NUM_SUBDIVISIONS)*iy + .5/NUM_SUBDIVISIONS));
								
								if (ii>63) ii=63;
								if (jj>63) jj=63;
								if (ii<-2) ii=-2;
								if (jj<-63) jj=-63;
								
								if (itx8<4) {
									locationsLeft[64*ii+jj]++;
								} else {
									locationsRight[64*ii+jj]++;
								}
							}
						}
						
						int bestScore = 0;
						int bestPos = 8192-1;
						
						for (auto &ll : locationsLeft) {
							int score = ll.second + locationsRight[ll.first];
							if (score > bestScore) {
								bestScore = score;
								bestPos = 2*ll.first;
							}
						}


						for (auto &ll : locationsLeft) {
							int score = ll.second + locationsRight[ll.first-1];
							if (score > bestScore) {
								bestScore = score;
								bestPos = 2*ll.first-2+1;
							}
						}
						
						if (bestPos < -150) std::cerr << "bestPos: " << bestPos << std::endl;

						LUT_DOUBLE[iy*NUM_SUBDIVISIONS*NUM_ANGLES+ix*NUM_ANGLES+ia].push_back(bestPos);
					}
				}
			}
		}
	}
			
    player.pos[0] = img.rows / 2 + 0.125;
    player.pos[1] = img.cols / 2 + 0.125;
    player.rot = cv::Matx33f::eye();
    
    {
		std::ofstream tracks_common("tmp/tracks_common.h");
		tracks_common << "#include <megalinker.h>" << std::endl;
		
		for (int idx = 1; idx<argc; idx++) {

			std::vector<cv::Vec3f> colors = {
				cv::Vec3f(0,0,0),
				cv::Vec3f(1,1,1),
				cv::Vec3f(50,134,43),
				cv::Vec3f(89,152,77),
				
				cv::Vec3f(71,65,123),
				cv::Vec3f(92,81,187),
				cv::Vec3f(134,70,51),
				cv::Vec3f(0,0,0),
				
				cv::Vec3f(66,146,175),
				cv::Vec3f(186,103,77),
				cv::Vec3f(143,151,46),
				cv::Vec3f(154,160,84),
				
				cv::Vec3f(42,116,32),
				cv::Vec3f(134,71,146),
				cv::Vec3f(150,150,150),
				cv::Vec3f(187,187,187),
			};
			
			for (auto &color : colors) std::swap(color[0],color[2]);
				
			cv::Mat3f imgc = cv::imread(argv[idx]);
			if (imgc.rows!=64 or imgc.cols!=64) throw std::runtime_error("Only 64x64 images supported");
			cv::Mat1b imgp(64,64,uint8_t(0));
			for (int i=0; i<64; i++) {
				for (int j=0; j<64; j++) {
					float best_error = 1000;
					for (int c=0; c<16; c++) {
						float error = cv::norm(colors[c]-imgc(i,j));
						if (error<best_error) {
							best_error = error;
							imgp(i,j)=c;
						}
					}
				}
			}
			
			std::string track_name = argv[1];
            track_name = track_name.substr(std::min(track_name.rfind('/'),track_name.rfind('\\'))+1);
            for (auto &&s : "_!-+/\\.'() ")
				for (auto &&c : track_name)
					if (c==s) c = '_';

			cv::rotate(imgp, imgp, cv::ROTATE_90_CLOCKWISE);

			for (int r=0; r<4; r++) {

				std::ofstream off("tmp/" + track_name + "_" + char('a'+r) +".c");
				off << "#include \"tracks_common.h\"" << std::endl;
				off << "const uint8_t " << track_name << "_" << char('a'+r) << "[64*64*2] = {\n\t";
				for (int i=0; i<64; i++) {
					for (int j=0; j<64; j++) {
						char buf[20];
						snprintf(buf,20,"0x%X%X, 0x%X%X",imgp(i,j),imgp(i,j),imgp(i,j+1),imgp(i,j));
						off << buf << ((j+1)%8?", ":", \n\t");
					}
				}
				off << "};" << std::endl;

				cv::rotate(imgp, imgp, cv::ROTATE_90_CLOCKWISE);
            
				tracks_common << "extern const uint8_t " << track_name << "_" << char('a'+r) << "[64*64*2];" << std::endl;
				tracks_common << "ML_REQUEST_C(" << track_name << "_" << char('a'+r) << ");" << std::endl;
			}
		}
	
		std::ofstream angles_common("tmp/angles_common.h");
		angles_common << "#include <megalinker.h>" << std::endl;

		for (int iy=0; iy<NUM_SUBDIVISIONS; iy++) {
			for (int ix=0; ix<NUM_SUBDIVISIONS; ix++) {
				for (int ia=0; ia<NUM_ANGLES; ia++) {
				
					std::string name = std::string("angle_") + "0123"[iy] + "0123"[ix] + "0123456789ABCDEF"[ia];

					std::ofstream off("tmp/" + name +".c");
					off << "#include \"angles_common.h\"" << std::endl;
					{
						off << "const uint16_t " << name << "_single[4][32][8] = {\n";
						auto &DATA = LUT_SINGLE[iy*NUM_SUBDIVISIONS*NUM_ANGLES+ix*NUM_ANGLES+ia];
						for (int rowTile=0; rowTile<4; rowTile++) {
							off << "{";
							for (int colTile=0; colTile<32; colTile++) {
								off << "{\t";
								for (int row=0; row<8; row++) {
									int target = DATA[(colTile)*32+rowTile*8+row];

									char buf[20];
									snprintf(buf,20," 0x%04X, ",uint16_t(target));
									off << buf;
								}
								off << "},\n";
							}
							off << "},";
						}
						off << "};" << std::endl;
					}

					{
						off << "const uint16_t " << name << "_double[8][32][4] = {\n";
						auto &DATA = LUT_DOUBLE[iy*NUM_SUBDIVISIONS*NUM_ANGLES+ix*NUM_ANGLES+ia];
						for (int rowTile=0; rowTile<8; rowTile++) {
							off << "{";
							for (int colTile=0; colTile<32; colTile++) {
								off << "{\t";
								for (int row=0; row<4; row++) {

									int target = DATA[(colTile)*32+rowTile*4+row];

									char buf[20];
									snprintf(buf,20," 0x%04X, ",uint16_t(target));
									off << buf;
								}
								off << "},\n";
							}
							off << "},";
						}
						off << "};" << std::endl;
					}
										
					angles_common << "extern const uint16_t " << name << "_single[4][32][8];" << std::endl;
					angles_common << "extern const uint16_t " << name << "_double[8][32][4];" << std::endl;
					angles_common << "ML_REQUEST_B(" << name << ");" << std::endl;
				}
			}
		}

		angles_common << "#define ANGLE_SEGMENTS static const uint8_t * const all_angle_segments[256] = { ";
		for (int iy=0; iy<NUM_SUBDIVISIONS; iy++) {
			for (int ix=0; ix<NUM_SUBDIVISIONS; ix++) {
				for (int ia=0; ia<NUM_ANGLES; ia++) {
					std::string name = std::string("angle_") + "0123"[iy] + "0123"[ix] + "0123456789ABCDEF"[ia];
					angles_common << "__ML_SEGMENT_B_" << name << ", ";
				}
			}
		}
		angles_common << "};" << std::endl;

		angles_common << "typedef const uint16_t T_angle_single[32][8];" << std::endl;
		angles_common << "typedef const T_angle_single *T_angle_single_p;" << std::endl;
		angles_common << "#define ANGLE_SINGLE static const T_angle_single_p all_angle_single[256] = { ";
		for (int iy=0; iy<NUM_SUBDIVISIONS; iy++) {
			for (int ix=0; ix<NUM_SUBDIVISIONS; ix++) {
				for (int ia=0; ia<NUM_ANGLES; ia++) {
					std::string name = std::string("angle_") + "0123"[iy] + "0123"[ix] + "0123456789ABCDEF"[ia];
					angles_common << name << "_single, ";
				}
			}
		}
		angles_common << "};" << std::endl;

		angles_common << "typedef const uint16_t T_angle_double[32][4];" << std::endl;
		angles_common << "typedef const T_angle_double *T_angle_double_p;" << std::endl;
		angles_common << "#define ANGLE_DOUBLE static const T_angle_double_p all_angle_double[256] = { ";
		for (int iy=0; iy<NUM_SUBDIVISIONS; iy++) {
			for (int ix=0; ix<NUM_SUBDIVISIONS; ix++) {
				for (int ia=0; ia<NUM_ANGLES; ia++) {
					std::string name = std::string("angle_") + "0123"[iy] + "0123"[ix] + "0123456789ABCDEF"[ia];
					angles_common << name << "_double, ";
				}
			}
		}
		angles_common << "};" << std::endl;		

		angles_common << "#define SIN_COS static const int8_t sin[64] = { ";
		for (int ia=0; ia<64; ia++) {
			angles_common << std::round(127*std::sin(ia/64. * 2 * M_PI)) << ", ";
		}
		angles_common << "}; static const int8_t cos[64] = { ";		
		for (int ia=0; ia<64; ia++) {
			angles_common << std::round(127*std::cos(ia/64. * 2 * M_PI)) << ", ";
		}
		angles_common << "};" << std::endl;		
	}

	
	
    
    {
		//int playerx = (5 * 4) * 256;
		int playerx = 5 * 4 * 256;
		int playery = (63-24)* 4 * 256;

		int playervx = 0;
		int playervy = 0;

		int playera = 0;

		
		std::vector<cv::Mat3b> maps;
		cv::rotate(img, img, cv::ROTATE_90_CLOCKWISE);
		maps.push_back(img.clone());
		cv::rotate(img, img, cv::ROTATE_90_CLOCKWISE);
		maps.push_back(img.clone());
		cv::rotate(img, img, cv::ROTATE_90_CLOCKWISE);
		maps.push_back(img.clone());
		cv::rotate(img, img, cv::ROTATE_90_CLOCKWISE);
		maps.push_back(img.clone());
		
		for (;;) {

			cv::Mat3b out = cv::Mat3b(32+64,256, cv::Vec3b(0,0,0));
			
			//LUT_SINGLE[iy*NUM_SUBDIVISIONS*NUM_ANGLES+ix*NUM_ANGLES+ia].push_back(bestPos);


			int imap = ((playera+8)/16)%4;
			
			uint ipx, ipy;
			if (imap==0) {
				ipx = (playery/256);
				ipy = (playerx/256);
			} else if (imap==1) {
				ipx = 255 - (playerx/256);
				ipy = (playery/256);
			} else if (imap==2) {
				ipx = 255 -(playery/256);
				ipy = 255 -(playerx/256);
			} else if (imap==3) {
				ipx = (playerx/256);
				ipy = 255 -(playery/256);
			}
						
			int iy = ipy%4;
			int ix = ipx%4;
			int ia = (playera+8)%16;
			cv::Mat3b &iamap = maps[imap];
			int mapCoord = 64*(ipy/4)+(ipx/4);
			
			iamap(0,0)=cv::Vec3b(0,0,255);
			//cv::imshow("map", iamap);
			//cv::waitKey(1);

			std::cerr << ipx << " " << ipy << std::endl;
			{
				auto it = LUT_SINGLE[iy*NUM_SUBDIVISIONS*NUM_ANGLES+ix*NUM_ANGLES+ia].begin();
				for (int j=0; j<32; j++) {
					for (int i=0; i<32; i++) {
						
						//std::cerr << int(*it) << std::endl;
						
						int coord = 2*mapCoord + *it++;
						//std::cerr << ipy/(256*4) << " " << ipx/(256*4) << " " << coord << std::endl;
						while (coord>=8192) coord -= 8192;
						while (coord<0) coord += 8192;
//						std::cerr << "coord: " << coord << std::endl;
						if (coord>=8192) {
	//						std::cerr << "coord: " << coord << std::endl;
							for (int itx8=0; itx8<8; itx8++) {
								out(i,8*j+itx8) = cv::Vec3b(255,0,0);
							}
						} else if (coord<0) {
							
							std::cerr << "coord: " << coord << std::endl;
							for (int itx8=0; itx8<8; itx8++) {
								out(i,8*j+itx8) = cv::Vec3b(0,0,255);
							}
						} else if (coord%2==0) {
							coord /= 2;
							for (int itx8=0; itx8<8; itx8++) {
								out(i,8*j+itx8) = iamap(coord/64,coord%64);
							}
						} else {
							coord /= 2;
							for (int itx4=4; itx4<8; itx4++) {
								out(i,8*j+itx4) = iamap(coord/64,coord%64);
							}
							coord++;
							for (int itx4=0; itx4<4; itx4++) {
								out(i,8*j+itx4) = iamap(coord/64,coord%64);
							}
						}
					}
				}
			}

			{
				auto it = LUT_DOUBLE[iy*NUM_SUBDIVISIONS*NUM_ANGLES+ix*NUM_ANGLES+ia].begin();
				for (int j=0; j<32; j++) {
					for (int i=32; i<96; i+=2) {
						
						int coord = 2*mapCoord + *it++;
						while (coord>=8192) coord -= 8192;
						while (coord<0) coord += 8192;
//						std::cerr << "coord: " << coord << std::endl;
						if (coord>=8192) {
							for (int itx8=0; itx8<8; itx8++) {
								out(i,8*j+itx8) = cv::Vec3b(255,0,0);
								out(i+1,8*j+itx8) = cv::Vec3b(255,0,0);
							}
						} else if (coord<0) {
							
							std::cerr << "coord: " << coord << std::endl;
							for (int itx8=0; itx8<8; itx8++) {
								out(i,8*j+itx8) = cv::Vec3b(0,0,255);
								out(i+1,8*j+itx8) = cv::Vec3b(0,0,255);
							}
						} else if (coord%2==0) {
							coord /= 2;
							for (int itx8=0; itx8<8; itx8++) {
								out(i,8*j+itx8) = iamap(coord/64,coord%64);
								out(i+1,8*j+itx8) = iamap(coord/64,coord%64);
							}
						} else {
							coord /= 2;
							for (int itx4=4; itx4<8; itx4++) {
								out(i,8*j+itx4) = iamap(coord/64,coord%64);
								out(i+1,8*j+itx4) = iamap(coord/64,coord%64);
							}
							coord++;
							for (int itx4=0; itx4<4; itx4++) {
								out(i,8*j+itx4) = iamap(coord/64,coord%64);
								out(i+1,8*j+itx4) = iamap(coord/64,coord%64);
							}
						}
					}
				}
			}
					
			SDL_PumpEvents();
			const Uint8 *state = SDL_GetKeyboardState(NULL);

			static int button_pressed = false;
			if (state[SDL_SCANCODE_W]) { 
				
				if (!button_pressed) playery+=256;
				button_pressed = true;
			} else if (state[SDL_SCANCODE_S]) { 
				
				if (!button_pressed) playery-=256;
				button_pressed = true;
			} else if (state[SDL_SCANCODE_A]) { 
				
				if (!button_pressed) playerx-=256;
				button_pressed = true;
			} else if (state[SDL_SCANCODE_D]) { 
				
				if (!button_pressed) playerx+=256;
				button_pressed = true;
			} else {
				button_pressed = false;
			}



			if (state[SDL_SCANCODE_LEFT]) { 
				
				playera++;
			}
			if (state[SDL_SCANCODE_RIGHT]) { 
				
				playera--;
			}
			if (state[SDL_SCANCODE_UP]) { 
				
				playervx += std::round(32*cos(playera/64. * 2 * M_PI));
				playervy += std::round(32*sin(playera/64. * 2 * M_PI));
			}
			if (state[SDL_SCANCODE_DOWN]) { 

				if (playervx>0) {
					playervx -= (playervx+7)/8;
				} else {
					playervx -= (playervx-7)/8;
				}
				if (playervy>0) {
					playervy -= (playervy+7)/8;
				} else {
					playervy -= (playervy-7)/8;
				}

			}
			if (state[SDL_SCANCODE_Q]) exit(-1);

				if (playervx>0) {
					playervx -= (playervx+15)/16;
				} else {
					playervx -= (playervx-15)/16;
				}
				if (playervy>0) {
					playervy -= (playervy+15)/16;
				} else {
					playervy -= (playervy-15)/16;
				}

			playerx += playervx;
			playery += playervy;
			
			playera = ((playera+64)%64);

			out.copyTo(framebuffer(cv::Rect(0,96,256,96)));
			displayFramebufferSDL();
			
			uint32_t delay = SDL_GetTicks()%(1000/30);
			SDL_Delay(1000/30-delay);
		}
	}
}

////////////////////////////////////////////////////////////////////////
// Build MSX1 palette
//
// Manuel Martinez (salutte@gmail.com)
//
// FLAGS: -std=gnu++14 -g `pkg-config opencv4 --cflags --libs` -Ofast -lpthread -fopenmp -lgomp -Wno-format-nonliteral -lSDL2

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

static cv::Mat3b sprites;

static inline void put_fish_sprite(cv::Mat3b img, float si, float sj, float dist, cv::Vec3b color) {
	
	for (int i=0; i<16; i++) {
		for (int j=0; j<16; j++) {
			int pi=0, pj=0;
			if (dist>34) {pi = 0; pj = 16;}
			if (dist>50) {pi = 16; pj = 16;}
			if (dist>58) continue;

			if (sprites( pi + i, pj + j)[0]>128) continue;
			
			int ii = std::round(si-16+i);
			int ij = std::round(sj-8+j);
			if (ii<0) continue;
			if (ij<0) continue;
			if (ii>=img.rows) continue;
			if (ij>=img.cols) continue;
					
			img(ii,ij) = color;
		}
	}
}


static inline void put_car_sprite(cv::Mat3b img, float si, float sj, float dist, int angle, cv::Vec3b color) {
	

	if (dist<32) {
		for (int i=0; i<32; i++) {
			for (int j=0; j<32; j++) {
				int pi=0, pj=0;
				if (dist<16) {
					if (angle==0 or angle==4) { pi = 0; pj = 32;}
					if (angle==1) { pi = 32; pj = 96;}
					if (angle==2 or angle==3) { pi = 32; pj = 64;}
					if (angle==5 or angle==6) { pi = 32; pj = 32;}
					if (angle==7) { pi = 32; pj = 0;}
				} else if (dist<32) {
					if (angle==0 or angle==4) { pi = 0; pj = 64;}
					if (angle==1) { pi = 64; pj = 96;}
					if (angle==2 or angle==3) { pi = 64; pj = 64;}
					if (angle==5 or angle==6) { pi = 64; pj = 32;}
					if (angle==7) { pi = 64; pj = 0;}
				}

				if (sprites( pi + i, pj + j)[0]>128) continue;
				
				int ii = std::round(si-32+i);
				int ij = std::round(sj-16+j);
				if (ii<0) continue;
				if (ij<0) continue;
				if (ii>=img.rows) continue;
				if (ij>=img.cols) continue;
						
				img(ii,ij) = color;
			}
		}	
	} else {
		for (int i=0; i<16; i++) {
			for (int j=0; j<16; j++) {
				int pi=0, pj=0;
				if (dist<38) {
					if (angle==0 or angle==4) { pi =  0; pj = 96;}
					if (angle==1)             { pi = 96; pj = 48;}
					if (angle==2 or angle==3) { pi = 96; pj = 32;}
					if (angle==5 or angle==6) { pi = 96; pj = 16;}
					if (angle==7)             { pi = 96; pj =  0;}
				} else if (dist<42) {
					if (angle==0 or angle==4) { pi =  0; pj = 112;}
					if (angle==1)             { pi = 96; pj = 64+48;}
					if (angle==2 or angle==3) { pi = 96; pj = 64+32;}
					if (angle==5 or angle==6) { pi = 96; pj = 64+16;}
					if (angle==7)             { pi = 96; pj = 64+ 0;}
				} else if (dist<46) {
					if (angle==0 or angle==4) { pi = 16; pj = 96;}
					if (angle==1)             { pi =112; pj = 48;}
					if (angle==2 or angle==3) { pi =112; pj = 32;}
					if (angle==5 or angle==6) { pi =112; pj = 16;}
					if (angle==7)             { pi =112; pj =  0;}
				} else if (dist<51) {pi =112; pj = 64;
				} else if (dist<55) {pi =112; pj = 80;
				} else if (dist<58) {pi =112; pj = 96;
				} else if (dist<60) {pi =112; pj =112;
				} else {pi =112; pj =112;}

				if (sprites( pi + i, pj + j)[0]>128) continue;
				
				int ii = std::round(si-16+i);
				int ij = std::round(sj-8+j);
				if (ii<0) continue;
				if (ij<0) continue;
				if (ii>=img.rows) continue;
				if (ij>=img.cols) continue;
						
				img(ii,ij) = color;
			}
		}
	}
}


int main(int argc, char **argv) {
	
	initSDL();
	
	double deg2rad = M_PI / 180.0;
    
    sprites = cv::imread(argv[1]);
    
    cv::Mat3b img = cv::imread(argv[2]);
 
	Entity3D player, camera, target;
	
	int angle = 0;
	
    player.pos[0] = img.rows / 2. - 0.125;
    player.pos[1] = img.cols / 2. - 0.125 + 1;
    player.pos[2] = 0;

    player.pos[0] = 24;
    player.pos[1] = 1;
    
	camera.pos[0] = 0;
	camera.pos[1] = -4;
	camera.pos[2] = 2;
	camera.rot = camera.rot*rotX(-14);

    target.pos[0] = player.pos[0] + 0;
    target.pos[1] = player.pos[1] + 2;
    target.pos[2] = 0;
	
    for (;;) {

		cv::Mat3b out = cv::Mat3b(128,256);
		
		cv::Vec3f p0 = cv::Vec3f(0.f,0.f,0.f);
		cv::Vec3f n = cv::Vec3f(0.f,0.f,1.f);

		float FoV = 43;
		float sFoV = std::sin(FoV * (M_PI / 180.0));
		float f = (out.cols/2.-0.5) * std::sqrt(1.-sFoV*sFoV)/sFoV;
		
		for (int i=0; i<out.rows; i++) {
			for (int j=0; j<out.cols; j++) {

				cv::Vec3f l;
				l[0] =  (j+0.50-out.cols/2.)/f;
				l[1] =  1.;
				l[2] = -(i+0.50-out.rows/2.)/f;

//				if (i>64) l = cv::Vec3f((((j+2.)/4.*4.)+0.5-out.cols/2.)/f,1.,-(((i+1.)/2.*2.)+0.5-out.rows/2.)/f);
				
				l = player.rot*camera.rot*l;
				
				if (l[2]>-0.01) {
					out(i,j) = cv::Vec3b(0,0,0);
					continue;
				}
				
				cv::Vec3f posV = player.pos;
				
				//posV[0] = std::round(4*posV[0])*0.25+0.125;
				//posV[1] = std::round(4*posV[1])*0.25+0.125;
				
				
				cv::Vec3f pos = posV + player.rot*camera.pos;
				
				
				float d = (p0 - (pos)).dot(n)/l.dot(n);
				cv::Vec3f pf = d*l + pos;// - cv::Vec3f(0.5f, 0.5f, 0.5f);
				cv::Vec3i p; 
				p[0]=std::floor(pf[0]); 
				p[1]=std::floor(pf[1]); 
				p[2]=std::floor(pf[2]);
				//std::cerr << "d: " << (d*l + (player.pos+camera.pos)) << " " << d << std::endl;
				
				if (p[0]>=0 and p[1]>=0 and p[0]<img.rows and p[1]<img.cols) {
					out(i,j) = img(p[0],p[1]);
				} else {
					out(i,j) = 0;
				}
				
				{
					
					if(1) if (sqrt(cv::Vec3f(player.pos-pf).dot(player.pos-pf))<0.25) {
						out(i,j) = 0;
					}

					if(1) if (sqrt(cv::Vec3f(target.pos-pf).dot(target.pos-pf))<0.25) {
						out(i,j) = 0;
					}
				}
				
				if (i==32) out(i,j)=255;
				if (i==64) out(i,j)=255;

				if (i==95) out(i,j)=255;

				if (j==128-17) out(i,j)=255;
				if (j==127+17) out(i,j)=255;
				
			}
		}
		
		if (0) {	
			cv::Vec3f o = player.pos + player.rot*camera.pos;
			cv::Vec3f l = target.pos - o;
			
			cv::Vec3f n;
			n[0] =  0;
			n[1] =  1;
			n[2] =  0;
			n = player.rot*camera.rot*n;

			cv::Vec3f nj;
			nj[0] =  1;
			nj[1] =  0;
			nj[2] =  0;
			nj = player.rot*camera.rot*nj;

			cv::Vec3f ni;
			ni[0] =  0;
			ni[1] =  0;
			ni[2] =  -1;
			ni = player.rot*camera.rot*ni;

			//std::cerr << player.pos << " " << (player.rot*camera.pos) << " " <<  l << " " << n << std::endl;

			cv::Vec3f p0 = o + n;
			
			float d = (p0 - o).dot(n)/l.dot(n);
			
			
			cv::Vec3f in = o + l*d;
			
			int ii = std::floor(ni.dot(in-p0)*f + out.rows/2.);
			int jj = std::floor(nj.dot(in-p0)*f + out.cols/2.);

			//std::cerr << ii << " " << jj << std::endl;
				
			if (ii>=0 and jj>=0 and ii<	out.rows and jj < out.cols) {
				out(ii,jj) = cv::Vec3b(255,255,0);
			}
				
		}
		
		{
			//std::cerr << "Distance to Target: " << cv::norm(target.pos-(player.pos + player.rot*camera.pos)) << std::endl;
		}

		{	
			
			cv::Vec3f l = camera.rot.t()*(player.rot.t()*(target.pos - player.pos) - camera.pos);
			
			cv::Vec3f in = l*f/l[1];
			
			int ii = std::floor(-in[2] + out.rows/2.);
			int jj = std::floor(in[0] + out.cols/2.);

			//std::cerr << ii << " " << jj << std::endl;
				
			if (ii>=0 and jj>=0 and ii<	out.rows and jj < out.cols) {
				out(ii,jj) = cv::Vec3b(255,255,0);
			}
				
		}

		int kkkk = 0;
		for (int i=0; i<img.rows; i++) {
			for (int j=0; j<img.cols; j++) {
				if (img(i,j)[1]!=0x67) continue;
				if (kkkk) continue;
				
				cv::Vec3f tg = {i+0.5f,j+0.5f,0.f};
				tg -= player.pos;
				
				cv::Vec3f b = camera.rot.t()*camera.pos;
				cv::Vec3f l = camera.rot.t()*player.rot.t()*tg;
				
//				std::cerr << camera.rot.t() << std::endl;
// [1, 0, 0;
//  0, cc, -sc;
//	0, sc, cc]			
//				std::cerr << player.rot.t() << std::endl;
//[cp, sp, 0;
// -sp, cp, 0;
// 0, 0, 1]

// l1 = [tx*cp+ty*sp, -tx*sp+ty*cp, 0]
// l2 = [tx*cp+ty*sp, -tx*sp*cc+ty*cp*cc, -tx*sp*sc+ty*cp*sc]
// in = [(tx*cp+ty*sp)*f/(-tx*sp*cc+ty*cp*cc), 1, (-tx*sp*sc+ty*cp*sc)*f/(-tx*sp*cc+ty*cp*cc)]


				l -= b;
				
				cv::Vec3f in_good = l*f/l[1];

				float tx = tg(0), ty = tg(1);
				float cc = camera.rot.t()(1,1), sc = camera.rot.t()(2,1);
				float cp = player.rot.t()(0,0), sp = player.rot.t()(0,1);

				cv::Vec3f in_ref = {
					(tx*cp+ty*sp-b(0))/(-tx*sp*cc+ty*cp*cc-b(1))*f, 
					f, 
					(-tx*sp*sc+ty*cp*sc-b(2))/(-tx*sp*cc+ty*cp*cc-b(1))*f};

				cv::Vec3f in_mid = {
					exp((int(64*std::log(f*(tx*cp+ty*sp-b(0)))) - int(64*std::log((-tx*sp*cc+ty*cp*cc-b(1)))))/64.), 
					f, 
					f*(-tx*sp*sc+ty*cp*sc-b(2))/(-tx*sp*cc+ty*cp*cc-b(1))};

				struct {
					int8_t txcp[256], tysp[256];
					int8_t txspcc[256], tycpcc[256];
					int8_t txspsc[256], tycpsc[256];
				} P[64];
				int8_t l16_00[256];
				int8_t l16_01[256];				
				int8_t e16_1[256];


				for (int p=0; p<64; p++) {
					for (int ii=-128; ii<127; ii++) {
						
						// For those, the input is in range [0,127] and output is in range [-111,111].
						P[p].txcp  [uint8_t(ii)] = std::round((1-16/128.)*(ii+0.5)*cos((angle/64.)*2*3.1416));
						P[p].tysp  [uint8_t(ii)] = std::round((1-16/128.)*(ii+0.5)*sin((angle/64.)*2*3.1416));
						P[p].txspcc[uint8_t(ii)] = std::round((1-16/128.)*(ii+0.5)*sin((angle/64.)*2*3.1416)*cc);
						P[p].tycpcc[uint8_t(ii)] = std::round((1-16/128.)*(ii+0.5)*cos((angle/64.)*2*3.1416)*cc);
						P[p].txspsc[uint8_t(ii)] = std::round((1-16/128.)*(ii+0.5)*sin((angle/64.)*2*3.1416)*sc);
						P[p].tycpsc[uint8_t(ii)] = std::round((1-16/128.)*(ii+0.5)*cos((angle/64.)*2*3.1416)*sc);

						{
							{
								double v = f*(0.5*(ii+0.5));
								if (v<0) v = -v;
								if (v<1e-5) v = 1e-5;
									
								l16_00[uint8_t(ii)] = std::max(-63., std::min(63., std::round(8*std::log(v)-64)));
							}
							{
								double v = 0.5*(ii+0.5);
								if (v<0) v = -v;
								if (v<1e-5) v = 1e-5;
									
								l16_01[uint8_t(ii)] = std::max(-63., std::min(63., std::round(8*std::log(v))));
							}
							e16_1[uint8_t(ii)] = std::max(0., std::min(255., std::round(std::exp((abs(64+ii)+0.5)/8.))));
						}
					}					
				}

				

				cv::Vec3f in = {
					exp((int(64*std::log(f*(tx*cp+ty*sp-b(0)))) - int(64*std::log((-tx*sp*cc+ty*cp*cc-b(1)))))/64.), 
					f, 
					f*(-tx*sp*sc+ty*cp*sc-b(2))/(-tx*sp*cc+ty*cp*cc-b(1))};
					
				if (kkkk++ == 0) {
					
					std::cerr << in_good << " " << in << " " << (int(64*std::log(f*(tx*cp+ty*sp-b(0))))) << std::endl;

					std::cerr << -tx*sp*cc << " " << ty*cp*cc << " " << b(0)  << std::endl;

					std::cerr << cc << " " << cos((angle/64.)*2*3.1416) << " " << b(1)  << std::endl;
					
					std::cerr << tx << " " << ty << " " << angle << std::endl;

					std::cerr << "A: " << tx*cp << " " 
					          << int(P[angle].txcp[int(tx*2)])/2.
					          << std::endl;

					std::cerr << "B: " << ty*sp << " " 
					          << int(P[angle].tysp[int(ty*2)])/2.
					          << std::endl;

					
					std::cerr << "C: ";
					{
						int8_t v1 = P[angle].txcp[int(tx*2)];
						int8_t v2 = P[angle].tysp[int(ty*2)];
						int8_t v12b0 = v1 + v2 + std::round(2*b(0));
						std::cerr << int(v1) << " " << int(v2) <<  " " << int(v12b0) << " ";
						if (v12b0>0) {
							std::cerr << 8*std::log(f*(tx*cp+ty*sp-b(0))) << " " << int(64+l16_00[v12b0]) << std::endl;
						} else {
							std::cerr << 8*std::log(-f*(tx*cp+ty*sp-b(0))) << " " << int(64+l16_00[-v12b0]) << std::endl;
						}
					}

					std::cerr << "D: ";
					{
						int8_t w1 = P[angle].txspcc[int(tx*2)];
						int8_t w2 = P[angle].tycpcc[int(ty*2)];
						int8_t w12b0 = -w1 + w2 - std::round(2*b(1));
						std::cerr << int(w1) << " " << int(w2) <<  " " << int(w12b0) << " ";
						if (w12b0>0) {
							std::cerr << 8*std::log((-tx*sp*cc+ty*cp*cc-b(1))) << " " << int(l16_01[w12b0]) << std::endl;
						} else {
							std::cerr << 8*std::log(-(-tx*sp*cc+ty*cp*cc-b(1))) << " " << int(l16_01[-w12b0]) << std::endl;
						}
					}

					std::cerr << "E: ";
					{
						int8_t v1 = P[angle].txcp[int(tx*2)];
						int8_t v2 = P[angle].tysp[int(ty*2)];
						int8_t v12b0 = v1 + v2 + std::round(2*b(0));
						int8_t vt, wt;

						int8_t w1 = P[angle].txspcc[int(tx*2)];
						int8_t w2 = P[angle].tycpcc[int(ty*2)];
						int8_t w12b0 = -w1 + w2 - std::round(2*b(1));


						if (v12b0>0) { 
							
							vt = l16_00[v12b0];
							if (w12b0>0) {
								wt = l16_01[w12b0];

								std::cerr << vt-wt << " ";

								std::cerr << in_good(0) << " "
										  << int(uint8_t(e16_1[uint8_t(vt-wt)]))
										  << std::endl;
							} else {
								wt = l16_01[-w12b0];

								std::cerr << vt-wt << " ";

								std::cerr << in_good(0) << " "
										  << -int(uint8_t(e16_1[uint8_t(vt-wt)]))
										  << std::endl;
							}
								
						} else {
							vt = l16_00[-v12b0];
							if (w12b0>0) {
								wt = l16_01[w12b0];

								std::cerr << vt-wt << " ";

								std::cerr << in_good(0) << " "
										  << -int(uint8_t(e16_1[uint8_t(vt-wt)]))
										  << std::endl;
							} else {
								wt = l16_01[-w12b0];

								std::cerr << vt-wt << " ";

								std::cerr << in_good(0) << " "
										  << int(uint8_t(e16_1[uint8_t(vt-wt)]))
										  << std::endl;
							}
						}
					}
					
					
					std::cerr << "F: " << sc << " "  << b(1) << " "  << b(2) << std::endl;
					{
						//f*(-tx*sp*sc+ty*cp*sc-b(2))/(-tx*sp*cc+ty*cp*cc-b(1))};
						int8_t v1 = P[angle].txspsc[int(tx*2)];
						int8_t v2 = P[angle].tycpsc[int(ty*2)];
						int8_t v12b0 = -v1 + v2 - std::round(2*b(2));
						int8_t vt, wt;

						int8_t w1 = P[angle].txspcc[int(tx*2)];
						int8_t w2 = P[angle].tycpcc[int(ty*2)];
						int8_t w12b0 = -w1 + w2 - std::round(2*b(1));

						if (v12b0>0) { 
							
							vt = l16_00[v12b0];
							if (w12b0>0) {
								wt = l16_01[w12b0];

								std::cerr << in_good(2) << " "
										  << int(uint8_t(e16_1[uint8_t(vt-wt)]))
										  << std::endl;
							} else {
								wt = l16_01[-w12b0];

								std::cerr << in_good(2) << " "
										  << -int(uint8_t(e16_1[uint8_t(vt-wt)]))
										  << std::endl;
							}
								
						} else {
							vt = l16_00[-v12b0];
							if (w12b0>0) {
								wt = l16_01[w12b0];

								std::cerr << in_good(2) << " "
										  << -int(uint8_t(e16_1[uint8_t(vt-wt)]))
										  << std::endl;
							} else {
								wt = l16_01[-w12b0];

								std::cerr << in_good(2) << " "
										  << int(uint8_t(e16_1[uint8_t(vt-wt)]))
										  << std::endl;
							}
						}
					}
					
				}
				
				int ii = std::floor(-in[2] + out.rows/2.);
				int jj = std::floor(in[0] + out.cols/2.);
				
				//float dist = cv::norm(tg-(player.pos + player.rot*camera.pos));
				
				float dist = 96-ii;

				if (ii>=32 and jj>=0 and ii<	out.rows and jj < out.cols) {
					put_fish_sprite(out,ii,jj,dist,cv::Vec3b(169,91,99));
				}
				
			}
		}

		{	
			
			cv::Vec3f l = camera.rot.t()*(player.rot.t()*(target.pos - player.pos) - camera.pos);
			
			cv::Vec3f in = l*f/l[1];
			
			int ii = std::floor(-in[2] + out.rows/2.);
			int jj = std::floor(in[0] + out.cols/2.);

			//std::cerr << ii << " " << jj << std::endl;
				
//			float dist = cv::norm(target.pos-(player.pos + player.rot*camera.pos));

			float dist = 96-ii;
			std::cerr << dist << std::endl;

			if (ii>32 and jj>=0 and ii<	out.rows and jj < out.cols) {
				put_car_sprite(out,ii,jj,dist,0,cv::Vec3b(0,0,0));
			}				
		}
		
		// 16 angles x 4096 possibilities x 2
		// dx = target_x - player_x
		// dy = target_y - player_y
		// ldx = log(dx)  [-255,255] -> [0...63]
		// ldy = log(dy)  [-255,255] -> [0...63]
		
		
		
		
		// x and y coordinates must be centered at 8,127.5
		// at height 8, screen width must be 7 tiles.
		
		
		
		
		SDL_PumpEvents();
		const Uint8 *state = SDL_GetKeyboardState(NULL);
		if (state[SDL_SCANCODE_LEFT]) { 
			
			player.rot = player.rot * rotZ(5.625);
			angle = (angle+1)%64;
		}
		if (state[SDL_SCANCODE_RIGHT]) { 
			
			player.rot = player.rot * rotZ(-5.625);
			angle = (angle+63)%64;
		}
		if (state[SDL_SCANCODE_UP]) { 
			
			cv::Vec3f acc = cv::Vec3f(0,0.01,0);
			player.vel += player.rot * acc;
		}
		if (state[SDL_SCANCODE_DOWN]) { 
			
			cv::Vec3f acc = cv::Vec3f(0,-0.02,0);
			player.vel += player.rot * acc;
		}
		if (state[SDL_SCANCODE_B]) { 
			
			player.vel = cv::Vec3f(0,0,0);
		}
		if (state[SDL_SCANCODE_Q]) exit(-1);
		if (player.vel.dot(player.vel)>0.10) player.vel *= 0.10/player.vel.dot(player.vel);
		player.pos += player.vel;

		out.copyTo(framebuffer(cv::Rect(0,64,256,128)));
		displayFramebufferSDL();
		
		uint32_t delay = SDL_GetTicks()%(1000/30);
		SDL_Delay(1000/30-delay);
	}

}

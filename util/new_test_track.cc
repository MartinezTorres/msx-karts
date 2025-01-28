////////////////////////////////////////////////////////////////////////
// Build MSX1 palette
//
// Manuel Martinez (salutte@gmail.com)
//
// FLAGS: -std=gnu++20 -g `pkg-config opencv4 --cflags --libs` -O0 -lpthread -fopenmp -lgomp -Wno-format-nonliteral -lSDL2 -Wno-narrowing -Wno-deprecated-enum-enum-conversion


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
#include <numbers>
#include <boost/format.hpp>
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

int main() {

    constexpr auto track_file = "res/tracks/track1.png";
	
	initSDL();
	
	double deg2rad = M_PI / 180.0;
        
    cv::Mat3b img = cv::imread(track_file);
 
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
		
		// PAINT BACKGROUND
		for (int i=0; i<out.rows; i++) {
			for (int j=0; j<out.cols; j++) {

				cv::Vec3f l;
				l[0] =  (j+0.50-out.cols/2.)/f;
				l[1] =  1.;
				l[2] = -(i+0.50-out.rows/2.)/f;
				
				l = player.rot*camera.rot*l;
				
				if (l[2]>-0.01) {
					out(i,j) = cv::Vec3b(0,0,0);
					continue;
				}
				
				cv::Vec3f posV = player.pos;
				
				cv::Vec3f pos = posV + player.rot*camera.pos;
				
				
				float d = (p0 - (pos)).dot(n)/l.dot(n);
				cv::Vec3f pf = d*l + pos;
				cv::Vec3i p; 
				p[0]=std::floor(pf[0]); 
				p[1]=std::floor(pf[1]); 
				p[2]=std::floor(pf[2]);
				
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

        if (1) {	

            cv::Vec3f l = camera.rot.t()*(player.rot.t()*(target.pos - player.pos) - camera.pos);
            
            cv::Vec3f in_ref = l*f/l[1];
            
            {
                int ii = std::floor(-in_ref[2] + out.rows/2.);
                int jj = std::floor(in_ref[0] + out.cols/2.);

                if (ii>33 and jj>=1 and ii<	out.rows-1 and jj < out.cols-1) {
                    out(ii,jj+1) = cv::Vec3b(255,255,0);
                    out(ii,jj-1) = cv::Vec3b(255,255,0);
                    out(ii+1,jj) = cv::Vec3b(255,255,0);
                    out(ii-1,jj) = cv::Vec3b(255,255,0);
                }				
            }

			if (1) do { // Alt solution

                static double ldxyd[128];
                static uint16_t ldxy[2][2048];

                static uint8_t ldxy_d[(1<<14)];
                static uint8_t ldxy_a[(1<<14)];
                static uint8_t ldda_px[(1<<14)];
                static uint8_t ldda_py[(1<<14)];
                static bool init_ldxy = false;
                if (not init_ldxy) {

                    init_ldxy = true;

                    auto proj = [=](double d) {

                        d = std::abs(d);

                        Entity3D t, p;
                        p.pos(0) = 0;
                        t.pos(0) = 0;
                        p.pos(1) = 0;
                        t.pos(1) = d;
                        
                        cv::Vec3f l = camera.rot.t()*(p.rot.t()*(t.pos - p.pos) - camera.pos);
                        
                        cv::Vec3f in_ref = l*f/l[1];

                        return -in_ref[2] + out.rows/2.;
                    };

                    double range  = proj(0) - proj(64.);
                    double base   = proj(64.);


                    std::vector<double> ldxyi(2048,0.);
                    std::vector<double> ldxyiw(2048,0.);

                    for (int di = -(1<<15) +1 ; di < (1<<15); di++ ) {

                        double d = di/256./2.;

                        uint16_t dy = uint16_t( uint16_t( di ) >> 5) & 0x07FF;
                        
                        int cidx = std::floor((proj(d)-base)*64./range);
                        cidx = std::min(std::max(0,cidx),63);
                        if (di < 0) cidx = 64 + 63 - cidx;

                        ldxyi[dy] += cidx;
                        ldxyiw[dy] ++;
                    }

                    ldxy[0][0] = 63;
                    ldxy[0][2047] = 64;
                    for (int i=1, d=1, dc=0; i<1024; i++) {
                        ldxy[0][i] = ldxy[0][i-1];

                        dc ++;
                        if (dc == d) {
                            if (ldxy[0][i] > ldxyi[i] / ldxyiw[i] - (0.5) * (dc<2)) {
                                ldxy[0][i]--;
                                dc = 0;
                            } else {
                                d++;
                            }
                        }

                        ldxy[0][2047-i] = 127- ldxy[0][i];
                    }

                    std::vector<double> ldxyd(128,0.);
                    std::vector<double> ldxydw(128,0.);
                    for (int di = -(1<<15) +1 ; di < (1<<15); di++ ) {

                        //if (di==0) continue;

                        double d = di/256./2.;

                        uint16_t dy = uint16_t( uint16_t( di ) >> 5) & 0x07FF;
                        
                        int cidx = std::floor((proj(d)-base)*64./range);
                        cidx = std::min(std::max(0,cidx),63);
                        if (di < 0) cidx = 64 + 63 - cidx;

                        ldxyd[ldxy[0][dy]] += d;
                        ldxydw[ldxy[0][dy]] ++;
                    }
                    for (int i=0; i<128; i++) {
                        ldxyd[i] /= ldxydw[i];
                        //std::cerr << i << ": " << ldxyd[i] << " " << ldxydw[i] << std::endl;
                    }
                    //std::cerr << std::endl << std::endl;

                    for (int i=0; i<2048; i++) {
                        ldxy[1][i] = ldxy[0][i] << 7;
                    }


                    //static uint8_t ldxy_d[(1<<14)];
                    //static uint8_t ldxy_a[(1<<14)];
                    for (int i = 0; i < 128; i++) {
                        for (int j = 0; j < 128; j++) {

                            auto rd = std::sqrt( ldxyd[i]*ldxyd[i] + ldxyd[j]*ldxyd[j]);

                            double bestd = 1e10;
                            
                            for (int k = 0; k < 64; k++) {
                                if (bestd > std::abs(rd - ldxyd[k])) {

                                    bestd = std::abs(rd - ldxyd[k]);
                                    ldxy_d[(i<<7)+j] = k;
                                }
                            }

                            ldxy_a[(i<<7)+j] = std::round(((std::atan2( ldxyd[i] , ldxyd[j] ) / std::numbers::pi)+1)*128.);

                            //std::cerr << ldxyd[i] << " " << ldxyd[j] << " " << int(ldxy_a[(i<<7)+j]) << std::endl;

                        }
                    }

                    
                    //static uint8_t ldda_px[(1<<14)];
                    //static uint8_t ldda_py[(1<<14)];
                    for (int d = 0; d < 64; d++) {
                        for (int a = 0; a < 256; a++) {

                            double x = ldxyd[d] * sin( 2 * std::numbers::pi * (a+128) / 256.);
                            double y = ldxyd[d] * cos( 2 * std::numbers::pi * (a+128) / 256.);


                            Entity3D t, p;
                            p.pos(0) = 0;
                            t.pos(0) = x;
                            p.pos(1) = 0;
                            t.pos(1) = y;
                        
                            cv::Vec3f l = camera.rot.t()*(p.rot.t()*(t.pos - p.pos) - camera.pos);
                            
                            cv::Vec3f in_ref = l*f/l[1];

                            int ii = std::floor(-in_ref[2] + out.rows/2.);
                            int jj = std::floor(in_ref[0] + out.cols/2.);

                            ldda_px[(d<<8)+a] = 0;
                            ldda_py[(d<<8)+a] = 0;

                            if (ii>33 and jj>=0 and ii < out.rows and jj < out.cols) {
                            
                                ldda_px[(d<<8)+a] = ii;
                                ldda_py[(d<<8)+a] = jj;
                            }
                        }
                    }



                }

				static bool init_ldxy_lut = false;
				if (not init_ldxy_lut) {
					init_ldxy_lut = true;

					std::ofstream ofh("tmp/projection_luts.h");
					ofh << "#pragma once" << std::endl;
					ofh << "#include <stdint.h>" << std::endl;

					{
						std::ofstream off("tmp/p_ldxy.c");
						off << "#include <stdint.h>" << std::endl;
						ofh << "extern const uint16_t p_ldxy[2][2048];" << std::endl;
						off << "const uint16_t p_ldxy[2][2048] = { { \n\t";
						for (int i=0; i<2048; i++) off << "0x" << boost::format("%04X") % ldxy[0][i] <<  boost::format("%s") % (i%16==15?",\n\t":", ");
						off << "}, { \n\t";
						for (int i=0; i<2048; i++) off << "0x" << boost::format("%04X") % (ldxy[1][i] | 0x8000) <<  boost::format("%s") % (i%16==15?",\n\t":", ");
						off << "} };\n\n";
					}

					{
						std::ofstream off("tmp/p_ldxy_d.c");
						off << "#include <stdint.h>" << std::endl;
						ofh << "extern const uint8_t p_ldxy_d[8192];" << std::endl;
						off << "const uint8_t p_ldxy_d[8192] = { \n\t";
						for (int i=0; i<8192; i++) off << "0x" << boost::format("%02X") % int(ldxy_d[i]) <<  boost::format("%s") % (i%32==31?",\n\t":", ");
						off << "};\n\n";
					}

					{
						std::ofstream off("tmp/p_ldxy_a.c");
						off << "#include <stdint.h>" << std::endl;
						ofh << "extern const uint8_t p_ldxy_a[8192];" << std::endl;
						off << "const uint8_t p_ldxy_a[8192] = { \n\t";
						for (int i=0; i<8192; i++) off << "0x" << boost::format("%02X") % int(ldxy_a[i]) <<  boost::format("%s") % (i%32==31?",\n\t":", ");
						off << "};\n\n";
					}

					{
						std::ofstream off("tmp/p_ldda_px.c");
						off << "#include <stdint.h>" << std::endl;
						ofh << "extern const uint8_t p_ldda_px[8192];" << std::endl;
						off << "const uint8_t p_ldda_px[8192] = { \n\t";
						for (int i=0; i<8192; i++) off << "0x" << boost::format("%02X") % int(ldda_px[i]) <<  boost::format("%s") % (i%32==31?",\n\t":", ");
						off << "};\n\n";
					}

					{
						std::ofstream off("tmp/p_ldda_py.c");
						off << "#include <stdint.h>" << std::endl;
						ofh << "extern const uint8_t p_ldda_py[8192];" << std::endl;
						off << "const uint8_t p_ldda_py[8192] = { \n\t";
						for (int i=0; i<8192; i++) off << "0x" << boost::format("%02X") % int(ldda_py[i]) <<  boost::format("%s") % (i%32==31?",\n\t":", ");
						off << "};\n\n";
					}
				}

                int16_t jj = 0, ii = 0;
				do {

					uint16_t dx = (uint16_t( uint16_t(std::round(target.pos(0)*2*256)) - uint16_t(std::round(player.pos(0)*2*256)) ) >> 5) & 0x07FF;
					uint16_t dy = (uint16_t( uint16_t(std::round(target.pos(1)*2*256)) - uint16_t(std::round(player.pos(1)*2*256)) ) >> 5) & 0x07FF;

                    uint16_t idx1 = ldxy[1][dx]+ldxy[0][dy];
                    uint16_t d = ldxy_d[idx1];
                    uint16_t a = ldxy_a[idx1];

                    std::cerr << dx << " " << dy << " " << idx1 << " " << d << " " << a << " " << angle <<  std::endl;

                    uint16_t da = (d<<8) + ((a + 4 * angle)&0xFF);
                    ii = ldda_px[da];
                    jj = ldda_py[da];

                    std::cerr << jj << " " << ii << std::endl;


				} while (false);
				
                {
                    int i0 = ii, j0 = jj;
                    for (int i = -2; i<=2; i++) {
                        ii = i0 + i; jj = j0 - 2;
                        if (ii>32 and jj>=0 and ii<	out.rows and jj < out.cols) out(ii,jj) = cv::Vec3b(128,128,255);
                        ii = i0 + i; jj = j0 + 2;
                        if (ii>32 and jj>=0 and ii<	out.rows and jj < out.cols) out(ii,jj) = cv::Vec3b(128,128,255);
                        ii = i0 + 2; jj = j0 - i;
                        if (ii>32 and jj>=0 and ii<	out.rows and jj < out.cols) out(ii,jj) = cv::Vec3b(128,128,255);
                        ii = i0 - 2; jj = j0 - i;
                        if (ii>32 and jj>=0 and ii<	out.rows and jj < out.cols) out(ii,jj) = cv::Vec3b(128,128,255);
                    }
                }
				
								
			} while(false);	
        }

		
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

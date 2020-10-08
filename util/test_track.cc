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

int main(int argc, char **argv) {
	
	initSDL();
	
	double deg2rad = M_PI / 180.0;
    
    cv::Mat3b img = cv::imread(argv[1]);
 
	Entity3D player, camera, target;
	
    player.pos[0] = img.rows / 2. - 0.125;
    player.pos[1] = img.cols / 2. - 0.125 + 1;
    player.pos[2] = 0;

//    player.pos[0] = 1;
//    player.pos[1] = 1;
    
	camera.pos[0] = 0;
	camera.pos[1] = -2;
	camera.pos[2] = 1;
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
				cv::Vec3i p; p[0]=std::floor(pf[0]); p[1]=std::floor(pf[1]); p[2]=std::floor(pf[2]);
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

			std::cerr << ii << " " << jj << std::endl;
				
			if (ii>=0 and jj>=0 and ii<	out.rows and jj < out.cols) {
				out(ii,jj) = cv::Vec3b(255,255,0);
			}
				
		}

		{	
			
			cv::Vec3f l = camera.rot.t()*(player.rot.t()*(target.pos - player.pos) - camera.pos);
			
			cv::Vec3f in = l*f/l[1];
			
			int ii = std::floor(-in[2] + out.rows/2.);
			int jj = std::floor(in[0] + out.cols/2.);

			std::cerr << ii << " " << jj << std::endl;
				
			if (ii>=0 and jj>=0 and ii<	out.rows and jj < out.cols) {
				out(ii,jj) = cv::Vec3b(255,255,0);
			}
				
		}
		
		
		// x and y coordinates must be centered at 8,127.5
		// at height 8, screen width must be 7 tiles.
		
		
		
		
		SDL_PumpEvents();
		const Uint8 *state = SDL_GetKeyboardState(NULL);
		if (state[SDL_SCANCODE_LEFT]) { 
			
			player.rot = player.rot * rotZ(5.625);
		}
		if (state[SDL_SCANCODE_RIGHT]) { 
			
			player.rot = player.rot * rotZ(-5.625);
		}
		if (state[SDL_SCANCODE_UP]) { 
			
			cv::Vec3f acc = cv::Vec3f(0,0.01,0);
			player.vel += player.rot * acc;
		}
		if (state[SDL_SCANCODE_DOWN]) { 
			
			cv::Vec3f acc = cv::Vec3f(0,-0.02,0);
			player.vel += player.rot * acc;
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

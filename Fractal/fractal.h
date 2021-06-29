#ifndef FRACTAL_H
#define FRACTAL_H


//include the necessary librairies//

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

///prototypes////


void light_pixel(int, int , SDL_Renderer *);
void burning_ship(int,int ,SDL_Renderer *);
void mandelbrot(int x,int y,SDL_Renderer *renderer);
void julia_set(int x,int y,SDL_Renderer *renderer);


#endif


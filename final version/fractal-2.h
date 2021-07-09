#ifndef FRACTAL_H
#define FRACTAL_H


//include the necessary librairies//

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include<stdlib.h>
#include<stdio.h>

///prototypes////


void light_pixel(int i, int j, SDL_Renderer *);
void mandelbrot(int x,int y,SDL_Renderer *renderer,int zoom);
void burning_ship(int x,int y,SDL_Renderer *renderer);
void julia_set(int x,int y,SDL_Renderer *renderer);


#endif


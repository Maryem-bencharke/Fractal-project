#ifndef MANDELBROT_H
#define MANDELBROT_H


//include the necessary librairies//

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include<stdlib.h>
#include<stdio.h>
#define iteration_max 50

///prototypes////


void light_pixel(double, double , SDL_Renderer *);
void mandelbrot(double,double ,SDL_Renderer *);

#endif





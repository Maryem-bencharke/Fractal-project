#include"mandelbrot.h"

void light_pixel(double i, double j , SDL_Renderer *renderer)
{
    SDL_SetRenderDrawColor(renderer , 50, 0 , 255 , SDL_ALPHA_OPAQUE);
    SDL_RenderDrawPoint(renderer , i , j);
}


void mandelbrot(double x,double y,SDL_Renderer *renderer)
{
	double x1 = -2.1;
	double x2 = 0.6;
	double y1 = -1.2;
	double y2 = 1.2;
	int zoom = 100;// pour une distance de 1 sur le plan, on a 100 pixel sur l'image


	// on calcule la taille de l'image :
	double image_x = (x2 - x1) * zoom;
	double image_y = (y2 - y1) * zoom;
        double c_r = x / zoom + x1;
        double c_i = y / zoom + y1;
        double z_r = 0;
        int z_i = 0;
        int i = 0;
	while( z_r*z_r + z_i*z_i < 4 && i < iteration_max)
	{
		double tmp = z_r;
            	z_r = z_r*z_r - z_i*z_i + c_r;
            	z_i = 2*z_i*tmp + c_i;
            	i = i+1;
	}	
	if(i==iteration_max)
				
	{
		light_pixel( x, y ,renderer);			
	}	
		
		
	
}








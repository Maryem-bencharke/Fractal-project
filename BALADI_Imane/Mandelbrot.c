#include"mandelbrot.h"

void light_pixel(int i, int j , SDL_Renderer *renderer)
{
    SDL_SetRenderDrawColor(renderer , 50, 0 , 255 , SDL_ALPHA_OPAQUE);
    SDL_RenderDrawPoint(renderer , i , j);
}


void mandelbrot(int x,int y,SDL_Renderer *renderer)

	int zoom = 100;// pour une distance de 1 sur le plan, on a 100 pixel sur l'image


	// on calcule la taille de l'image :
        double c_r = (x -250.0)/ zoom ;
        double c_i = (y -250.0)/ zoom ;
        double z_r = 0;
        double z_i = 0;
        int i = 0;
	int iteration_max=100;
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


#include"fractal-2.h"


void light_pixel(int i, int j , SDL_Renderer *renderer)
{
    SDL_SetRenderDrawColor(renderer , 0, 0 , 0, SDL_ALPHA_OPAQUE);
    SDL_RenderDrawPoint(renderer , i , j);
}


void mandelbrot(int x,int y,SDL_Renderer *renderer,int zoom)
{
	// pour une distance de 1 sur le plan, on a 100 pixel sur l'image


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
		
	else
	{
		SDL_SetRenderDrawColor(renderer , i*20*40/iteration_max, i*100/iteration_max ,i*20*40/iteration_max, SDL_ALPHA_OPAQUE);

    		SDL_RenderDrawPoint(renderer , x, y);
	}	
	


}

void burning_ship(int x,int y,SDL_Renderer *renderer)
{
	int zoom = 100;// pour une distance de 1 sur le plan, on a 100 pixel sur l'image
	double c_r=(x - 250.0)/zoom;
	double c_i= (y - 250.0)/zoom;
    	double z_r = 0;
    	double z_i = 0;
    	int i = 0;
	int iteration_max = 100;
    	while((z_r * z_r + z_i *z_i) < 4 && i<iteration_max)
    	{
        	double temp = z_r * z_r - z_i *z_i + c_r ;
        	z_i = fabs(2*z_i * z_r ) + c_i;
        	z_r = temp;
        	i = i+1;
    	}
	if(i==iteration_max)
				
	{
		light_pixel( x, y ,renderer);			
	}	
	else
	{
		SDL_SetRenderDrawColor(renderer ,i*40/iteration_max, i*100/iteration_max,i*255*40/iteration_max , SDL_ALPHA_OPAQUE);
    		SDL_RenderDrawPoint(renderer , x , y);

	}
	

	
}



void julia_set(int x,int y,SDL_Renderer *renderer)
{
	int zoom = 100;// pour une distance de 1 sur le plan, on a 100 pixel sur l'image
	double c_r=0.285;
	double c_i=-0.01;
        double z_r = (x-250.0)/zoom;
        double z_i = (y-250.0)/zoom;
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
	else
	{
		SDL_SetRenderDrawColor(renderer , 0, 0 ,i*255/iteration_max, SDL_ALPHA_OPAQUE);
    		SDL_RenderDrawPoint(renderer , x , y);
	}


}














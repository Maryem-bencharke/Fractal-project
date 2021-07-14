#include"fractal-2.h"

int main(int argc ,char *argv[])
{
    if(argc!=2)
    {
		printf("ERROR");
		exit(EXIT_FAILURE);
    }
               /*---------------------------------mandelbrot set ----------------------------------*/

    if(strcmp(argv[1],"mandelbrot")==0)
    {
	 if(SDL_Init(SDL_INIT_VIDEO) == 0)
        {
        	SDL_Window* window = NULL;
        	SDL_Renderer* renderer = NULL;

        	if(SDL_CreateWindowAndRenderer(500,500,0, &window , &renderer) == 0)
        	{
				SDL_bool running = SDL_TRUE;
            		int i = 0, j;

            		while(i !=500)
            		{
                		j = 0;
                		while(j!=500)
                		{
                			mandelbrot(i,j,renderer,100);    
                  			j++;
               			}
                		i++;
            		}       
         
            		SDL_RenderPresent(renderer);
			
				while (running) 
				{
					SDL_Event event;

					while (SDL_PollEvent(&event)) 
					{
						switch (event.type) 
						{
							case SDL_QUIT:
								running = SDL_FALSE;
							break;
						}	

						switch(event.key.keysym.sym)
						{

							case SDLK_w:
								
								SDL_SetRenderDrawColor(renderer,0,0,0,SDL_ALPHA_OPAQUE);
								SDL_RenderClear(renderer);
								SDL_RenderPresent(renderer);
								int i = 0, j;
					
            						while(i !=500)
            						{
                						j = 0;

                						while(j!=500)
                						{
                							mandelbrot(i,j,renderer,200);
								 			j++;
               							}
                						i++;
            						}       
								SDL_RenderPresent(renderer);
							break;
						}
					}	
				}
			}

        	if(renderer)
            		SDL_DestroyRenderer(renderer);
        	if(window)
            		SDL_DestroyWindow(window);
    	}
    	SDL_Quit();
    	return 0;
	}

			/*---------------------------------julia set ----------------------------------*/

    if(strcmp(argv[1],"julia_set")==0)
    {
	 	if(SDL_Init(SDL_INIT_VIDEO) == 0)
        {
        	SDL_Window* window = NULL;
        	SDL_Renderer* renderer = NULL;

        	if(SDL_CreateWindowAndRenderer(500,500,0, &window , &renderer) == 0)
        	{
            		SDL_bool done = SDL_FALSE;

            		int i = 0, j;

            		while(i !=500)
            		{
                		j = 0;
                		while(j!=500)
                		{
                			julia_set(i,j,renderer);    
                  			j++;
               			}
                		i++;
            		}       
         
            		SDL_RenderPresent(renderer);

            		while(!done)
            		{
                		SDL_Event event;
                		while (SDL_PollEvent(&event))
                		{
                    			if (event.type == SDL_QUIT)
                        			done = SDL_TRUE;
                		}
						switch(event.key.keysym.sym)
						{
    						case SDL_MOUSEMOTION:
									
									SDL_SetRenderDrawColor(renderer,0,0,0,SDL_ALPHA_OPAQUE);
									SDL_RenderClear(renderer);
									SDL_RenderPresent(renderer);
						
									int i = 0, j;

            						while(i !=500)
            						{
                						j = 0;
                						while(j!=500)
                						{
                							julia_set(i,j,renderer);    
                  							j++;
               							}
                						i++;
            						}	       
									SDL_RenderPresent(renderer);
					
    						break;
					
    						case SDL_MOUSEBUTTONUP:
									
									SDL_SetRenderDrawColor(renderer,0,0,0,SDL_ALPHA_OPAQUE);
									SDL_RenderClear(renderer);
									SDL_RenderPresent(renderer);
						
									//int i = 0, j;
						
      			      					while(i !=500)
      			      					{
      			          					j = 0;
      			          					while(j!=500)
      			          					{
      			          						julia_set(i,j,renderer);   
      		            						j++;
      		         						}
      			          					i++;
      			      					}       
									SDL_RenderPresent(renderer);
						
    						break;
						
    						case SDL_MOUSEWHEEL:
								
									SDL_SetRenderDrawColor(renderer,0,0,0,SDL_ALPHA_OPAQUE);
									SDL_RenderClear(renderer);
									SDL_RenderPresent(renderer);

									//int i = 0, j;

	            						while(i !=500)
	            						{
	                						j = 0;
	                						while(j!=500)
	                						{
	                							julia_set(i,j,renderer);    
	                  							j++;
	               							}
	                						i++;
	            						}       
									SDL_RenderPresent(renderer);
						    break;						
						}
					}
			}			
            		
        	if(renderer)
            		SDL_DestroyRenderer(renderer);
        	if(window)
            		SDL_DestroyWindow(window);
    	}
    	SDL_Quit();
    	return 0;
  
    }
			/*--------------------------------burning ship---------------------------*/	
    
    if(strcmp(argv[1],"burning_ship")==0)
    {
	 if(SDL_Init(SDL_INIT_VIDEO) == 0)
        {
        	SDL_Window* window = NULL;
        	SDL_Renderer* renderer = NULL;

        	if(SDL_CreateWindowAndRenderer(500,500,0, &window , &renderer) == 0)
        	{
            		SDL_bool done = SDL_FALSE;

            		int i = 0, j;

            		while(i !=500)
            		{
                		j = 0;
                		while(j!=500)
                		{
                			burning_ship(i,j,renderer);    
                  			j++;
               			}
                		i++;
            		}       
         
            		SDL_RenderPresent(renderer);

            		while(!done)
            		{
                		SDL_Event event;
                		while (SDL_PollEvent(&event))
                		{
                    			if (event.type == SDL_QUIT)
                        			done = SDL_TRUE;
                		}
						switch(event.key.keysym.sym)
						{

							case SDLK_z:
								
								SDL_SetRenderDrawColor(renderer,0,0,0,SDL_ALPHA_OPAQUE);
								SDL_RenderClear(renderer);
								SDL_RenderPresent(renderer);
								int i = 0, j;
					
            						while(i !=500)
            						{	
                						j = 0;

	                					while(j!=500)
	                					{
	                						burning_ship(i,j,renderer);
									 		j++;
	               						}
	                					i++;
	            					}       
								SDL_RenderPresent(renderer);
								break;
						}		
            		}
        	}
        	if(renderer)
            		SDL_DestroyRenderer(renderer);
        	if(window)
            		SDL_DestroyWindow(window);
    	}
    	SDL_Quit();
    	return 0;
    }
 
}












































































































































































































































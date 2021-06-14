#include"mandelbrot.h"

int main(int argc ,char *argv[])
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
                	mandelbrot(i,j,renderer);    
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
                    {
                        done = SDL_TRUE;
                    }
                }
            }
        }
        if(renderer){
            SDL_DestroyRenderer(renderer);
        }
        if(window){
            SDL_DestroyWindow(window);
        }
    }
    SDL_Quit();
    return 0;


}


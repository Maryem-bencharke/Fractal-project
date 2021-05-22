#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
#include<stdlib.h>
#include<stdio.h>

void light_pixel(int i, int j , SDL_Renderer *renderer)
{
    SDL_SetRenderDrawColor(renderer , 255 , 0 , 255 , SDL_ALPHA_OPAQUE);
    SDL_RenderDrawPoint(renderer , i , j);
}
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
                    if(i==j){
                        SDL_SetRenderDrawColor(renderer, 255 , 0, 255, SDL_ALPHA_OPAQUE);
                        SDL_RenderDrawPoint(renderer ,i ,j);                        
                    }
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


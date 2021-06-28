#include"fractal.h"

int main(int argc ,char *argv[])
{
   
    if(SDL_Init(SDL_INIT_VIDEO) == 0)
    {
        SDL_Window* window = NULL;
        SDL_Renderer* renderer = NULL;

        if(SDL_CreateWindowAndRenderer(700,700,0, &window , &renderer) == 0)
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
                SDL_bool running = SDL_TRUE;
                while ( running ) {
                    while ( SDL_PollEvent( &event ) != 0 ) {
		// check event type
		                switch (event.type) {
			                case SDL_QUIT:
				// shut down
				            running = SDL_FALSE;
				            break;
			                case SDL_KEYDOWN:
				// test keycode
				        switch ( event.key.keysym.sym ){
					        case SDLK_w: 
						    break;
					        case SDLK_s:
						    break;
				        }
				        break;
			case SDL_MOUSEBUTTONUP:
				// test button
				switch ( event.button.button ) {
					case SDL_BUTTON_LEFT:
						break;
					case SDL_BUTTON_RIGHT:
						break;
					case SDL_BUTTON_X1:
						break;
					
				}
		}
	}	

	// Wait before next frame
	SDL_Delay(100);
}
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


#include <SDL.h>
#include <iostream>
#include <vector>
#include <memory>
#include <time.h>
#include "Engine.hpp"
#include "Vector.hpp"

#undef main
#define FPS 120

Uint32 a,b;

int main() {

    srand(time(0));

    Engine eng;


    // Uncomment for Coulomb's law
    float vel_o_part = 4e2;

    eng.addParticle(460,vel_o_part);
    eng.addParticle(470,vel_o_part);
    eng.addParticle(480,vel_o_part);

    // eng.addNucleum(600,100);
    // eng.addNucleum(600,200);
    // eng.addNucleum(600,300);
    // eng.addNucleum(600,400);
    eng.addNucleum(600,500);

    //Uncomment for Gravity law
    // float vel_o_part = 6e2;
    // eng.addNucleum(600,300);

    // for(int i = 0; i < 600; i++){
    //     eng.addParticle(i,vel_o_part);
    // }

    b = SDL_GetTicks(); 
    a = SDL_GetTicks();
    
    while (eng.running == true){
        
        eng.handleEvents();
        eng.render();


        if(!eng.paused){
            
            while(SDL_GetTicks() - a < 1000/FPS){
                
                if(SDL_GetTicks() - b > 2000){
                    eng.addParticle(460,vel_o_part);
                    eng.addParticle(470,vel_o_part);
                    eng.addParticle(480,vel_o_part);
                    b = SDL_GetTicks();
                }
                eng.render();
                eng.handleEvents();
            }

            eng.render();
            eng.update((float)1/(FPS));

            // std::cout << "FPS: " << 1000./float(SDL_GetTicks() - a) << '\n';
            a = SDL_GetTicks();

        }
    }

    return 0;
}
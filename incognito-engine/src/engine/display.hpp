//
// Created by Incognito on 29/01/2023.
//

#ifndef INCOGNITO_ENGINE_DISPLAY_HPP
#define INCOGNITO_ENGINE_DISPLAY_HPP

#include <iostream>

#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_image.h>

#include "utility/vectors.hpp"

namespace Incognito {

    class Display {
    private:
        SDL_Renderer *m_renderer;
        SDL_Window *m_window;

        static Display* instance;

    public:
        Display(SDL_Window *window) : m_window(window) {
            m_renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
            if (m_renderer == NULL) {
                std::cout << "Could not create renderer: " << SDL_GetError() << std::endl;
            }

        }

        ~Display() { SDL_DestroyRenderer(m_renderer); }

        /*
          EN:
          Clears screen with parameter color
         
          TR:
          Girilen renkle ekrani temizler
         */
        void clear(iColor color);
        /*
          EN:
          Shows the drawn screen
         
          TR:
          Cizildikten sonra ekrani gosterir
         */
        void present();

        /*
          EN:
          Selects color
         
          TR:
          Renk secer
         */
        void setDrawColor(iColor color);
        /*
          EN:
          Draws rectangle
         
          TR:
          Dikdortgen cizer
         */
        void drawRect(float x, float y, float w, float h, iColor color);

        /*
          EN:
          Draws rounded rectangle
         
          TR:
          Koseleri kavisli dikdortgen cizer
         */
        void drawRoundRect(int x, int y, int w, int h, int radius, iColor color);

        /*
          EN:
          Draws text on window
         
          TR:
          Pencereye yazi yazar
         */
        void drawText(float x, float y, int w, int h, TTF_Font* font);

        /*
          EN:
          Draws a line
         
          TR:
          Cizgi cizer
         */
        void drawLine(float x1, float y1, float x2, float y2, iColor color);

        /*
          EN:
          Draws texture
         
          TR:
          Ekrana girilen textureleri cizer
         */
        void drawTexture(SDL_Texture *texture, int x, int y);
        void blitSurface(SDL_Surface *surface, int x, int y, int w, int h);

        SDL_Texture* textureFromSurface(SDL_Surface* surface);

        static Display* get(SDL_Window* window) { return instance = (instance == nullptr) ? new Display(window) : instance; }

        SDL_Renderer *getRenderer() { return m_renderer; }
    };

} // Incognito

#endif //INCOGNITO_ENGINE_DISPLAY_HPP

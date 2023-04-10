#ifndef INCOGNITO_ENGINE_ASSETS_HPP
#define INCOGNITO_ENGINE_ASSETS_HPP

#include <iostream>

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>

namespace Incognito {

    class iAssets {
    private:
        static iAssets *s_instance;

    public:
        static iAssets *get() { return s_instance = (s_instance != nullptr) ? s_instance : new iAssets(); }

        static SDL_Surface *loadSurface(const char *path);
        static TTF_Font *loadFont(const char *path, int fontSize);

    };

} // Incognito

#endif //INCOGNITO_ENGINE_ASSETS_HPP

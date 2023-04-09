//
// Created by Incognito on 14/02/2023.
//

#ifndef INCOGNITO_ENGINE_CAMERA_HPP
#define INCOGNITO_ENGINE_CAMERA_HPP

#include <SDL/SDL.h>

#include "utility/vectors.hpp"
#include "display.hpp"

namespace Incognito {

    class FCamera {
    private:
        SDL_Renderer *m_renderer;
        Display *m_display;

        SDL_Rect viewport;
        float m_zoom;

    public:
        FCamera(float x, float y, int w, int h) {
            viewport = {(int)x, (int)y, w, h};
            m_zoom = 1.f;
        }

        void update();
        void setDisplay(Display *display);
        void setPosition(float x, float y);
        void setZoom(float zoom);

    };

} // Incognito

#endif //INCOGNITO_ENGINE_CAMERA_HPP

#ifndef INCOGNITO_ENGINE_COMPONENT_HPP
#define INCOGNITO_ENGINE_COMPONENT_HPP

#include <SDL/SDL_ttf.h>

#include "engine/display.hpp"
#include "utility/vectors.hpp"

namespace Incognito {

    struct iComponent {
        float m_x, m_y;
        int m_width, m_height;
        iColor m_neutralColor;
        iColor m_hoverColor;
        iColor m_clickedColor;
        const char* m_text;
        TTF_Font *m_font;

        virtual void init() = 0;

        virtual void update(double dt) = 0;
        virtual void render(iDisplay *display) = 0;

    };

}

#endif //INCOGNITO_ENGINE_COMPONENT_HPP

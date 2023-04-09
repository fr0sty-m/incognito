//
// Created by Incognito on 01/02/2023.
//

#ifndef INCOGNITO_ENGINE_GAME_OBJECT_HPP
#define INCOGNITO_ENGINE_GAME_OBJECT_HPP

#include "utility/vectors.hpp"
#include "engine/display.hpp"

namespace Incognito {
    struct GameObject {
        iVector2i position;
        iVector2s size;
        float mass;

        virtual void init() = 0;

        virtual void update(double deltaTime) = 0;
        virtual void render(Display *display) = 0;

        float getPosX() const { return position.x; }
        float getPosY() const { return position.x; }
    };




}

#endif //INCOGNITO_ENGINE_GAME_OBJECT_HPP

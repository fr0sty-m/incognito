#ifndef INCOGNITO_ENGINE_SCENE_HPP
#define INCOGNITO_ENGINE_SCENE_HPP

#include "engine/display.hpp"

namespace Incognito {

    class iScene {
    private:

    public:
        virtual void init() = 0;

        virtual void update(double deltaTime) = 0;

        virtual void render(iDisplay *display) = 0;

    };

} // Incognito

#endif //INCOGNITO_ENGINE_SCENE_HPP

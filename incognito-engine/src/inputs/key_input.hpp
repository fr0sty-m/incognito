//
// Created by Incognito on 31/01/2023.
//

#ifndef INCOGNITO_ENGINE_KEY_INPUT_HPP
#define INCOGNITO_ENGINE_KEY_INPUT_HPP

#define NUM_KEYS 322

#include <SDL/SDL.h>

namespace Incognito {

    enum Keys {

        // PlayerOne 1
        GoUp = SDLK_w,
        GoDown = SDLK_s,
        GoLeft = SDLK_a,
        GoRight = SDLK_d,

        // PlayerOne 2
        GoUpArrow = SDLK_UP,
        GoDownArrow = SDLK_DOWN,
        GoRightArrow = SDLK_RIGHT,
        GoLeftArrow = SDLK_LEFT,

        // Function keys
        Use = SDLK_e,
        Tab = SDLK_TAB,
        Enter = SDLK_RETURN,
        Jump = SDLK_SPACE,

        // Ctrl keys
        LCtrl = SDLK_LCTRL,
        RCtrl = SDLK_RCTRL,

        // Alt keys
        LAlt = SDLK_LALT,
        RAlt = SDLK_RALT,


    };

    class KeyInput {
    private:
        bool m_keyState[NUM_KEYS];

    public:
        KeyInput();

        void update(SDL_Event event);

        bool isKeyDown(int key) { return m_keyState[static_cast<int>(key)]; }
        bool isKeyUp(int key) { return m_keyState[static_cast<int>(key)]; }
    };

} // Incognito

#endif //INCOGNITO_ENGINE_KEY_INPUT_HPP

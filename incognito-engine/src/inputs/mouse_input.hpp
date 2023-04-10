#ifndef INCOGNITO_ENGINE_MOUSE_INPUT_HPP
#define INCOGNITO_ENGINE_MOUSE_INPUT_HPP

#include <SDL/SDL.h>

#include "utility/vectors.hpp"

#define NUM_BUTTONS 5

namespace Incognito {
    enum Buttons {

        LeftClick = SDL_BUTTON_LEFT,
        RightClick = SDL_BUTTON_RIGHT,
        MiddleClick = SDL_BUTTON_MIDDLE,

        MouseButton4 = SDL_BUTTON_X1,
        MouseButton5 = SDL_BUTTON_X2

    };

    class MouseInput {
    private:
        iVector2i m_mousePos;
        bool m_buttonState[NUM_BUTTONS];

    public:
        MouseInput();

        void update(SDL_Event event);

        bool isOver(float mx, float my, float x, float y, int w, int h);
        bool isOver(iVector2i mouse, fDimension rect);

        bool isOverAndButtonClicked(iVector2i mouse, fDimension rect, int button);

        bool isButtonDown(int button) { return m_buttonState[button]; }
        bool isButtonUp(int button) { return m_buttonState[button]; }
        iVector2i getMousePos() { return m_mousePos; }
    };

}

#endif // INCOGNITO_ENGINE_MOUSE_INPUT_HPP

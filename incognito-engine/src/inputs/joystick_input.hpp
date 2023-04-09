//
// Created by Incognito on 08/02/2023.
//

#ifndef INCOGNITO_ENGINE_JOYSTICK_INPUT_HPP
#define INCOGNITO_ENGINE_JOYSTICK_INPUT_HPP

#define NUM_JBUTTONS 16

#include <iostream>

#include <SDL/SDL.h>

#include "utility/vectors.hpp"

namespace Incognito {

    enum JButtons {
        Button1,
        Button2,
        Button3,
        Button4,
        Button5,
        Button6,
        Button7,
        Button8,
        Button9,
        Button10,
        Button11,
        Button12,
        Button13,
        Button14,
        Button15,
        Button16,
    };

    class JoystickInput {
    private:
        SDL_Joystick *m_joystick;
        iVector2i axis = {0, 0};
        bool m_buttons[NUM_JBUTTONS];

        void handleJAxisMotion(const SDL_Event event);
        void handleJoystickButton(const SDL_Event event);

    public:
        JoystickInput();
        ~JoystickInput();

        void update(SDL_Event event);

        iVector2i getAxis() const { return axis;}

        bool isButtonPressed(int button) const { return m_buttons[button]; }
    };

} // Incognito

#endif //INCOGNITO_ENGINE_JOYSTICK_INPUT_HPP

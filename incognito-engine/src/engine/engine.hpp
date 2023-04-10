/*
 *
 * Frosted Studios\ Incognito Engine 2D for individual use
 *
 * This engine just opens window and provides some functions for your game
 *
 *
 * 
 */

#ifndef ZIG_ZAG_BIRD_ENGINE_HPP
#define ZIG_ZAG_BIRD_ENGINE_HPP

#include <iostream>
#include <chrono>
#include <cmath>

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>

#include "components/button.hpp"

#include "display.hpp"
#include "camera.hpp"

#include "inputs/key_input.hpp"
#include "inputs/mouse_input.hpp"
#include "inputs/joystick_input.hpp"

#include "objects/object_cabinet.hpp"

#include "physics/box_collision.hpp"
#include "physics/rigidbody_2d.hpp"

#include "texture/assets.hpp"

#include "utility/clock.hpp"
#include "utility/vectors.hpp"
#include "utility/constants.hpp"
#include "utility/functions.hpp"

#include "state/states.hpp"
#include "state/scene.hpp"

namespace Incognito {
    class Game;

    /*
     *
     * Engine class 
     *
     */
    class Engine {
    private:
        Engine() = default;

        static Engine *s_instance;

        Game *m_game;
        bool m_shouldQuit;
        iClock *m_clock;

        int m_width, m_height;
        const char *m_title;

        SDL_Window *m_window;
        iDisplay *m_display;
        SDL_Event m_event;

        KeyInput *m_keyInput;
        MouseInput *m_mouseInput;
        JoystickInput *m_joystickInput;

        double m_deltaTime;

        /*
         *
         * EN:
         * Initializes all engine components
         *
         * TR:
         * Motorun tum bilesenlerini tanimlar
         */
        bool init();
        /*
         *
         * EN:
         * Initializes engine variables
         *
         * TR:
         * Motorun degiskenlerini tanimlar
         */
        bool initVars();
        /*
         *
         * EN:
         * Initializes engine window
         *
         * TR:
         * Motorun penceresini tanimlar
         */
        bool initWindow();

        /*
         *
         * EN:
         * Starts engine and includes game loop
         *
         * TR:
         * Motoru baslatir ve oyun dongusunu icinde barindirir
         */
        void gameLoop();

        /*
         *
         * EN:
         * Handles engine events
         *
         * TR:
         * Motorun olaylarini isler
         */
        void handleEvents();
        /*
         *
         * EN:
         * Updates every frame
         *
         * TR:
         * Her frame'de 1 defa calisir
         */
        void update(double dt);
        /*
         *
         * EN:
         * Updates deltaTime variable
         *
         * TR:
         * deltaTime degiskenini gunceller
         */
        void updateDT();

        /*
         *
         * EN:
         * Renders every frame
         *
         * TR:
         * Her frame'de ekrana cizer
         */
        void render();

    public:
        /*
         *
         * EN:
         * Engine Starting point
         *
         * TR:
         * Motorun baslama noktasi
         *
        */
        void start(int w, int h, const char *title);
        /*
         *
         * EN:
         * Adds game to the engine for using game functions
         *
         * TR:
         * Oyunu fonksiyonlarini vs kullanabilmek icin motora ekler
         *
         */
        void setGame(Game *game);

        /*
         *
         * EN:
         * Outputs a message using engines name
         *
         * TR:
         * Motorun ismini kullanarak konsola yazi yazdirir
         *
         */
        static void engine_write(const char *msg)                       { std::cout << "INCOGNITO: " << msg << std::endl; }
        /*
         *
         * EN:
         * Outputs a message using engines name
         *
         * TR:
         * Motorun ismini kullanarak konsola yazi yazdirir
         *
         */
        static void engine_write(const char *msg, const char *msg1)     { std::cout << "INCOGNITO: " << msg << "\t" << msg1 << std::endl; }
        /*
         *
         * EN:
         * Outputs a message using engines name
         *
         * TR:
         * Motorun ismini kullanarak konsola yazi yazdirir
         *
         */
        static void engine_write(int msg)                               { std::cout << "INCOGNITO: " << msg << std::endl; }
        /*
         *
         * EN:
         * Outputs a message using engines name
         *
         * TR:
         * Motorun ismini kullanarak konsola yazi yazdirir
         *
         */
        static void engine_write(float msg)                             { std::cout << "INCOGNITO: " << msg << std::endl; }
        /*
         *
         * EN:
         * Outputs a message using engines name
         *
         * TR:
         * Motorun ismini kullanarak konsola yazi yazdirir
         *
         */
        static void engine_write(double msg)                             { std::cout << "INCOGNITO: " << msg << std::endl; }

        /*
         *
         * EN:
         * Provides an engine instance for using its functions
         *
         * TR:
         * Motorun ozelliklerini motor degiskeni uretmeden kullanilabilmesini saglar
         *
         */
        static Engine* get() { return s_instance = (s_instance != nullptr) ? s_instance : new Engine(); }

        void shouldQuit() { m_shouldQuit = true; }
    };

    class Game {
    public:
        /*
         *
         * EN:
         * Initializes game's components
         *
         * TR:
         * Oyunun bilesenlerini tanimlar
         */
        virtual void init(SDL_Window *window, KeyInput *keyInput, MouseInput *mouseInput, JoystickInput *joystickInput) = 0;

        /*
         *
         * EN:
         * Updates every frame
         *
         * TR:
         * Her frame'de bir kez calisir
         */
        virtual void earlyUpdate(double deltaTime) = 0;
        virtual void update(double deltaTime) = 0;
        virtual void lateUpdate(double deltaTime) = 0;

        /*
         *
         * EN:
         * Renders every frame
         *
         * TR:
         * Her frame'de ekrana cizer
         */
        virtual void render(iDisplay *display) = 0;
        /*
         *
         * EN:
         * Renders game GUI
         *
         * TR:
         * Ekrana GUI'yi cizer
         */
        virtual void renderGui(iDisplay *display) = 0;

    };

} // Incognito

#endif //ZIG_ZAG_BIRD_ENGINE_HPP
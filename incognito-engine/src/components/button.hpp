//
// Created by Incognito on 08/02/2023.
//

#ifndef INCOGNITO_ENGINE_BUTTON_HPP
#define INCOGNITO_ENGINE_BUTTON_HPP

#include <SDL/SDL_ttf.h>

#include "engine/display.hpp"
#include "component.hpp"
#include "inputs/mouse_input.hpp"

namespace Incognito {

    class fButton : public iComponent {
    private:
        iVector2i pos;
        iVector2s size;
        TTF_Font *_font;
        iColor _neutralColor;
        iColor _hoverColor;
        iColor _clickedColor;
        SDL_Color _textColor;

        const char *_text;

        bool hover;
        bool clicked;

    public:
        fButton(float x, float y, int width, int height, TTF_Font *font, iColor color, const char* text, SDL_Color textColor)
        : pos(x, y), size(width, height), _font(font), _neutralColor(color), _text(text), _textColor(textColor) { init(); }

        fButton(float x, float y, int width, int height, TTF_Font *font, iColor color, iColor hoverColor, const char* text, SDL_Color textColor)
        : pos(x, y), size(width, height), _font(font), _neutralColor(color), _hoverColor(hoverColor), _text(text), _textColor(textColor) { init(); }

        fButton(float x, float y, int width, int height, TTF_Font *font, iColor neutralColor, iColor hoverColor, iColor clickedColor, const char* text, SDL_Color textColor)
        : pos(x, y), size(width, height), _font(font),
          _neutralColor(neutralColor), _hoverColor(hoverColor), _clickedColor(clickedColor),
          _text(text), _textColor(textColor) { init(); }

        void init() override;

        void update(double dt) override;
        void updateControls(MouseInput mouseInput);

        void render(Display *display) override;

        bool isClicked() { return clicked; }

    };

} // Incognito

#endif //INCOGNITO_ENGINE_BUTTON_HPP

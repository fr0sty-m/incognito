//
// Created by Incognito on 26/02/2023.
//

#ifndef INCOGNITO_ENGINE_SLIDER_HPP
#define INCOGNITO_ENGINE_SLIDER_HPP

#include "component.hpp"
#include "engine/display.hpp"

namespace Incognito {

    class iSlider : public iComponent {
    private:
        fDimension _dimension;
        iColor _sliderNeutralColor;
        iColor _sliderHoverColor;
        iColor _sliderDragColor;

        float value;

        bool hover;
        bool dragging;

    public:
        iSlider(float x, float y, float w, float h, iColor sliderNeutralColor, iColor sliderHoverColor, iColor sliderDragColor, float value)
        : _dimension(x, y, w, h), _sliderNeutralColor(sliderNeutralColor), _sliderHoverColor(sliderHoverColor), _sliderDragColor(sliderDragColor) {}

        void init() override;

        void update(double dt) override;

        void render(Display *display) override;
    };

} // Incognito

#endif //INCOGNITO_ENGINE_SLIDER_HPP

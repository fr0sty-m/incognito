//
// Created by Incognito on 31/01/2023.
//

#ifndef INCOGNITO_ENGINE_VECTOR_HPP
#define INCOGNITO_ENGINE_VECTOR_HPP

#include <SDL/SDL.h>

namespace Incognito {

    typedef struct iColor {
        Uint8 r, g, b, a;

        iColor() : r(0), g(0), b(0), a(255) {}
        iColor(Uint8 r, Uint8 g, Uint8 b, Uint8 a) : r(r), g(g), b(b), a(a) {}
    } iColor;

    typedef struct iVector2f {
        float x, y;

        iVector2f() : x(0), y(0) {}
        iVector2f(float x, float y) : x(x), y(y) {}


        iVector2f operator+(const iVector2f &other) const {
            return {x + other.x, y + other.y};
        }

        iVector2f operator-(const iVector2f &other) const {
            return {x - other.x, y - other.y};
        }

        iVector2f operator*(float scalar) const {
            return {x * scalar, y * scalar};
        }

        iVector2f operator=(const iVector2f &other) {
            return {x = other.x, y = other.y};
        }

        iVector2f operator+=(const iVector2f &other) {
            return {x += other.x, y += other.y};
        }

        iVector2f operator+=(float scalar) {
            return {x += scalar, y += scalar};
        }

        iVector2f operator-=(const iVector2f &other) {
            return {x -= other.x, y -= other.y};
        }

        bool operator<(const iVector2f &other) const {
            return ( x < other.x, y < other.y );
        }

        bool operator>(const iVector2f &other) const {
            return ( x > other.x, y > other.y );
        }

        bool operator<(float scalar) const {
            return ( x < scalar, y < scalar );
        }

        bool operator>(float scalar) const {
            return ( x > scalar, y > scalar );
        }
    } iVector2f;

    typedef struct iVector2i {
        int x, y;

        iVector2i() : x(0), y(0) {}
        iVector2i(int x, int y) : x(x), y(y) {}


        iVector2i operator+(const iVector2i &other) const {
            return {x + other.x, y + other.y};
        }

        iVector2i operator-(const iVector2i &other) const {
            return {x - other.x, y - other.y};
        }

        iVector2i operator*(int scalar) const {
            return {x * scalar, y * scalar};
        }

        iVector2i operator=(const iVector2i &other) {
            return {x = other.x, y = other.y};
        }

        iVector2i operator+=(const iVector2i &other) {
            return {x += other.x, y += other.y};
        }

        iVector2i operator-=(const iVector2i &other) {
            return {x -= other.x, y -= other.y};
        }

        bool operator<(const iVector2i &other) const {
            return ( x < other.x, y < other.y );
        }

        bool operator>(const iVector2i &other) const {
            return ( x > other.x, y > other.y );
        }

        bool operator<(int scalar) const {
            return ( x < scalar, y < scalar );
        }

        bool operator>(int scalar) const {
            return ( x > scalar, y > scalar );
        }
    } iVector2i;

    typedef struct iVector2s {
        int w, h;

        iVector2s() : w(0), h(0) {}
        iVector2s(int w, int h) : w(w), h(h) {}

        iVector2s operator+(const iVector2s &other) const {
            return { w + other.w, h + other.h };
        }

        iVector2s operator-(const iVector2s &other) const {
            return { w - other.w, h - other.h };
        }

        iVector2s operator*(int scalar) const {
            return { w * scalar, h * scalar };
        }
    } iVector2s;

    typedef struct iVector2fs {
        float w, h;

        iVector2fs() : w(0), h(0) {}
        iVector2fs(float w, float h) : w(w), h(h) {}

        iVector2fs operator+(const iVector2fs &other) const {
            return { w + other.w, h + other.h };
        }

        iVector2fs operator-(const iVector2fs &other) const {
            return { w - other.w, h - other.h };
        }

        iVector2fs operator*(int scalar) const {
            return { w * scalar, h * scalar };
        }
    } iVector2fs;

    typedef struct iVector2d {
        double x, y;

        iVector2d() : x(0), y(0) {}
        iVector2d(double x, double y) : x(x), y(y) {}

        iVector2d operator+(const iVector2d &other) const {
            return { x + other.x, y + other.y };
        }

        iVector2d operator-(const iVector2d &other) const {
            return { x - other.x, y - other.y };
        }

        iVector2d operator*(float scalar) const {
            return { x * scalar, y * scalar };
        }

        iVector2d operator+=(const iVector2d &other) {
            return { x = x + other.x, y = y + other.y };
        }

        iVector2d operator-=(const iVector2d &other) {
            return { x = x - other.x, y = y - other.y };
        }

        bool operator<(const iVector2d &other) const {
            return ( x < other.x, y < other.y );
        }

        bool operator>(const iVector2d &other) const {
            return ( x > other.x, y > other.y );
        }

        bool operator<(int scalar) const {
            return ( x < scalar, y < scalar );
        }

        bool operator>(int scalar) const {
            return ( x > scalar, y > scalar );
        }
    } iVector2d;

    typedef struct fDimension {
        float x, y, w ,h;

        fDimension() : x(0), y(0), w(0), h(0) {}
        fDimension(float x, float y, float w, float h) : x(x), y(y), w(w), h(h) {}

        fDimension operator+(const fDimension &other) const {
            return { x + other.x, y + other.y, w + other.w, h + other.h };
        }

        fDimension operator-(const fDimension &other) const {
            return { x - other.x, y - other.y, w - other.w, h - other.h };
        }

        fDimension operator*(float scalar) const {
            return { x * scalar, y * scalar, w * scalar, h * scalar };
        }

        fDimension operator+=(const fDimension &other) {
            return { x = x + other.x, y = y + other.y, w = w + other.w, h = h + other.h };
        }

        fDimension operator-=(const fDimension &other) {
            return { x = x - other.x, y = y - other.y, w = w - other.w, h = h - other.h };
        }

        bool operator<(const fDimension &other) const {
            return ( x < other.x, y < other.y, w < other.w, h < other.h );
        }

        bool operator>(const fDimension &other) const {
            return ( x > other.x, y > other.y, w > other.w, h > other.h );
        }

        bool operator<(int scalar) const {
            return ( x < scalar, y < scalar, w < scalar, h < scalar );
        }

        bool operator>(int scalar) const {
            return ( x > scalar, y > scalar, w > scalar, h > scalar );
        }

    } fDimension;

    typedef struct iDimension {
        float x, y, w ,h;

        iDimension() : x(0), y(0), w(0), h(0) {}
        iDimension(float x, float y, float w, float h) : x(x), y(y), w(w), h(h) {}

        iDimension operator+(const iDimension &other) const {
            return { x + other.x, y + other.y, w + other.w, h + other.h };
        }

        iDimension operator-(const iDimension &other) const {
            return { x - other.x, y - other.y, w - other.w, h - other.h };
        }

        iDimension operator*(float scalar) const {
            return { x * scalar, y * scalar, w * scalar, h * scalar };
        }

        iDimension operator+=(const iDimension &other) {
            return { x = x + other.x, y = y + other.y, w = w + other.w, h = h + other.h };
        }

        iDimension operator-=(const iDimension &other) {
            return { x = x - other.x, y = y - other.y, w = w - other.w, h = h - other.h };
        }

        bool operator<(const iDimension &other) const {
            return ( x < other.x, y < other.y, w < other.w, h < other.h );
        }

        bool operator>(const iDimension &other) const {
            return ( x > other.x, y > other.y, w > other.w, h > other.h );
        }

        bool operator<(int scalar) const {
            return ( x < scalar, y < scalar, w < scalar, h < scalar );
        }

        bool operator>(int scalar) const {
            return ( x > scalar, y > scalar, w > scalar, h > scalar );
        }

    } iDimension;

    typedef struct dDimension {
        float x, y, w ,h;

        dDimension() : x(0), y(0), w(0), h(0) {}
        dDimension(float x, float y, float w, float h) : x(x), y(y), w(w), h(h) {}

        dDimension operator+(const dDimension &other) const {
            return { x + other.x, y + other.y, w + other.w, h + other.h };
        }

        dDimension operator-(const dDimension &other) const {
            return { x - other.x, y - other.y, w - other.w, h - other.h };
        }

        dDimension operator*(float scalar) const {
            return { x * scalar, y * scalar, w * scalar, h * scalar };
        }

        dDimension operator+=(const dDimension &other) {
            return { x = x + other.x, y = y + other.y, w = w + other.w, h = h + other.h };
        }

        dDimension operator-=(const dDimension &other) {
            return { x = x - other.x, y = y - other.y, w = w - other.w, h = h - other.h };
        }

        bool operator<(const dDimension &other) const {
            return ( x < other.x, y < other.y, w < other.w, h < other.h );
        }

        bool operator>(const dDimension &other) const {
            return ( x > other.x, y > other.y, w > other.w, h > other.h );
        }

        bool operator<(int scalar) const {
            return ( x < scalar, y < scalar, w < scalar, h < scalar );
        }

        bool operator>(int scalar) const {
            return ( x > scalar, y > scalar, w > scalar, h > scalar );
        }

    } dDimension;
}

#endif //INCOGNITO_ENGINE_VECTOR_HPP

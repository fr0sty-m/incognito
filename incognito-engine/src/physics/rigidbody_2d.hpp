#ifndef INCOGNITO_ENGINE_RIGIDBODY_2D_HPP
#define INCOGNITO_ENGINE_RIGIDBODY_2D_HPP

#include "utility/vectors.hpp"
#include "objects/game_object.hpp"


namespace Incognito {

    enum ForceType { GradualForce, SuddenForce };

    struct Rigidbody2D : public GameObject {
        iVector2i velocity;
        float mass;

        void updateBody(double deltaTime);
        void updateBody(double deltaTime, iVector2i gravity);

        void addForce(float velX, float velY, ForceType forceType);
        void addForce(iVector2i _velocity, float increase, ForceType forceType);

        /*
         * Rigidbody2D remove force function
         *
         * Removes forces applied on object
         *
         * decrease parameter can be 0 if force type is sudden
         */
        void removeForce(float decrease, ForceType forceType);
        void removeForceX(ForceType forceType);
        void removeForceY(ForceType forceType);

        iVector2i getVelocity();
    };

} // Incognito

#endif //INCOGNITO_ENGINE_RIGIDBODY_2D_HPP

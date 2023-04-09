//
// Created by Incognito on 19/02/2023.
//

#ifndef INCOGNITO_ENGINE_BOX_COLLISION_HPP
#define INCOGNITO_ENGINE_BOX_COLLISION_HPP

namespace Incognito {

    typedef struct FBoxCollision {

        static bool checkCollision(fDimension box1, fDimension box2) {
            // Check for horizontal overlap
            bool overlapX = (box1.x < box2.x + box2.w) && (box1.x + box1.w > box2.x);

            // Check for vertical overlap
            bool overlapY = (box1.y < box2.y + box2.h) && (box1.y + box1.h > box2.y);

            return overlapX && overlapY;
        }



    } FBoxCollision;

}

#endif //INCOGNITO_ENGINE_BOX_COLLISION_HPP

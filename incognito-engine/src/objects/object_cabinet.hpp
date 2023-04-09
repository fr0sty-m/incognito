//
// Created by Incognito on 01/02/2023.
//

#ifndef INCOGNITO_ENGINE_OBJECT_CABINET_HPP
#define INCOGNITO_ENGINE_OBJECT_CABINET_HPP

#include <vector>
#include <memory>
#include <algorithm>

#include "game_object.hpp"
#include "components/button.hpp"

namespace Incognito {
    struct GameObjectCabinet {
        std::vector<GameObject*> m_objects;

        void addObject(GameObject* object) {
            m_objects.push_back(std::move(object));
        }

        void removeObject(GameObject* object){
//            auto it = std::find(m_objects.begin(), m_objects.end(), object);
//            if (it != m_objects.end()) {
//                m_objects.erase(it);
//            }
        }

        void update(double deltaTime) {
            for (auto& object : m_objects) {
                object->update(deltaTime);
            }
        }

        void render(Display* display) {
            for (auto &object: m_objects) {
                object->render(display);
            }
        }
    };

    struct ButtonCabinet {
        std::vector<fButton*> m_objects;

        void addObject(fButton* object) {
            m_objects.push_back(std::move(object));
        }

        void removeObject(fButton* object){
            //auto it = std::find(m_objects.begin(), m_objects.end(), object);
            //if (it != m_objects.end()) {
            //}
        }

        void updateControls(MouseInput mouseInput) {
            for (auto& object : m_objects) {
                object->updateControls(mouseInput);
            }
        }

        void render(Display* display) {
            for (auto &object: m_objects) {
                object->render(display);
            }
        }
    };
}

#endif //INCOGNITO_ENGINE_OBJECT_CABINET_HPP

# Setting SDL2 directories
set(SDL2_INCLUDE_DIR [your SDL2/include directory])
set(SDL2_LIB_DIR [your SDL2/lib/x64 directory])

# Including and linking directories
include_directories(${CMAKE_SOURCE_DIR}/game-engine ${SDL2_INCLUDE_DIR})
link_directories(${SDL2_LIB_DIR})

# Adding Game engine library
add_library(
        incognito-engine SHARED

        components/button.cpp
        components/button.hpp
        components/component.hpp
        components/slider.cpp
        components/slider.hpp

        engine/camera.cpp
        engine/camera.hpp
        engine/display.cpp
        engine/display.hpp
        engine/engine.cpp
        engine/engine.hpp

        inputs/joystick_input.hpp
        inputs/joystick_input.cpp
        inputs/key_input.hpp
        inputs/key_input.cpp
        inputs/mouse_input.hpp
        inputs/mouse_input.cpp

        objects/game_object.hpp
        objects/object_cabinet.hpp

        physics/box_collision.hpp
        physics/rigidbody_2d.hpp
        physics/rigidbody_2d.cpp

        state/states.hpp
        state/scene.hpp

        texture/assets.hpp
        texture/assets.cpp

        utility/circle.hpp
        utility/clock.hpp
        utility/clock.cpp
        utility/vectors.hpp
        utility/constants.hpp
        utility/functions.hpp

)

# Linking libraries
target_link_libraries(incognito-engine SDL2main SDL2 SDL2_image SDL2_ttf)
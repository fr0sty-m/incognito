#ifndef INCOGNITO_ENGINE_CLOCK_HPP
#define INCOGNITO_ENGINE_CLOCK_HPP

#include <SDL/SDL.h>

namespace Incognito {

    class iClock {
    private:
        Uint32 startTicks;
        Uint32 pausedTicks;
        bool started;
        bool paused;

    public:
        iClock();

        void start();
        void stop();
        void pause();
        void unpause();

        Uint32 getTicks() const;
        float getSeconds() const;

        bool isStarted();
        bool isPaused();

    };

} // Incognito

#endif //INCOGNITO_ENGINE_CLOCK_HPP

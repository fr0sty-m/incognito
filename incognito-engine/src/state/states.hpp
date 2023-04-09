//
// Created by Incognito on 08/02/2023.
//

#ifndef INCOGNITO_ENGINE_STATES_HPP
#define INCOGNITO_ENGINE_STATES_HPP

namespace Incognito {

    enum iState {
        Splash,
        Menu,
        Settings,
        Play,
        Quit,
        EndGame,
    };

    struct StateMachine {

        static void changeState(iState currentState, iState newState) { currentState = newState; }

    };
}

#endif //INCOGNITO_ENGINE_STATES_HPP

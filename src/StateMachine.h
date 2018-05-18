//
// Created by zhukov on 25.01.18.
//

#ifndef PROJECT_STATEMACHINE_H
#define PROJECT_STATEMACHINE_H


#include <memory>

namespace rcs {

    enum class State {
        Undefined,
        FirstState,
        SecondState
    };

    class StateMachine {
    public:


        StateMachine()
                : m_state(State::Undefined),
                  m_prevState(State::Undefined)
        {

        };

        State getState() const {
            return m_state;
        }

        State getPrevState() const {
            return m_prevState;
        }

        void setState(State state) {
            m_prevState = m_state;
            m_state     = state;
        }

    private:
        State m_state;
        State m_prevState;
    };

    using StateMachinePtr = std::shared_ptr<StateMachine>;
}



#endif //PROJECT_STATEMACHINE_H

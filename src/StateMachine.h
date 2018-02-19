//
// Created by zhukov on 25.01.18.
//

#ifndef PROJECT_STATEMACHINE_H
#define PROJECT_STATEMACHINE_H

enum RobotState {
    UNDEFINED

};

class StateMachine {
public:
    StateMachine() : state(UNDEFINED) {

    };

    RobotState getState() const {
        return state;
    }

    void setState(RobotState state) {
        StateMachine::state = state;
    }

private:
    RobotState state;
};


#endif //PROJECT_STATEMACHINE_H

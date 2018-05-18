//
// Created by zhukov on 17.05.18.
//

#ifndef PROJECT_ACTUATOR_H
#define PROJECT_ACTUATOR_H


#include <vector>

class Actuator {
public:
    ActuatorState state;
    ActuatorState refState;
};

class ActuatorState {
public:
    double position;    //! Текущее положение шарнирова + крышка + зу
    double velocity;    //! Скорости шарнирова + крышка + ЗУ
    double current;     //! Ток шарниров + крышка + ЗУ
    int    breakStatus; //!
    int    controlMode; //! \brief
};



#endif //PROJECT_ACTUATOR_H

//
// Created by bogomaz on 16.02.18.
//

#ifndef PROJECT_MANAGER_H
#define PROJECT_MANAGER_H

#include <memory>
#include "SystemState.h"
#include "RobotControlSystem.h"

namespace rcs {
    class Manager {
    public:
        void manage(Input &input, Output &output) {

            if(systemState->isLogicActivated()){
                /// Здесь должен быть вызов логических функий (ТОП)
            }

            if(systemState->isMotionActivated()) {
                robotControlSystem->process(input, output);
            }
        }

    private:
        std::shared_ptr<SystemState> systemState;

        std::shared_ptr<RobotControlSystem> robotControlSystem;


    };
}



#endif //PROJECT_MANAGER_H

//
// Created by bogomaz on 16.02.18.
//

#ifndef PROJECT_ROBOTCONTROLSYSTEM_H
#define PROJECT_ROBOTCONTROLSYSTEM_H

#include <memory>
#include "SystemState.h"
#include "MotionControlSystem.h"

namespace rcs {
    struct Input {

    };

    struct Output {

    };


    struct InputDriver {
        explicit InputDriver(std::shared_ptr<SystemState> st)
            : systemState(std::move(st)) {

        }

        virtual void update(Input &input) = 0;

    private:
        std::shared_ptr<SystemState> systemState;
    };

    struct OutputDriver {
        explicit OutputDriver(std::shared_ptr<SystemState> st)
        : systemState(std::move(st)) {

        }

        virtual void update(Output &output) = 0;

    private:
        std::shared_ptr<SystemState> systemState;
    };

    class RobotControlSystem {
    public:
        RobotControlSystem(std::shared_ptr<SystemState> st,
                           std::unique_ptr<InputDriver> ind,
                           std::unique_ptr<OutputDriver> outd,
                           std::unique_ptr<MotionControlSystem> mcs)
            : systemState(std::move(st)),
              inputDriver(std::move(ind)),
              outputDriver(std::move(outd)),
              motionControlSystem(std::move(mcs)) {

        }

        void process(Input &input, Output &output) {
            inputDriver->update(input);

            for(auto & item:flags) {
                item->check();
            }

            if ( systemState->isMotionActivated() ) {
                motionControlSystem->process();
            }

            outputDriver->update(output);
        }

    private:
        std::unique_ptr<InputDriver> inputDriver;

        std::unique_ptr<OutputDriver> outputDriver;

        std::unique_ptr<MotionControlSystem> motionControlSystem;

        std::shared_ptr<SystemState> systemState;

        std::vector<std::shared_ptr<Flag>> flags;
    };
}



#endif //PROJECT_ROBOTCONTROLSYSTEM_H

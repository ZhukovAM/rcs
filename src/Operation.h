//
// Created by user on 19.02.18.
//

#ifndef PROJECT_OPERATION_H
#define PROJECT_OPERATION_H

#include <string>

namespace rcs {

    class Operation {
    public:
        class Status {
            std::string msg;
            int code;
        };

        int getState() const
        {
            return state;
        }

        const Status &getStatus() const
        {
            return status;
        }

        virtual void process() = 0;

    protected:
        int state;
        Status status;
    };


    class MoveToWorkPosition : public Operation {
    public:
        enum State {
            STATE_1,
            STATE_2,
            STATE_3
        };

        void process() override {
            switch (state) {
                case State::STATE_1: {
                    break;
                }
                case STATE_2:
            }
        }
    };
}



#endif //PROJECT_OPERATION_H

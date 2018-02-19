//
// Created by bogomaz on 16.02.18.
//

#ifndef PROJECT_MOTIONCONTROLSYSTEM_H
#define PROJECT_MOTIONCONTROLSYSTEM_H

#include <memory>
#include <vector>
#include "SystemState.h"

namespace rcs {

    class Response {
    public:
        virtual void process() = 0;
    };

    class Predicate {
    public:
       virtual bool assert() = 0;
    };

    class Flag {
    public:
        Flag(std::shared_ptr<Predicate> p, std::shared_ptr<Response> r)
            : predicate(std::move(p)), response(std::move(r)) {

        }

        virtual bool check() {
            if ( predicate->assert() ) {
                response->process();
                fired = true;
            }
        };

        bool isFired() const {
            return fired;
        }

    private:
        bool fired; /// predicate result

        std::shared_ptr<Predicate> predicate;

        std::shared_ptr<Response> response;
    };

    class MotionControlSystem {
    public:
        void process() {
            /// Здесь должен быть TrajectoryChecker, который проверяет завершение траектории
            /// TrajectoryChecker.check()
            /// в каком формате получаем входные данные?

            ///@todo Здесь должен быть TrajectoryGenerator

            /**
             * @todo Здесь должен быть Controller, который на вход получает:
             * 1) текущее состояние системы SystemState (или определенные данные от туда?)
             * 2) Траекторию полученную из TrajectoryGenerator (в каком формате?)
             */
        };

    private:
        std::shared_ptr<SystemState> systemState;
    };
}



#endif //PROJECT_MOTIONCONTROLSYSTEM_H

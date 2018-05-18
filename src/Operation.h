//
// Created by user on 19.02.18.
//

#ifndef PROJECT_OPERATION_H
#define PROJECT_OPERATION_H

#include <string>
#include <iostream>
#include "StateMachine.h"

namespace rcs {

    enum class OperationList {
        IdleState,
        FirstOperation,
        SecondOperation
    };


    enum class OperationStatus {
        Running,
        Finished
    };

    class Operation {
    public:
        explicit Operation(StateMachinePtr pStateMachine)
                : m_pStateMachine(pStateMachine) {}

        virtual OperationStatus engine() = 0;

    protected:
        StateMachinePtr m_pStateMachine;

        OperationStatus m_status;
    };

    using OperationPtr = std::shared_ptr<Operation>;


    class FirstOperation : public Operation {
        using Operation::Operation;

    public:
        OperationStatus engine() override {

            switch ( m_pStateMachine->getState() ) {
                case State::FirstState: {
                    std::cout << "Run FirstOperation" << std::endl;
                    m_status = OperationStatus::Running;

                    std::cout << "FirstState" << std::endl;
                    m_pStateMachine->setState(State::SecondState);
                    break;
                }
                case State::SecondState: {
                    std::cout << "SecondState" << std::endl;
                    std::cout << "FirstOperation is finished" << std::endl;
                    m_status = OperationStatus::Finished;
                }
            }

            return m_status;
        }
    };


    class SecondOperation : public Operation {
        using Operation::Operation;

    public:
        OperationStatus engine() override {

            switch ( m_pStateMachine->getState() ) {
                case State::FirstState: {
                    std::cout << "FirstState" << std::endl;
                    std::cout << "SecondOperation is finished" << std::endl;
                    m_status = OperationStatus::Finished;
                    break;
                }
                case State::SecondState: {
                    std::cout << "Run SecondOperation" << std::endl;
                    m_status = OperationStatus::Running;

                    std::cout << "SecondState" << std::endl;
                    m_pStateMachine->setState(State::FirstState);
                }
            }

            return m_status;
        }
    };
}



#endif //PROJECT_OPERATION_H

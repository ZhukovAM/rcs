//
// Created by bogomaz on 16.02.18.
//

#ifndef PROJECT_MANAGER_H
#define PROJECT_MANAGER_H

#include <memory>
#include <map>
#include "SystemState.h"
#include "RobotControlSystem.h"
#include "Operation.h"

namespace rcs {

    class OperationManager {
    public:
        explicit OperationManager(SystemStatePtr pSystemState)
                : m_pSystemState( std::move(pSystemState) ) {

        };

        void manage() {

            if( m_pSystemState->activeOperation == OperationList::IdleState ) {
                m_pSystemState->activeOperation = m_pSystemState->requiredOperation;
            }

            OperationStatus operationStatus = operations.at(m_pSystemState->activeOperation)->engine();

            if ( operationStatus == OperationStatus::Finished ) {
                m_pSystemState->activeOperation   = OperationList::IdleState;
                m_pSystemState->requiredOperation = OperationList::IdleState;
            }
        }

    private:
        SystemStatePtr m_pSystemState;

        std::map<OperationList, OperationPtr> operations;

//
//        std::shared_ptr<RobotControlSystem> robotControlSystem;
//
//        using OperationPtr = std::shared_ptr<Operation>;
//
//        std::set<int, OperationPtr> operations;


    };
}



#endif //PROJECT_MANAGER_H

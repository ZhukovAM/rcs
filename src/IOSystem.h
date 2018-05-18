//
// Created by zhukov on 18.05.18.
//

#ifndef PROJECT_IOSYSTEM_H
#define PROJECT_IOSYSTEM_H

#include <iostream>
#include <memory>
#include "SystemState.h"

namespace rcs {

    class IOSystem {
    public:
        IOSystem(SystemStatePtr pSystemState)
                : m_pSystemState(pSystemState) {}

        virtual void recvData() {
            std::cout << "states is updated" << std::endl;
        }

        virtual void sendData() {
            std::cout << "control is sended" << std::endl;
        }

    private:
        SystemStatePtr m_pSystemState;
    };

    using IOSystemPtr = std::shared_ptr<IOSystem>;

    class IOSystemMaker {
    public:
        virtual IOSystemPtr make() {
            return std::make_shared<IOSystem>();
        }

    };

    using IODriverMakerPtr = std::shared_ptr<IOSystemMaker>;

}



#endif //PROJECT_IOSYSTEM_H

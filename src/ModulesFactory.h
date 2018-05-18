//
// Created by zhukov on 17.05.18.
//

#ifndef PROJECT_MODULESFACTORY_H
#define PROJECT_MODULESFACTORY_H

#include <iostream>
#include <memory>
#include "IOSystem.h"

class STZController {
public:

    virtual void runCaputureFrame() {
        std::cout << "capture frame is ran" << std::endl;
    }
};

using STZControllerPtr = std::shared_ptr<STZController>;

class STZControllerMaker {
public:

    virtual STZControllerPtr make() {
        return std::make_shared<STZController>();
    }
};

using STZControllerMakerPtr = std::shared_ptr<STZControllerMaker>;


class ModulesFactory {
public:
    ModulesFactory(STZControllerMakerPtr pSTZControllerMaker, IODriverMakerPtr pIODriverMaker)
            : m_pStzControllerMaker(pSTZControllerMaker),
              m_pIODriverMaker(pIODriverMaker) {

    }

    STZControllerPtr createSTZController() { return m_pStzControllerMaker->make(); }

    IOSystemPtr createIODriver() { return m_pIODriverMaker->make(); }

private:
    STZControllerMakerPtr m_pStzControllerMaker;

    IODriverMakerPtr m_pIODriverMaker;
};


#endif //PROJECT_MODULESFACTORY_H

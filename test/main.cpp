#include <iostream>
#include <Operation.h>
#include <OperationManager.h>
#include <SafetySystem.h>
#include "SystemState.h"
#include "ModulesFactory.h"
#include "IOSystem.h"

int main() {

    using namespace std;
    using namespace rcs;

    SystemStatePtr pSystemState = make_shared<SystemState>();

    IOSystemPtr pIOSystem = make_shared<IOSystem>(pSystemState);

    OperationManager operationManager(pSystemState);

    SafetySystem safetySystem;

    MotionControlSystem mcs;

    while ( 1 ) {
        /// Получение актуальных данных
        pIOSystem->recvData();

        /// Проверка системы безопасности


        /// Выполнение логики и задание управления
        operationManager.manage();

        /// Система управления движением
        mcs.process();

        /// Обновление данных
        pIOSystem->sendData();
    }

    return 0;
}
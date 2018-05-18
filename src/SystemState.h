//
// Created by bogomaz on 16.02.18.
//

#ifndef PROJECT_SYSTEMSTATE_H
#define PROJECT_SYSTEMSTATE_H

#include <vector>
#include <string>
#include <memory>
#include "Actuator.h"
#include "Operation.h"

namespace rcs {

    enum class ControlMode {
        POSITION_CONTROL,
        VELOCITY_CONTROL,
        IMPEDANCE_CONTROL
    };

    class SystemState {
    public:
        bool isMotionActivated() const {
            return motionActivated;
        }

        void setMotionActivated(bool motionActivated) {
            SystemState::motionActivated = motionActivated;
        }

        bool isLogicActivated() const
        {
            return logicActivated;
        }

        void setLogicActivated(bool logicActivated)
        {
            SystemState::logicActivated = logicActivated;
        }


    public:
        bool motionActivated;
        bool logicActivated;

        OperationList activeOperation;
        OperationList requiredOperation;

        bool operationDone;

        std::vector<double> leftHandleSignals;
        std::vector<double> rightHandleSignals;

        std::vector<Actuator> actuators;

        int     ctrlType;       //! вид управления: позиц., скорост., динамич., и т.д.
        int     typeCoord;      //! вид задания координат: обобщ., декарт., и т.д.
        int     numPoints;      //! кол-во точек: конечная или набор
        int     typeCurve;      //! тип кривой: прям. в обобщ., в декaрте и т.д.
        int     typeModel;      //! тип модели
        bool    doFlag;         //! задание на выдачу сформир. послед. на аппаратуру
        int     oldTypeCtrl;    //! предыдущее значение управления
        bool    fixCoord;       //! фиксация декртовых координат при вхоже в сист. упр. от ручек
        bool    moving;         //! Проверка н то движемся или нет

//        SamplerType samplerType;

        int         samplerId;          // Значения 0...19
        bool        samplerInGripper;   //! Флаг того что пробоотборник в схвате

        std::string operatorMsg;
    };

    using SystemStatePtr = std::shared_ptr<SystemState>;
}





#endif //PROJECT_SYSTEMSTATE_H

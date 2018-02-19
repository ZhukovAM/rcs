//
// Created by bogomaz on 16.02.18.
//

#ifndef PROJECT_SYSTEMSTATE_H
#define PROJECT_SYSTEMSTATE_H

#include <vector>

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

    private:
        bool motionActivated;
        bool logicActivated;

        std::vector<double> leftHandleSignals;
        std::vector<double> rightHandleSignals;

        std::vector<double> positions;   //! Текущее положение шарнирова + крышка + зу
        std::vector<double> velocities;  //! Скорости шарнирова + крышка + ЗУ
        std::vector<double> currents;    //! Ток шарниров + крышка + ЗУ
        std::vector<int>    breakStatuses;  //!
        std::vector<int>    controlMode;    //! \brief

        std::vector<double> targetJointPositions; //! Целевое положение шарниров + крышка + ЗУ

//    SystemState futureState;

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
    };
}



#endif //PROJECT_SYSTEMSTATE_H

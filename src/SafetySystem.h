//
// Created by zhukov on 18.05.18.
//

#ifndef PROJECT_SAFETYSYSTEM_H
#define PROJECT_SAFETYSYSTEM_H

namespace rcs {

    using SafetySystemResult = bool;

    class SafetySystem {
    public:
        SafetySystemResult checkSystem() {
            return false;
        }
    };
}




#endif //PROJECT_SAFETYSYSTEM_H

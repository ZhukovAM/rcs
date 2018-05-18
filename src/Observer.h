//
// Created by zhukov on 18.05.18.
//

#ifndef PROJECT_OBSERVER_H
#define PROJECT_OBSERVER_H


#include <memory>

class Observer {
public:
    virtual void notify() = 0;
};

using ObserverPtr = std::shared_ptr<Observer>;

class Observable {
public:
    virtual void addObserver( ObserverPtr ) = 0;
    virtual void removeObserver( ObserverPtr ) = 0;
    virtual void notifyObserver( ObserverPtr ) = 0;
};



#endif //PROJECT_OBSERVER_H

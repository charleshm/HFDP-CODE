#ifndef _DUCK_H
#define _DUCK_H

#include <iostream>
#include "FlyBehavior.h"
#include "QuackBehavior.h"

namespace duck {

class Duck {
public:
    Duck() {}

    virtual void display() = 0;

    void performFly() {
        _flyBehavior->fly();
    }

    void performQuack() {
        _quackBehavior->quack();
    }

    void swim() {
        std::cout << "All ducks float, even decoys!" << std::endl;
    }

protected:
    FlyBehavior* _flyBehavior;
    QuackBehavior* _quackBehavior;
};

}//namespace duck

#endif
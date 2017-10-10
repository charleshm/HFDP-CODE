#ifndef _MALLARD_DUCK_H
#define _MALLARD_DUCK_H

#include "Duck.h"
#include "Quack.h"
#include "FlyWithWings.h"

namespace duck {

class MallardDuck : public Duck {
public:
    MallardDuck() {
        _quackBehavior = new Quack();
        _flyBehavior = new FlyWithWings();
    }

    void display() {
        std::cout << "I'm a real Mallard duck" << std::endl;
    }
};

}//namespace duck

#endif
#ifndef _FLY_NO_WAY_H
#define _FLY_NO_WAY_H

#include "FlyBehavior.h"
#include <iostream>

namespace duck {

class FlyNoWay : public FlyBehavior {
public:
    void fly() {
        std::cout << "I can't fly!" << std::endl;
    }
};

}//namespace duck

#endif
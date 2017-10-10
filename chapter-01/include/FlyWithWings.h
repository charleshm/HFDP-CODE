#ifndef _FLY_WITH_WINGS_H
#define _FLY_WITH_WINGS_H

#include "FlyBehavior.h"
#include <iostream>

namespace duck {

class FlyWithWings : public FlyBehavior {
public:
    void fly() {
        std::cout << "I'm flying!!" << std::endl;
    }
};

}//namespace duck

#endif
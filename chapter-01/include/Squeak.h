#ifndef _SQUEAK_H
#define _SQUEAK_H

#include "QuackBehavior.h"
#include <iostream>

namespace duck {

class Squeak : public QuackBehavior {
public:
    void quack() {
        std::cout << "Squeak" << std::endl;
    }
};

}//namespace duck

#endif
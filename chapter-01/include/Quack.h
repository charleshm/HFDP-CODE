#ifndef _QUACK_H
#define _QUACK_H

#include "QuackBehavior.h"
#include <iostream>

namespace duck {

class Quack : public QuackBehavior {
public:
    void quack() {
        std::cout << "Quack!" << std::endl;
    }
};

}//namespace duck

#endif
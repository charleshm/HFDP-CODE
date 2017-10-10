#ifndef _MUTE_QUACK_H
#define _MUTE_QUACK_H

#include "QuackBehavior.h"
#include <iostream>

namespace duck {

class MuteQuack : public QuackBehavior {
public:
    void quack() {
        std::cout << "Silence" << std::endl;
    }
};

}//namespace duck

#endif
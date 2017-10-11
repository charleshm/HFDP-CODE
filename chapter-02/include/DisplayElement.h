#ifndef _DISPLAY_ELEMENT_H
#define _DISPLAY_ELEMENT_H

#include <iostream>

namespace weather {

class DisplayElement {
public:
    virtual void display() = 0;
};

}//namespace weather

#endif
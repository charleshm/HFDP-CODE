#ifndef _OBSERVER_H
#define _OBSERVER_H

namespace weather {

class Observer {
public:
    virtual void update(float temp, float humidity, float pressure) = 0;
};

}//namespace weather

#endif
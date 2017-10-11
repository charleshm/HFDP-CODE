#ifndef _SUBJECT_H
#define _SUBJECT_H

#include "Observer.h"

namespace weather {

class Subject {
public:
    //@brief 注册观察者
    virtual void registerObserver(Observer* o) = 0;

    //@brief 删除观察者
    virtual void removeObserver(Observer* o) = 0;

    //@brief 通知观察者
    virtual void notifyObservers()=0;
};

}//namespace weather

#endif
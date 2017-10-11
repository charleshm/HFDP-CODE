#ifndef _SUBJECT_H
#define _SUBJECT_H

#include "Observer.h"

namespace weather {

class Subject {
public:
    //@brief ע��۲���
    virtual void registerObserver(Observer* o) = 0;

    //@brief ɾ���۲���
    virtual void removeObserver(Observer* o) = 0;

    //@brief ֪ͨ�۲���
    virtual void notifyObservers()=0;
};

}//namespace weather

#endif
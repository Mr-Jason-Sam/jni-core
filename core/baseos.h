#ifndef BASEOS_H
#define BASEOS_H

#include <iostream>

#include "basethread.h"

using namespace std;

class BaseOS
{
public:
    BaseOS(string name);
    virtual ~BaseOS();
    virtual bool creatThread(BaseThread *thread);
protected:
    string name;
    BaseThread *thread;
};

#endif // BASEOS_H

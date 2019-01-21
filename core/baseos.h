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
    virtual bool createThread(BaseThread *thread) = 0;
    virtual void sleepSec(unsigned long sec) = 0;
protected:
    string name;
    BaseThread *mThread;
};

#endif // BASEOS_H

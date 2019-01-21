#ifndef BASETHREAD_H
#define BASETHREAD_H

#include <iostream>

#include "smartcountingsem.h"

using namespace std;

class BaseOS;

class BaseThread
{
public:
    BaseThread(string threadName);
    virtual ~BaseThread();
    void entryThread(SmartCountingSem *sem);
    void run();
protected:
    virtual void mainLoop() = 0;
    bool init();
    string mThreadName;
    BaseOS *os;
};

#endif // BASETHREAD_H

#ifndef THREAD_H
#define THREAD_H

#include "sem.h"
#include <iostream>

using namespace std;

class Thread
{
public:
    Thread(string);
    virtual ~Thread();
    //create thread
    virtual  bool create()=0;
    virtual void  sleepSec(unsigned int sec);
    void threadEntry(Sem *sem);
    void run();
protected:
    bool init();
    void virtual mainLoop() = 0;
private:
    string name;
};

#endif // THREAD_H

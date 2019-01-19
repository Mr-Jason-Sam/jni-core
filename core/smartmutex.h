#ifndef SMARTMUTEX_H
#define SMARTMUTEX_H

#include <iostream>
#include <pthread.h>

using namespace std;

class SmartMutex
{
public:
    SmartMutex(string name);
    ~SmartMutex();
    bool lock();
    bool unlock();
private:
    string                name;
    pthread_t             mThread;
    pthread_mutex_t       mMutex;
    pthread_mutexattr_t   mMuitexAttr;
};

#endif // SMARTMUTEX_H

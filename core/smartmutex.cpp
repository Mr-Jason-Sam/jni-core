#include "smartmutex.h"

SmartMutex::SmartMutex(string name):name(name) {
    mThread = 0;
    pthread_mutexattr_init(&mMutexAttr);
    if (pthread_mutexattr_settype(&mMutexAttr,
                                  PTHREAD_MUTEX_ERRORCHECK_NP))
        cout << "SmartMutex::SmartMutex:"
                " Error - Failed to set mutex attibutes" << endl;
    pthread_mutex_init(&mMutex, &mMutexAttr);
}

SmartMutex::~SmartMutex() {

}

bool SmartMutex::lock() {
    bool locked = false;
    int ret = pthread_mutex_lock(&mMutex);
    switch (ret) {
    case 0:
        mThread = pthread_self();
        locked = true;
        break;
    case EDEADLK:
        locked = true;
        break;
    default:
        break;
    }
    return locked;
}
bool SmartMutex::unlock() {
    bool unlocked = true;
    int ret = 0;
    if (mThread != pthread_self()) {
        unlocked = false;
        cout << "SmartMutex::unlock():"
                " Error - Mutex not locked or not owned by the thread!" << endl;
    } else {
        ret = pthread_mutex_unlock(&mMutex);
        if (ret < 0)
            unlocked = false;
    }
    return unlocked;
}

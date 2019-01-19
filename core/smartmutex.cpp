#include "smartmutex.h"

SmartMutex::SmartMutex(string name):name(name) {

}

SmartMutex::~SmartMutex() {

}

bool SmartMutex::lock() {
    bool locked = false;
    int res = pthread_mutex_lock(&mMutex);
    switch (res) {
    case 0:
        mThread =
        break;
    default:
        break;
    }
    return locked;
}
bool SmartMutex::unlock() {

}

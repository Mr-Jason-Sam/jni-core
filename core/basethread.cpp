#include "basethread.h"

#include "mqos.h"
#include "mqosfactory.h"

BaseThread::BaseThread(string threadName)
    :mThreadName(threadName) {
    os = MQOSFactory::newMQOS("MQOS");
}

BaseThread::~BaseThread() {

}

bool BaseThread::init() {
    return true;
}

void BaseThread::entryThread(SmartCountingSem *sem) {
    bool ret = init();
    if (ret) {
        sem->post();
        mainLoop();
    }
}

void BaseThread::run(){
    if (!os->createThread(this)) {
        cout << "Error - Create Thread Fail!" << endl;
        exit(0);
    }
}

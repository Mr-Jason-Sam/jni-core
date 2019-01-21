#include "mqos.h"

#include <string.h>

static void threadEntry(unsigned long * threadArgs) {
    BaseThread *thread = (BaseThread*)threadArgs[0];
    SmartCountingSem *sem = (SmartCountingSem*)threadArgs[1];

    if (thread == nullptr)
        cout << "Error - Thread is null!" << endl;
    else
        thread->entryThread(sem);
    pthread_exit(0);
}

MQOS::MQOS(string name):
BaseOS(name){
    mThreadId = 0;
}

MQOS::~MQOS() {

}

bool MQOS::createThread(BaseThread *thread) {
    unsigned long args[2];
    if (thread == nullptr) {
        cout << "MQOS::createThread:"
                " ERROR, Thread pointer is NULL!  Can't begin the thread!" << endl;
    return false;
    }
    mThread = thread;
    mSem = MQOSFactory::newCountingSem(0);

    pthread_attr_init(&mThreadAttr);
    pthread_attr_setschedpolicy(&mThreadAttr, SCHED_FIFO);
    pthread_attr_setscope(&mThreadAttr, PTHREAD_SCOPE_SYSTEM);

    memset(args, 0, sizeof (args));
    args[0] = (unsigned long) mThread;
    args[1] = (unsigned long) mSem;

    int ret = pthread_create(&mThreadId, &mThreadAttr,
                             (void * (*) (void *))threadEntry, args);


    return true;
}

void MQOS::sleepSec(unsigned long sec) {

}

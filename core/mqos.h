#ifndef MQOS_H
#define MQOS_H

#include "baseos.h"
#include "mqosfactory.h"

class MQOS : public BaseOS {
public:
    MQOS(string name);
    virtual ~MQOS();
    virtual bool createThread(BaseThread *thread);
    virtual void sleepSec(unsigned long sec);
private:
    pthread_t mThreadId;
    pthread_attr_t mThreadAttr;
    SmartCountingSem *mSem;
};

#endif // MQOS_H

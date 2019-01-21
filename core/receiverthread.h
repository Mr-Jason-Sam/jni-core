#ifndef RECEIVERTHREAD_H
#define RECEIVERTHREAD_H

#include "basethread.h"
#include "mqsubjectdetect.h"

class ReceiverThread: public BaseThread
{
public:
    ReceiverThread(string threadName);
    virtual ~ReceiverThread();
    virtual void mainLoop();
    void setMQ(MQSubjectDetect *mq);
private:
    MQSubjectDetect *mqReceiver;
};

#endif // RECEIVERTHREAD_H

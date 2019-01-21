#ifndef SENDERTHREAD_H
#define SENDERTHREAD_H

#include "basethread.h"
#include "mqsubjectdetect.h"

class SenderThread : public BaseThread
{
public:
    SenderThread(string threadName);
    virtual ~SenderThread();
    virtual void mainLoop();
    void setMQ(MQSubjectDetect *mq);
private:
    MQSubjectDetect *mqSender;
};

#endif // SENDERTHREAD_H

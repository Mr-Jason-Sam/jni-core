#include "senderthread.h"
#include "entity/detectresult.h"

SenderThread::SenderThread(string name):
    BaseThread(name)
{

}

void SenderThread::mainLoop() {
    DetectResult *ret = nullptr;
    while(1) {
        mqSender->sendMsg(*ret);

    }
}

void SenderThread::setMQ(MQSubjectDetect *mq) {
    mqSender = mq;
}

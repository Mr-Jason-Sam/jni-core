#include "receiverthread.h"
#include "mqos.h"

ReceiverThread::ReceiverThread(string name):
BaseThread(name)
{

}

void ReceiverThread::mainLoop() {
    DetectResult *info = new DetectResult("test");
    while (1) {
        mqReceiver->recvMsg(*info);
        os->sleepSec(1);
    }
}

void ReceiverThread::setMQ(MQSubjectDetect *mq) {
    mqReceiver = mq;
}

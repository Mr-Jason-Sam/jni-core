#include "mqsubjectdetect.h"
#include "mqosfactory.h"

MQSubjectDetect::MQSubjectDetect(string name):
    name(name){
    mutex = MQOSFactory::newMutex("MQ_MUTEX");
    sem = MQOSFactory::newCountingSem(0);
}

MQSubjectDetect::~MQSubjectDetect() {

}

bool MQSubjectDetect::recvMsg(DetectResult info) {
    mutex->lock();
    queue.push_back(info);
    mutex->unlock();
    sem->post();
    return true;
}

bool MQSubjectDetect::sendMsg(DetectResult &ret) {
    sem->get();
    mutex->lock();
    if (queue.empty()) {
        mutex->unlock();
        return false;
    }
    ret = queue.front();
    queue.pop_front();
    mutex->unlock();
    return true;
}

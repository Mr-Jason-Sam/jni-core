
#include "baseos.h"
#include "mqos.h"

#include "basethread.h"

#include "smartcountingsem.h"
#include "smartmutex.h"

#include "mqsubjectdetect.h"

#include "mqosfactory.h"

MQOS *MQOSFactory::newMQOS(string osName) {
    return new MQOS(osName);
}


SmartCountingSem *MQOSFactory::newCountingSem(unsigned int init_sem) {
    return new SmartCountingSem(init_sem);
}

SmartMutex *MQOSFactory::newMutex(string mutexName) {
    return new SmartMutex(mutexName);
}

MQSubjectDetect *MQOSFactory::newMsgQueue(string mqName) {
    return new MQSubjectDetect(mqName);
}

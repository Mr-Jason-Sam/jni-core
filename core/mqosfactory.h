#ifndef MQOSFACTORY_H
#define MQOSFACTORY_H

#include <iostream>
using namespace std;

class MQOS;
class SmartCountingSem;
class SmartMutex;
class MQSubjectDetect;

class MQOSFactory
{
public:
    static MQOS              *newMQOS(string osName);


    static SmartCountingSem  *newCountingSem(unsigned int init_sem);

    static SmartMutex		 *newMutex(string mutexName);


    static MQSubjectDetect   *newMsgQueue(string mqName);

};

#endif // MQOSFACTORY_H

#ifndef MQSUBJECTDETECT_H
#define MQSUBJECTDETECT_H

#include <iostream>
#include <deque>

#include "smartcountingsem.h"
#include "smartmutex.h"
#include "entity/detectresult.h"

using namespace std;

class MQSubjectDetect
{
public:
    MQSubjectDetect(string name);
    ~MQSubjectDetect();
    bool recvMsg(DetectResult info);
    bool sendMsg(DetectResult &ret);
private:
    string name;
    deque<DetectResult> queue;
    SmartMutex *mutex;
    SmartCountingSem *sem;
};

#endif // MQSUBJECTDETECT_H

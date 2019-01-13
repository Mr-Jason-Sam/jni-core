#ifndef DETECTJNI_H
#define DETECTJNI_H

#include "detectjni_global.h"
#include "detectconfig.h"
#include "detectresult.h"
#include "helper.h"

#include <iostream>

#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonValue>
#include <QDebug>
#include <QString>
#include <string>
#include <sstream>
using namespace std;

class DETECTJNISHARED_EXPORT DetectJNI
{
public:
    DetectJNI();
    string config(string);
    string start(string);

protected:
    QString getDetectResultJson(DetectResult);
    QString getDetectConfigJson(DetectConfig);

    bool release();
};

#endif // DETECTJNI_H

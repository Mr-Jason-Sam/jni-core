#ifndef DETECTJNI_H
#define DETECTJNI_H

#include "proxy/detectjni_global.h"
#include "entity/detectconfig.h"
#include "utils/qhelper.h"
#include "detectresult.h"

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
    QString      getDetectResultJson(DetectResult);
    QString      getDetectConfigJson(DetectConfig);
    QJsonObject  getJsonObjectFromSubject(Subject);
    QJsonValue   assembleQJsonValueFromSubjects(list<Subject>);
    bool release();
};

#endif // DETECTJNI_H

#ifndef QHELPER_H
#define QHELPER_H

#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonValue>
#include <QDebug>
#include <QString>
#include <string>
#include <sstream>

#include <iostream>
using namespace std;

class QHelper
{
public:
    QHelper();
    static QJsonObject    getQJsonObjectFromQString(const QString);
    static QString        getQStringFromQJsonObject(const QJsonObject&);
    static QJsonObject    getQJsonObjectFromString(const string);
    static string         getStringFromJsonObjectAndValue(const QJsonObject&, const string);
    static int            getIntegerFromJsonObjectAndValue(const QJsonObject&, const string);
};

#endif // QHELPER_H

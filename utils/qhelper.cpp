#include "qhelper.h"

QHelper::QHelper()
{

}

QJsonObject QHelper::getQJsonObjectFromQString(
        const QString jsonString) {
    QJsonDocument jsonDocument =
            QJsonDocument::fromJson(jsonString.toLocal8Bit().data());
    if( jsonDocument.isNull() ){
        qDebug()<< "===> please check the string "
                << jsonString.toLocal8Bit().data();
    }
    QJsonObject jsonObject = jsonDocument.object();
    return jsonObject;
}

QString QHelper::getQStringFromQJsonObject(
        const QJsonObject& jsonObject) {
    return QString(QJsonDocument(jsonObject).toJson());
}

QJsonObject QHelper::getQJsonObjectFromString(
        const string json) {
    QString Qjson = QString::fromStdString(json);
    QJsonDocument jsonDocument =
            QJsonDocument::fromJson(Qjson.toLocal8Bit().data());
    if( jsonDocument.isNull() )
        qDebug()<< "===> please check the string "
                << Qjson.toLocal8Bit().data();
    return jsonDocument.object();
}

string QHelper::getStringFromJsonObjectAndValue(
        const QJsonObject& json, const string value) {
    return json.value(value.c_str()).toString().toStdString();
}

int QHelper::getIntegerFromJsonObjectAndValue(
        const QJsonObject& json, const string value) {
    return json.value(value.c_str()).toString().toInt();
}

//template<class T>
//QJsonValue QHelper::getQJsonValueFromList(
//        const list<T> data) {
//    QJsonArray jsonArray;
//    for(list<T>::iterator it= data.begin(); it!=data.end(); it++)
//    {
//        jsonArray.append( QJsonValue( getFaceJson(*it)) );
//    }
//}

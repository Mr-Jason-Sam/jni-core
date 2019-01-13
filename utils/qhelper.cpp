#include "qhelper.h"

Helper::Helper()
{

}

QJsonObject Helper::getQJsonObjectFromQString(
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

QString Helper::getQStringFromQJsonObject(
        const QJsonObject& jsonObject) {
    return QString(QJsonDocument(jsonObject).toJson());
}

QJsonObject Helper::getQJsonObjectFromString(
        const string json) {
    QString Qjson = QString::fromStdString(json);
    QJsonDocument jsonDocument =
            QJsonDocument::fromJson(Qjson.toLocal8Bit().data());
    if( jsonDocument.isNull() )
        qDebug()<< "===> please check the string "
                << Qjson.toLocal8Bit().data();
    return jsonDocument.object();
}

string Helper::getStringFromJsonObjectAndValue(
        const QJsonObject& json, const string value) {
    return json.value("id").toString().toStdString();
}

int Helper::getIntegerFromJsonObjectAndValue(
        const QJsonObject& json, const string value) {
    return json.value("id").toString().toInt();
}

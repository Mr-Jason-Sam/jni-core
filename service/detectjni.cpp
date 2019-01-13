#include "detectjni.h"


DetectJNI::DetectJNI()
{

}

string DetectJNI::config(string json) {
     QString Qjson = QString::fromStdString(json);
     QJsonDocument jsonDocument = QJsonDocument::fromJson(Qjson.toLocal8Bit().data());
     if( jsonDocument.isNull() )
     {
         qDebug()<< "===> please check the string "<< Qjson.toLocal8Bit().data();
     }
     QJsonObject jsonObject = jsonDocument.object();
     QJsonValue idJson = jsonObject.value("id");
     QJsonValue nameJson = jsonObject.value("name");
     QJsonValue bufferSizeJson = jsonObject.value("bufferSize");

     std::string id = idJson.toString().toStdString();
     std::string name = nameJson.toString().toStdString();
     int bufferSize = bufferSizeJson.toString().toInt();

     DetectConfig config = DetectConfig(id, name, bufferSize);
     QString detectJson = getDetectConfigJson(config);

    return detectJson.toStdString();
}

string DetectJNI::start(string json) {

}

QString DetectJNI::getDetectConfigJson(DetectConfig cf) {
    QJsonObject detectConfig;
    detectConfig.insert("id", cf.getId().c_str());
    detectConfig.insert("name", cf.getName().c_str());
    detectConfig.insert("bufferSize", cf.getBufferSize());
    qInfo() <<detectConfig<<endl;
    return QString(QJsonDocument(detectConfig).toJson());
}

QString DetectJNI::getDetectResultJson(DetectResult ret) {
    QJsonObject detectResult;
//    detectResult.insert("imageWidth",dr.imageWidth);
//    detectResult.insert("imageHeight",dr.imageHeight);
    QJsonDocument document;
    document.setObject(detectResult);
    QByteArray byteArray = document.toJson(QJsonDocument::Compact);
    QString strJson(byteArray);
}

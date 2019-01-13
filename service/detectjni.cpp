#include "detectjni.h"

DetectJNI::DetectJNI()
{

}

string DetectJNI::config(string json) {
     QJsonObject jsonObject = QHelper::getQJsonObjectFromString(json);

     string id = QHelper::
             getStringFromJsonObjectAndValue(jsonObject, "id");
     string name = QHelper::
             getStringFromJsonObjectAndValue(jsonObject, "name");
     int bufferSize = QHelper::
             getIntegerFromJsonObjectAndValue(jsonObject, "bufferSize");
     DetectConfig config = DetectConfig(id, name, bufferSize);

    return getDetectConfigJson(config).toStdString();
}

string DetectJNI::start(string json) {
    QJsonObject jsonObject = QHelper::getQJsonObjectFromString(json);

    string imgUrl = QHelper::
            getStringFromJsonObjectAndValue(jsonObject, "imageUrl");
    DetectResult ret = DetectResult(imgUrl);

   return getDetectResultJson(ret).toStdString();
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
    QJsonObject detectConfig;
    detectConfig.insert("imageUrl", ret.getImageUrl().c_str());
    detectConfig.insert("subject", assembleQJsonValueFromSubjects(ret.getSubjects()));
    detectConfig.insert("timeUsed", ret.getTimeUsed());
    detectConfig.insert("code", ret.getCode());
    detectConfig.insert("message", ret.getMessage().c_str());
    qInfo() << detectConfig <<endl;
    return QString(QJsonDocument(detectConfig).toJson());
}

QJsonObject DetectJNI::getJsonObjectFromSubject(Subject subject) {
    QJsonObject boxJson;
    boxJson.insert("left",subject.getSubjectBox().getLeft());
    boxJson.insert("top",subject.getSubjectBox().getTop());
    boxJson.insert("right",subject.getSubjectBox().getRight());
    boxJson.insert("bottom",subject.getSubjectBox().getBottom());
    return boxJson;
}

QJsonValue DetectJNI::assembleQJsonValueFromSubjects(list<Subject> subjects) {
    QJsonArray jsonArray;
    for(list<Subject>::iterator it= subjects.begin(); it!=subjects.end(); it++)
        jsonArray.append(getJsonObjectFromSubject(*it));
    return QJsonValue(jsonArray);
}

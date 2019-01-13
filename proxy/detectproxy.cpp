#include "detectproxy.h"
#include "service/detectjni.h"

DetectJNI* service = new DetectJNI();

JNIEXPORT jstring JNICALL Java_cn_smart_ai_InterfaceTest_init
(JNIEnv *env, jobject obj, jstring initJson) {
    const char * json = env->GetStringUTFChars(initJson, 0);
    std::cout<<"Java_cn_smart_ai_InterfaceTest_init, initJson: "<<json<<std::endl;

    std::string result = service->config(json);

    jstring result_str;
    result_str = env->NewStringUTF(result.c_str());
    cout << "Java_cn_smart_ai_InterfaceTest_init, result_str: " << result.c_str() << endl;
    return result_str;
}

JNIEXPORT jstring JNICALL Java_cn_smart_ai_InterfaceTest_detect
(JNIEnv *env, jobject obj, jstring detectjson) {

}

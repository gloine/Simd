//
// Created by Jaehyung Lee on 2016. 12. 16..
//

#include <jni.h>
#include <string>

extern "C"
jstring
Java_com_example_gloine_FaceDetector_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

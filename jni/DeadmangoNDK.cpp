#include <jni.h>
#include<com_example_deadmangondk_NativeLib.h>

JNIEXPORT jint JNICALL Java_com_example_deadmangondk_NativeLib_addthem
  (JNIEnv *env, jobject a, jint no1 , jint no2 )
{

	return no1+no2;
}

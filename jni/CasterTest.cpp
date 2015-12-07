#include <stdio.h>
#include "../../T/Caster.h"
#include <string.h>
#include <jni.h>
#include <stdio.h>
//#include <libavformat/avformat.h>
//#include <libavcodec/avcodec.h>
//#include <libavutil/opt.h>
//#include <libavutil/avutil.h>
//#include <libswscale/swscale.h>


#include <sys/time.h>
#include <android/log.h>


#define  TAG    "Caster"

#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,TAG,__VA_ARGS__)
// 定义debug信息
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, TAG, __VA_ARGS__)
// 定义error信息
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,TAG,__VA_ARGS__)

Caster *c = NULL;

//int main(int argc, char **argv)
//{
//	//printf("Hello, World!\n");	//Set a breakpoint here or press F10 to step into.
//
//	sleep(100000);
//	return 0;
//}
JNIEXPORT jint JNICALL Java_com_yf_encoder_Encoder_Start(JNIEnv* env, jclass thiz)
{
	Caster *c = new Caster();
	c->init(3779);
	c->Start();
}
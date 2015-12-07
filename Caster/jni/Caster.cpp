/*
 * Created by VisualGDB. Based on hello-jni example.

 * Copyright (C) 2009 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
#include <string.h>
#include <jni.h>
#include <stdio.h>

#include "../../T/Caster.h"
#include <sys/time.h>
#include <android/log.h>

int s_ButtonPressCounter = 0;

#define  TAG    "Caster"

#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,TAG,__VA_ARGS__)
// 定义debug信息
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, TAG, __VA_ARGS__)
// 定义error信息
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,TAG,__VA_ARGS__)

Caster *c = NULL;

//JNIEXPORT jint JNICALL Java_com_yf_encoder_Encoder_Start(JNIEnv* env, jclass thiz)
//{
	//Caster *c = new Caster();
	//c->init(3779);
	//c->Start();
//}
#ifdef __cplusplus
extern "C" {
#endif
jint Java_com_yf_Caster_Caster_stringFromJNI(JNIEnv* env, jobject thiz)
{
	LOGD("called\n");
	char szBuf[512];
	sprintf(szBuf, "You have pressed this huge button %d times", s_ButtonPressCounter++);
	Caster *c = new Caster();
	
	if (c->init(3779) < 0)
		return -1;
	c->Start();
	return 0;
}
#ifdef __cplusplus
}
#endif


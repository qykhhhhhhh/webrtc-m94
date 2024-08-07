// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/webrtc/CallSessionFileRotatingLogSink

#ifndef org_webrtc_CallSessionFileRotatingLogSink_JNI
#define org_webrtc_CallSessionFileRotatingLogSink_JNI

#include <jni.h>

#include "../../../../../../../../sdk/android/src/jni/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_webrtc_CallSessionFileRotatingLogSink[];
const char kClassPath_org_webrtc_CallSessionFileRotatingLogSink[] =
    "org/webrtc/CallSessionFileRotatingLogSink";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_webrtc_CallSessionFileRotatingLogSink_clazz(nullptr);
#ifndef org_webrtc_CallSessionFileRotatingLogSink_clazz_defined
#define org_webrtc_CallSessionFileRotatingLogSink_clazz_defined
inline jclass org_webrtc_CallSessionFileRotatingLogSink_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_CallSessionFileRotatingLogSink,
      &g_org_webrtc_CallSessionFileRotatingLogSink_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace  webrtc {
namespace jni {

static jlong JNI_CallSessionFileRotatingLogSink_AddSink(JNIEnv* env, const
    base::android::JavaParamRef<jstring>& dirPath,
    jint maxFileSize,
    jint severity);

JNI_GENERATOR_EXPORT jlong Java_org_webrtc_CallSessionFileRotatingLogSink_nativeAddSink(
    JNIEnv* env,
    jclass jcaller,
    jstring dirPath,
    jint maxFileSize,
    jint severity) {
  return JNI_CallSessionFileRotatingLogSink_AddSink(env, base::android::JavaParamRef<jstring>(env,
      dirPath), maxFileSize, severity);
}

static void JNI_CallSessionFileRotatingLogSink_DeleteSink(JNIEnv* env, jlong sink);

JNI_GENERATOR_EXPORT void Java_org_webrtc_CallSessionFileRotatingLogSink_nativeDeleteSink(
    JNIEnv* env,
    jclass jcaller,
    jlong sink) {
  return JNI_CallSessionFileRotatingLogSink_DeleteSink(env, sink);
}

static base::android::ScopedJavaLocalRef<jbyteArray>
    JNI_CallSessionFileRotatingLogSink_GetLogData(JNIEnv* env, const
    base::android::JavaParamRef<jstring>& dirPath);

JNI_GENERATOR_EXPORT jbyteArray Java_org_webrtc_CallSessionFileRotatingLogSink_nativeGetLogData(
    JNIEnv* env,
    jclass jcaller,
    jstring dirPath) {
  return JNI_CallSessionFileRotatingLogSink_GetLogData(env,
      base::android::JavaParamRef<jstring>(env, dirPath)).Release();
}


}  // namespace jni
}  // namespace  webrtc

#endif  // org_webrtc_CallSessionFileRotatingLogSink_JNI

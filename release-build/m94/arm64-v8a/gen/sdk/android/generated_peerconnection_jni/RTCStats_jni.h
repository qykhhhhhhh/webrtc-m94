// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/webrtc/RTCStats

#ifndef org_webrtc_RTCStats_JNI
#define org_webrtc_RTCStats_JNI

#include <jni.h>

#include "../../../../../../../../sdk/android/src/jni/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_webrtc_RTCStats[];
const char kClassPath_org_webrtc_RTCStats[] = "org/webrtc/RTCStats";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_webrtc_RTCStats_clazz(nullptr);
#ifndef org_webrtc_RTCStats_clazz_defined
#define org_webrtc_RTCStats_clazz_defined
inline jclass org_webrtc_RTCStats_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_RTCStats,
      &g_org_webrtc_RTCStats_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace  webrtc {
namespace jni {


static std::atomic<jmethodID> g_org_webrtc_RTCStats_create(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_RTCStats_create(JNIEnv* env, jlong
    timestampUs,
    const base::android::JavaRef<jstring>& type,
    const base::android::JavaRef<jstring>& id,
    const base::android::JavaRef<jobject>& members) {
  jclass clazz = org_webrtc_RTCStats_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_webrtc_RTCStats_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "create",
          "(JLjava/lang/String;Ljava/lang/String;Ljava/util/Map;)Lorg/webrtc/RTCStats;",
          &g_org_webrtc_RTCStats_create);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, timestampUs, type.obj(), id.obj(), members.obj());
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

}  // namespace jni
}  // namespace  webrtc

#endif  // org_webrtc_RTCStats_JNI

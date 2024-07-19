// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/webrtc/MediaConstraints

#ifndef org_webrtc_MediaConstraints_JNI
#define org_webrtc_MediaConstraints_JNI

#include <jni.h>

#include "../../../../../../../../sdk/android/src/jni/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_webrtc_MediaConstraints[];
const char kClassPath_org_webrtc_MediaConstraints[] = "org/webrtc/MediaConstraints";

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_webrtc_MediaConstraints_00024KeyValuePair[];
const char kClassPath_org_webrtc_MediaConstraints_00024KeyValuePair[] =
    "org/webrtc/MediaConstraints$KeyValuePair";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_webrtc_MediaConstraints_clazz(nullptr);
#ifndef org_webrtc_MediaConstraints_clazz_defined
#define org_webrtc_MediaConstraints_clazz_defined
inline jclass org_webrtc_MediaConstraints_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_MediaConstraints,
      &g_org_webrtc_MediaConstraints_clazz);
}
#endif
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_webrtc_MediaConstraints_00024KeyValuePair_clazz(nullptr);
#ifndef org_webrtc_MediaConstraints_00024KeyValuePair_clazz_defined
#define org_webrtc_MediaConstraints_00024KeyValuePair_clazz_defined
inline jclass org_webrtc_MediaConstraints_00024KeyValuePair_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_MediaConstraints_00024KeyValuePair,
      &g_org_webrtc_MediaConstraints_00024KeyValuePair_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace  webrtc {
namespace jni {


static std::atomic<jmethodID> g_org_webrtc_MediaConstraints_00024KeyValuePair_getKey(nullptr);
static base::android::ScopedJavaLocalRef<jstring> Java_KeyValuePair_getKey(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_MediaConstraints_00024KeyValuePair_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaConstraints_00024KeyValuePair_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getKey",
          "()Ljava/lang/String;",
          &g_org_webrtc_MediaConstraints_00024KeyValuePair_getKey);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static std::atomic<jmethodID> g_org_webrtc_MediaConstraints_00024KeyValuePair_getValue(nullptr);
static base::android::ScopedJavaLocalRef<jstring> Java_KeyValuePair_getValue(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_MediaConstraints_00024KeyValuePair_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaConstraints_00024KeyValuePair_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getValue",
          "()Ljava/lang/String;",
          &g_org_webrtc_MediaConstraints_00024KeyValuePair_getValue);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static std::atomic<jmethodID> g_org_webrtc_MediaConstraints_getMandatory(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_MediaConstraints_getMandatory(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_MediaConstraints_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaConstraints_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getMandatory",
          "()Ljava/util/List;",
          &g_org_webrtc_MediaConstraints_getMandatory);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          call_context.base.method_id);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID> g_org_webrtc_MediaConstraints_getOptional(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_MediaConstraints_getOptional(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_MediaConstraints_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_MediaConstraints_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getOptional",
          "()Ljava/util/List;",
          &g_org_webrtc_MediaConstraints_getOptional);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          call_context.base.method_id);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

}  // namespace jni
}  // namespace  webrtc

#endif  // org_webrtc_MediaConstraints_JNI

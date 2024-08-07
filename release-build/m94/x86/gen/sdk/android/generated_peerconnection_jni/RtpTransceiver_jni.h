// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/webrtc/RtpTransceiver

#ifndef org_webrtc_RtpTransceiver_JNI
#define org_webrtc_RtpTransceiver_JNI

#include <jni.h>

#include "../../../../../../../../sdk/android/src/jni/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_webrtc_RtpTransceiver[];
const char kClassPath_org_webrtc_RtpTransceiver[] = "org/webrtc/RtpTransceiver";

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_webrtc_RtpTransceiver_00024RtpTransceiverDirection[];
const char kClassPath_org_webrtc_RtpTransceiver_00024RtpTransceiverDirection[] =
    "org/webrtc/RtpTransceiver$RtpTransceiverDirection";

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_webrtc_RtpTransceiver_00024RtpTransceiverInit[];
const char kClassPath_org_webrtc_RtpTransceiver_00024RtpTransceiverInit[] =
    "org/webrtc/RtpTransceiver$RtpTransceiverInit";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_webrtc_RtpTransceiver_clazz(nullptr);
#ifndef org_webrtc_RtpTransceiver_clazz_defined
#define org_webrtc_RtpTransceiver_clazz_defined
inline jclass org_webrtc_RtpTransceiver_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_RtpTransceiver,
      &g_org_webrtc_RtpTransceiver_clazz);
}
#endif
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_webrtc_RtpTransceiver_00024RtpTransceiverDirection_clazz(nullptr);
#ifndef org_webrtc_RtpTransceiver_00024RtpTransceiverDirection_clazz_defined
#define org_webrtc_RtpTransceiver_00024RtpTransceiverDirection_clazz_defined
inline jclass org_webrtc_RtpTransceiver_00024RtpTransceiverDirection_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_webrtc_RtpTransceiver_00024RtpTransceiverDirection,
      &g_org_webrtc_RtpTransceiver_00024RtpTransceiverDirection_clazz);
}
#endif
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass>
    g_org_webrtc_RtpTransceiver_00024RtpTransceiverInit_clazz(nullptr);
#ifndef org_webrtc_RtpTransceiver_00024RtpTransceiverInit_clazz_defined
#define org_webrtc_RtpTransceiver_00024RtpTransceiverInit_clazz_defined
inline jclass org_webrtc_RtpTransceiver_00024RtpTransceiverInit_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_webrtc_RtpTransceiver_00024RtpTransceiverInit,
      &g_org_webrtc_RtpTransceiver_00024RtpTransceiverInit_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace  webrtc {
namespace jni {

static base::android::ScopedJavaLocalRef<jobject> JNI_RtpTransceiver_GetMediaType(JNIEnv* env, jlong
    rtpTransceiver);

JNI_GENERATOR_EXPORT jobject Java_org_webrtc_RtpTransceiver_nativeGetMediaType(
    JNIEnv* env,
    jclass jcaller,
    jlong rtpTransceiver) {
  return JNI_RtpTransceiver_GetMediaType(env, rtpTransceiver).Release();
}

static base::android::ScopedJavaLocalRef<jstring> JNI_RtpTransceiver_GetMid(JNIEnv* env, jlong
    rtpTransceiver);

JNI_GENERATOR_EXPORT jstring Java_org_webrtc_RtpTransceiver_nativeGetMid(
    JNIEnv* env,
    jclass jcaller,
    jlong rtpTransceiver) {
  return JNI_RtpTransceiver_GetMid(env, rtpTransceiver).Release();
}

static base::android::ScopedJavaLocalRef<jobject> JNI_RtpTransceiver_GetSender(JNIEnv* env, jlong
    rtpTransceiver);

JNI_GENERATOR_EXPORT jobject Java_org_webrtc_RtpTransceiver_nativeGetSender(
    JNIEnv* env,
    jclass jcaller,
    jlong rtpTransceiver) {
  return JNI_RtpTransceiver_GetSender(env, rtpTransceiver).Release();
}

static base::android::ScopedJavaLocalRef<jobject> JNI_RtpTransceiver_GetReceiver(JNIEnv* env, jlong
    rtpTransceiver);

JNI_GENERATOR_EXPORT jobject Java_org_webrtc_RtpTransceiver_nativeGetReceiver(
    JNIEnv* env,
    jclass jcaller,
    jlong rtpTransceiver) {
  return JNI_RtpTransceiver_GetReceiver(env, rtpTransceiver).Release();
}

static jboolean JNI_RtpTransceiver_Stopped(JNIEnv* env, jlong rtpTransceiver);

JNI_GENERATOR_EXPORT jboolean Java_org_webrtc_RtpTransceiver_nativeStopped(
    JNIEnv* env,
    jclass jcaller,
    jlong rtpTransceiver) {
  return JNI_RtpTransceiver_Stopped(env, rtpTransceiver);
}

static base::android::ScopedJavaLocalRef<jobject> JNI_RtpTransceiver_Direction(JNIEnv* env, jlong
    rtpTransceiver);

JNI_GENERATOR_EXPORT jobject Java_org_webrtc_RtpTransceiver_nativeDirection(
    JNIEnv* env,
    jclass jcaller,
    jlong rtpTransceiver) {
  return JNI_RtpTransceiver_Direction(env, rtpTransceiver).Release();
}

static base::android::ScopedJavaLocalRef<jobject> JNI_RtpTransceiver_CurrentDirection(JNIEnv* env,
    jlong rtpTransceiver);

JNI_GENERATOR_EXPORT jobject Java_org_webrtc_RtpTransceiver_nativeCurrentDirection(
    JNIEnv* env,
    jclass jcaller,
    jlong rtpTransceiver) {
  return JNI_RtpTransceiver_CurrentDirection(env, rtpTransceiver).Release();
}

static void JNI_RtpTransceiver_StopInternal(JNIEnv* env, jlong rtpTransceiver);

JNI_GENERATOR_EXPORT void Java_org_webrtc_RtpTransceiver_nativeStopInternal(
    JNIEnv* env,
    jclass jcaller,
    jlong rtpTransceiver) {
  return JNI_RtpTransceiver_StopInternal(env, rtpTransceiver);
}

static void JNI_RtpTransceiver_StopStandard(JNIEnv* env, jlong rtpTransceiver);

JNI_GENERATOR_EXPORT void Java_org_webrtc_RtpTransceiver_nativeStopStandard(
    JNIEnv* env,
    jclass jcaller,
    jlong rtpTransceiver) {
  return JNI_RtpTransceiver_StopStandard(env, rtpTransceiver);
}

static jboolean JNI_RtpTransceiver_SetDirection(JNIEnv* env, jlong rtpTransceiver,
    const base::android::JavaParamRef<jobject>& rtpTransceiverDirection);

JNI_GENERATOR_EXPORT jboolean Java_org_webrtc_RtpTransceiver_nativeSetDirection(
    JNIEnv* env,
    jclass jcaller,
    jlong rtpTransceiver,
    jobject rtpTransceiverDirection) {
  return JNI_RtpTransceiver_SetDirection(env, rtpTransceiver,
      base::android::JavaParamRef<jobject>(env, rtpTransceiverDirection));
}


static std::atomic<jmethodID>
    g_org_webrtc_RtpTransceiver_00024RtpTransceiverDirection_getNativeIndex(nullptr);
static jint Java_RtpTransceiverDirection_getNativeIndex(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_RtpTransceiver_00024RtpTransceiverDirection_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_RtpTransceiver_00024RtpTransceiverDirection_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getNativeIndex",
          "()I",
          &g_org_webrtc_RtpTransceiver_00024RtpTransceiverDirection_getNativeIndex);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_org_webrtc_RtpTransceiver_00024RtpTransceiverDirection_fromNativeIndex(nullptr);
static base::android::ScopedJavaLocalRef<jobject>
    Java_RtpTransceiverDirection_fromNativeIndex(JNIEnv* env, JniIntWrapper nativeIndex) {
  jclass clazz = org_webrtc_RtpTransceiver_00024RtpTransceiverDirection_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_webrtc_RtpTransceiver_00024RtpTransceiverDirection_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "fromNativeIndex",
          "(I)Lorg/webrtc/RtpTransceiver$RtpTransceiverDirection;",
          &g_org_webrtc_RtpTransceiver_00024RtpTransceiverDirection_fromNativeIndex);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, as_jint(nativeIndex));
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_webrtc_RtpTransceiver_00024RtpTransceiverInit_getDirectionNativeIndex(nullptr);
static jint Java_RtpTransceiverInit_getDirectionNativeIndex(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_RtpTransceiver_00024RtpTransceiverInit_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_RtpTransceiver_00024RtpTransceiverInit_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getDirectionNativeIndex",
          "()I",
          &g_org_webrtc_RtpTransceiver_00024RtpTransceiverInit_getDirectionNativeIndex);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_org_webrtc_RtpTransceiver_00024RtpTransceiverInit_getStreamIds(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_RtpTransceiverInit_getStreamIds(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_RtpTransceiver_00024RtpTransceiverInit_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_RtpTransceiver_00024RtpTransceiverInit_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getStreamIds",
          "()Ljava/util/List;",
          &g_org_webrtc_RtpTransceiver_00024RtpTransceiverInit_getStreamIds);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          call_context.base.method_id);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID>
    g_org_webrtc_RtpTransceiver_00024RtpTransceiverInit_getSendEncodings(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_RtpTransceiverInit_getSendEncodings(JNIEnv*
    env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_RtpTransceiver_00024RtpTransceiverInit_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_RtpTransceiver_00024RtpTransceiverInit_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getSendEncodings",
          "()Ljava/util/List;",
          &g_org_webrtc_RtpTransceiver_00024RtpTransceiverInit_getSendEncodings);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          call_context.base.method_id);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID> g_org_webrtc_RtpTransceiver_Constructor(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_RtpTransceiver_Constructor(JNIEnv* env, jlong
    nativeRtpTransceiver) {
  jclass clazz = org_webrtc_RtpTransceiver_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_webrtc_RtpTransceiver_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "<init>",
          "(J)V",
          &g_org_webrtc_RtpTransceiver_Constructor);

  jobject ret =
      env->NewObject(clazz,
          call_context.base.method_id, nativeRtpTransceiver);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID> g_org_webrtc_RtpTransceiver_dispose(nullptr);
static void Java_RtpTransceiver_dispose(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_RtpTransceiver_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_RtpTransceiver_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "dispose",
          "()V",
          &g_org_webrtc_RtpTransceiver_dispose);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id);
}

}  // namespace jni
}  // namespace  webrtc

#endif  // org_webrtc_RtpTransceiver_JNI

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/webrtc/audio/WebRtcAudioRecord

#ifndef org_webrtc_audio_WebRtcAudioRecord_JNI
#define org_webrtc_audio_WebRtcAudioRecord_JNI

#include <jni.h>

#include "../../../../../../../../sdk/android/src/jni/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_webrtc_audio_WebRtcAudioRecord[];
const char kClassPath_org_webrtc_audio_WebRtcAudioRecord[] = "org/webrtc/audio/WebRtcAudioRecord";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_webrtc_audio_WebRtcAudioRecord_clazz(nullptr);
#ifndef org_webrtc_audio_WebRtcAudioRecord_clazz_defined
#define org_webrtc_audio_WebRtcAudioRecord_clazz_defined
inline jclass org_webrtc_audio_WebRtcAudioRecord_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_audio_WebRtcAudioRecord,
      &g_org_webrtc_audio_WebRtcAudioRecord_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace  webrtc {
namespace jni {

JNI_GENERATOR_EXPORT void Java_org_webrtc_audio_WebRtcAudioRecord_nativeCacheDirectBufferAddress(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeAudioRecordJni,
    jobject byteBuffer) {
  AudioRecordJni* native = reinterpret_cast<AudioRecordJni*>(nativeAudioRecordJni);
  CHECK_NATIVE_PTR(env, jcaller, native, "CacheDirectBufferAddress");
  return native->CacheDirectBufferAddress(env, base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jobject>(env, byteBuffer));
}

JNI_GENERATOR_EXPORT void Java_org_webrtc_audio_WebRtcAudioRecord_nativeDataIsRecorded(
    JNIEnv* env,
    jobject jcaller,
    jlong nativeAudioRecordJni,
    jint bytes) {
  AudioRecordJni* native = reinterpret_cast<AudioRecordJni*>(nativeAudioRecordJni);
  CHECK_NATIVE_PTR(env, jcaller, native, "DataIsRecorded");
  return native->DataIsRecorded(env, base::android::JavaParamRef<jobject>(env, jcaller), bytes);
}


static std::atomic<jmethodID> g_org_webrtc_audio_WebRtcAudioRecord_Constructor(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_WebRtcAudioRecord_Constructor(JNIEnv* env,
    const base::android::JavaRef<jobject>& context,
    const base::android::JavaRef<jobject>& audioManager) {
  jclass clazz = org_webrtc_audio_WebRtcAudioRecord_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_webrtc_audio_WebRtcAudioRecord_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "<init>",
          "(Landroid/content/Context;Landroid/media/AudioManager;)V",
          &g_org_webrtc_audio_WebRtcAudioRecord_Constructor);

  jobject ret =
      env->NewObject(clazz,
          call_context.base.method_id, context.obj(), audioManager.obj());
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID> g_org_webrtc_audio_WebRtcAudioRecord_setNativeAudioRecord(nullptr);
static void Java_WebRtcAudioRecord_setNativeAudioRecord(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jlong nativeAudioRecord) {
  jclass clazz = org_webrtc_audio_WebRtcAudioRecord_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_audio_WebRtcAudioRecord_clazz(env));

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "setNativeAudioRecord",
          "(J)V",
          &g_org_webrtc_audio_WebRtcAudioRecord_setNativeAudioRecord);

     env->CallVoidMethod(obj.obj(),
          call_context.base.method_id, nativeAudioRecord);
}

static std::atomic<jmethodID>
    g_org_webrtc_audio_WebRtcAudioRecord_isAcousticEchoCancelerSupported(nullptr);
static jboolean Java_WebRtcAudioRecord_isAcousticEchoCancelerSupported(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_audio_WebRtcAudioRecord_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_audio_WebRtcAudioRecord_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "isAcousticEchoCancelerSupported",
          "()Z",
          &g_org_webrtc_audio_WebRtcAudioRecord_isAcousticEchoCancelerSupported);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_org_webrtc_audio_WebRtcAudioRecord_isNoiseSuppressorSupported(nullptr);
static jboolean Java_WebRtcAudioRecord_isNoiseSuppressorSupported(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_audio_WebRtcAudioRecord_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_audio_WebRtcAudioRecord_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "isNoiseSuppressorSupported",
          "()Z",
          &g_org_webrtc_audio_WebRtcAudioRecord_isNoiseSuppressorSupported);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_webrtc_audio_WebRtcAudioRecord_isAudioConfigVerified(nullptr);
static jboolean Java_WebRtcAudioRecord_isAudioConfigVerified(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_audio_WebRtcAudioRecord_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_audio_WebRtcAudioRecord_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "isAudioConfigVerified",
          "()Z",
          &g_org_webrtc_audio_WebRtcAudioRecord_isAudioConfigVerified);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID>
    g_org_webrtc_audio_WebRtcAudioRecord_isAudioSourceMatchingRecordingSession(nullptr);
static jboolean Java_WebRtcAudioRecord_isAudioSourceMatchingRecordingSession(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_audio_WebRtcAudioRecord_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_audio_WebRtcAudioRecord_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "isAudioSourceMatchingRecordingSession",
          "()Z",
          &g_org_webrtc_audio_WebRtcAudioRecord_isAudioSourceMatchingRecordingSession);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_webrtc_audio_WebRtcAudioRecord_enableBuiltInAEC(nullptr);
static jboolean Java_WebRtcAudioRecord_enableBuiltInAEC(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jboolean enable) {
  jclass clazz = org_webrtc_audio_WebRtcAudioRecord_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_audio_WebRtcAudioRecord_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "enableBuiltInAEC",
          "(Z)Z",
          &g_org_webrtc_audio_WebRtcAudioRecord_enableBuiltInAEC);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id, enable);
  return ret;
}

static std::atomic<jmethodID> g_org_webrtc_audio_WebRtcAudioRecord_enableBuiltInNS(nullptr);
static jboolean Java_WebRtcAudioRecord_enableBuiltInNS(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, jboolean enable) {
  jclass clazz = org_webrtc_audio_WebRtcAudioRecord_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_audio_WebRtcAudioRecord_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "enableBuiltInNS",
          "(Z)Z",
          &g_org_webrtc_audio_WebRtcAudioRecord_enableBuiltInNS);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id, enable);
  return ret;
}

static std::atomic<jmethodID> g_org_webrtc_audio_WebRtcAudioRecord_initRecording(nullptr);
static jint Java_WebRtcAudioRecord_initRecording(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, JniIntWrapper sampleRate,
    JniIntWrapper channels) {
  jclass clazz = org_webrtc_audio_WebRtcAudioRecord_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_audio_WebRtcAudioRecord_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "initRecording",
          "(II)I",
          &g_org_webrtc_audio_WebRtcAudioRecord_initRecording);

  jint ret =
      env->CallIntMethod(obj.obj(),
          call_context.base.method_id, as_jint(sampleRate), as_jint(channels));
  return ret;
}

static std::atomic<jmethodID> g_org_webrtc_audio_WebRtcAudioRecord_startRecording(nullptr);
static jboolean Java_WebRtcAudioRecord_startRecording(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_audio_WebRtcAudioRecord_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_audio_WebRtcAudioRecord_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "startRecording",
          "()Z",
          &g_org_webrtc_audio_WebRtcAudioRecord_startRecording);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

static std::atomic<jmethodID> g_org_webrtc_audio_WebRtcAudioRecord_stopRecording(nullptr);
static jboolean Java_WebRtcAudioRecord_stopRecording(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_audio_WebRtcAudioRecord_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_audio_WebRtcAudioRecord_clazz(env), false);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "stopRecording",
          "()Z",
          &g_org_webrtc_audio_WebRtcAudioRecord_stopRecording);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          call_context.base.method_id);
  return ret;
}

}  // namespace jni
}  // namespace  webrtc

#endif  // org_webrtc_audio_WebRtcAudioRecord_JNI

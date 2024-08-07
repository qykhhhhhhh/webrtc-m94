// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/webrtc/audio/WebRtcAudioManager

#ifndef org_webrtc_audio_WebRtcAudioManager_JNI
#define org_webrtc_audio_WebRtcAudioManager_JNI

#include <jni.h>

#include "../../../../../../../../sdk/android/src/jni/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_webrtc_audio_WebRtcAudioManager[];
const char kClassPath_org_webrtc_audio_WebRtcAudioManager[] = "org/webrtc/audio/WebRtcAudioManager";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_webrtc_audio_WebRtcAudioManager_clazz(nullptr);
#ifndef org_webrtc_audio_WebRtcAudioManager_clazz_defined
#define org_webrtc_audio_WebRtcAudioManager_clazz_defined
inline jclass org_webrtc_audio_WebRtcAudioManager_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_audio_WebRtcAudioManager,
      &g_org_webrtc_audio_WebRtcAudioManager_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace  webrtc {
namespace jni {


static std::atomic<jmethodID> g_org_webrtc_audio_WebRtcAudioManager_getAudioManager(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_WebRtcAudioManager_getAudioManager(JNIEnv*
    env, const base::android::JavaRef<jobject>& context) {
  jclass clazz = org_webrtc_audio_WebRtcAudioManager_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_webrtc_audio_WebRtcAudioManager_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getAudioManager",
          "(Landroid/content/Context;)Landroid/media/AudioManager;",
          &g_org_webrtc_audio_WebRtcAudioManager_getAudioManager);

  jobject ret =
      env->CallStaticObjectMethod(clazz,
          call_context.base.method_id, context.obj());
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID> g_org_webrtc_audio_WebRtcAudioManager_getOutputBufferSize(nullptr);
static jint Java_WebRtcAudioManager_getOutputBufferSize(JNIEnv* env, const
    base::android::JavaRef<jobject>& context,
    const base::android::JavaRef<jobject>& audioManager,
    JniIntWrapper sampleRate,
    JniIntWrapper numberOfOutputChannels) {
  jclass clazz = org_webrtc_audio_WebRtcAudioManager_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_webrtc_audio_WebRtcAudioManager_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getOutputBufferSize",
          "(Landroid/content/Context;Landroid/media/AudioManager;II)I",
          &g_org_webrtc_audio_WebRtcAudioManager_getOutputBufferSize);

  jint ret =
      env->CallStaticIntMethod(clazz,
          call_context.base.method_id, context.obj(), audioManager.obj(), as_jint(sampleRate),
              as_jint(numberOfOutputChannels));
  return ret;
}

static std::atomic<jmethodID> g_org_webrtc_audio_WebRtcAudioManager_getInputBufferSize(nullptr);
static jint Java_WebRtcAudioManager_getInputBufferSize(JNIEnv* env, const
    base::android::JavaRef<jobject>& context,
    const base::android::JavaRef<jobject>& audioManager,
    JniIntWrapper sampleRate,
    JniIntWrapper numberOfInputChannels) {
  jclass clazz = org_webrtc_audio_WebRtcAudioManager_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_webrtc_audio_WebRtcAudioManager_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getInputBufferSize",
          "(Landroid/content/Context;Landroid/media/AudioManager;II)I",
          &g_org_webrtc_audio_WebRtcAudioManager_getInputBufferSize);

  jint ret =
      env->CallStaticIntMethod(clazz,
          call_context.base.method_id, context.obj(), audioManager.obj(), as_jint(sampleRate),
              as_jint(numberOfInputChannels));
  return ret;
}

static std::atomic<jmethodID> g_org_webrtc_audio_WebRtcAudioManager_getSampleRate(nullptr);
static jint Java_WebRtcAudioManager_getSampleRate(JNIEnv* env, const
    base::android::JavaRef<jobject>& audioManager) {
  jclass clazz = org_webrtc_audio_WebRtcAudioManager_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_webrtc_audio_WebRtcAudioManager_clazz(env), 0);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_STATIC>(
          env,
          clazz,
          "getSampleRate",
          "(Landroid/media/AudioManager;)I",
          &g_org_webrtc_audio_WebRtcAudioManager_getSampleRate);

  jint ret =
      env->CallStaticIntMethod(clazz,
          call_context.base.method_id, audioManager.obj());
  return ret;
}

}  // namespace jni
}  // namespace  webrtc

#endif  // org_webrtc_audio_WebRtcAudioManager_JNI

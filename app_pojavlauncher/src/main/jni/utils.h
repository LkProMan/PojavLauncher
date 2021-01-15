#pragma once

#include <stdbool.h>

static JavaVM* runtimeJavaVMPtr;
static JNIEnv* runtimeJNIEnvPtr_ANDROID;
static JNIEnv* runtimeJNIEnvPtr_JRE;

static JavaVM* dalvikJavaVMPtr;
static JNIEnv* dalvikJNIEnvPtr_ANDROID;
static JNIEnv* dalvikJNIEnvPtr_JRE;

static long showingWindow;

static bool isInputReady, isCursorEntered, isPrepareGrabPos, isUseStackQueueCall;

staric int savedWidth, savedHeight;

jboolean attachThread(bool isAndroid, JNIEnv** secondJNIEnvPtr);
char** convert_to_char_array(JNIEnv *env, jobjectArray jstringArray);
jobjectArray convert_from_char_array(JNIEnv *env, char **charArray, int num_rows);
void free_char_array(JNIEnv *env, jobjectArray jstringArray, const char **charArray);

void closeGLFWWindow();


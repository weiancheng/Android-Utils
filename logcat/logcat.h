// test
#include <android/log.h>

#define LOGV(…) __android_log_print(ANDROID_LOG_VERBOSE, "Test", __VA_ARGS__)
#define LOGD(…) __android_log_print(ANDROID_LOG_DEBUG, "Test", __VA_ARGS__)
#define LOGI(…) __android_log_print(ANDROID_LOG_INFO, "Test", __VA_ARGS__)
#define LOGW(…) __android_log_print(ANDROID_LOG_WARN, "Test", __VA_ARGS__)
#define LOGE(…) __android_log_print(ANDROID_LOG_ERROR, "Test", __VA_ARGS__)

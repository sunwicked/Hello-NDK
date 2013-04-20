LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := DeadmangoNDK
LOCAL_SRC_FILES := DeadmangoNDK.cpp

include $(BUILD_SHARED_LIBRARY)

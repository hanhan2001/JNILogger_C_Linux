cmake_minimum_required(VERSION 3.28)
project(JNILogger_C_Linux)

set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_SHARED_LINKER_FLAGS "-static-libgcc -static-libstdc++ -Wl,-Bstatic -lstdc++ -lpthread -lmcfgthread")

add_library(JNILogger_C_Linux SHARED headers/jni.h headers/jni_md.h headers/me_xiaoying_logger_JNILogger.h headers/Message.h
        me_xiaoying_logger_JNILogger.cpp
        Message.cpp)
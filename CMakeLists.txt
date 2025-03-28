cmake_minimum_required(VERSION 3.30)
project(CommunityTools)

set(CMAKE_CXX_STANDARD 20)

add_executable(CommunityTools main.cpp
        user.cpp
        user.h
        interfaces.h
        moderator.cpp
        moderator.h
        admin.cpp
        admin.h
        message_manager.cpp
        message_manager.h
        topic_manager.cpp
        topic_manager.h)

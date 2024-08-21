cmake_minimum_required(VERSION 3.27)

add_executable(modul_26_task_2 main.cpp
        ${MY_INCLUDE_DIR}/phone.h
        ${MY_INCLUDE_DIR}/contact.h
        phone.cpp
        contact.cpp
)
target_include_directories(modul_26_task_2 PUBLIC ${MY_INCLUDE_DIR})
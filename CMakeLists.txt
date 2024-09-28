cmake_minimum_required(VERSION 3.10)
project(bot-core_sdk)

target_include_directories(bot-core_sdk INTERFACE
    ${CMAKE_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/libs/lua
)
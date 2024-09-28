cmake_minimum_required(VERSION 3.10)
project(bot-core_sdk)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/libs)

add_library(lua::lib ALIAS lua)

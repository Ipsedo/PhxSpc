cmake_minimum_required(VERSION 3.5)

project(PhxSpc CXX)

include_directories(${GLM_PATH})

file(GLOB_RECURSE SRC_FILE "./src/*.cpp")

add_executable(PhxSpc ${SRC_FILE})
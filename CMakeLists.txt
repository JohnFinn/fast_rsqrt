cmake_minimum_required(VERSION 3.16)

project(rsqrt)

add_library(rsqrt rsqrt.cpp)

find_package(GTest REQUIRED)
add_executable(test_rsqrt test_rsqrt.cpp)
target_link_libraries(test_rsqrt rsqrt gtest gtest_main)

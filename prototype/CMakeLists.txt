cmake_minimum_required(VERSION 3.16)

project(patrones-de-disenio)

set(CMAKE_CXX_STANDARD 14)

file(GLOB SOURCES "src/*")

add_executable(patrones-de-disenio ${SOURCES})
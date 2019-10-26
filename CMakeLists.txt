cmake_minimum_required(VERSION 3.14)
project(UtPod)

set(CMAKE_CXX_STANDARD 11)

add_executable(UtPod UtPodDriver.cpp UtPod.cpp Song.cpp SongDriver.cpp)
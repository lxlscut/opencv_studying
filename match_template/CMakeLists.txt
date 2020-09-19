cmake_minimum_required(VERSION 3.15)
project(match_template)

set(CMAKE_CXX_STANDARD 14)


# Where to find CMake modules and OpenCV

set(OpenCV_DIR "D:\\opencv\\opencv\\mingw64\\install")

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(match_template main.cpp)

# add libs you need

set(OpenCV_LIBS opencv_core opencv_imgproc opencv_highgui opencv_imgcodecs)

# linking

target_link_libraries(match_template ${OpenCV_LIBS})

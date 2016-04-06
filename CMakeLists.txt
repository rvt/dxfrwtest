cmake_minimum_required(VERSION 3.4)
project(dxftest)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp ExampleWriter.cpp ExampleWriter.h)
add_executable(dxftest ${SOURCE_FILES})


set(DWG_LIBRARY )
FIND_LIBRARY(DXF_LIBRARY NAMES dxfrw PATHS /usr/local/lib)
INCLUDE_DIRECTORIES(/usr/local/include/libdxfrw0)

#rvt target_link_libraries(lcdxfdwg lckernel ${DXF_LIBRARY} ${DWG_LIBRARY})
target_link_libraries(dxftest ${DXF_LIBRARY})
cmake_minimum_required(VERSION 3.8)

project(relar)

set(CMAKE_VERSION_MAKEFILE ON)
set(CMAKE_CXX_FLAGS "$ENV{CXXFLAGS} -rdynamic -O0 -ggdb -std=c++11 -Wall -Wno-deprecated -Werror -Wno-unused-function")



set(LIB_SRC
    relar/log.cpp
    relar/util.cpp
    relar/config.cpp
)

add_library(relar SHARED ${LIB_SRC})
# addlibrary(sylar_static STATIC ${LIB_SRC})
#SET_TARGET_PROPERTIES (relar_static PROPERTIES OUTPUT_NAME "relar")

find_library(PTHREAD pthread)

add_executable(test tests/test.cpp)
add_dependencies(test relar)
target_link_libraries(test relar)

add_executable(test_config tests/test_config.cpp)
add_dependencies(test_config relar)
target_link_libraries(test_config relar)

# 设置可执行文件的输出目录
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
# 设置库文件的输出目录
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

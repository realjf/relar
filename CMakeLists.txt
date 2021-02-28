cmake_minimum_required(VERSION 3.8)

project(relar)

set(CMAKE_VERSION_MAKEFILE ON)
set(CMAKE_CXX_FLAGS "$ENV{CXXFLAGS} -rdynamic -O3 -g -std=c++11 -Wall -Wno-deprecated -Werror -Wno-unused-function")

set(LIB_SRC
    src/log.cpp
)

add_library(relar SHARED ${LIB_SRC})
# addlibrary(sylar_static STATIC ${LIB_SRC})
#SET_TARGET_PROPERTIES (relar_static PROPERTIES OUTPUT_NAME "relar")

add_executable(test tests/test.cpp)
add_dependencies(test relar)
target_link_libraries(test relar)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

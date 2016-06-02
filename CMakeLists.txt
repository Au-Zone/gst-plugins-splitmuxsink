cmake_minimum_required(VERSION 2.8)

project(gstsplitmuxsink C)

find_package(PkgConfig)

pkg_check_modules(LIBGST gstreamer-1.0)

link_directories(${LIBGST_LIBRARY_DIRS})
include_directories(${LIBGST_INCLUDE_DIRS})

add_library(gstsplitmuxsink SHARED plugin.c gstsplitmuxsink.c gstsplitmuxsink.h)
target_link_libraries(gstsplitmuxsink ${LIBGST_LIBRARIES})

install(TARGETS gstsplitmuxsink LIBRARY DESTINATION lib/gstreamer-1.0)


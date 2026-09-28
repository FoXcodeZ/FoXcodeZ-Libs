cmake_minimum_required(VERSION 3.28)

project(
        FoXcodeZ-Libs
        VERSION 0.1.0
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(FXZ_Core STATIC
        src/core/Core.cpp)

add_library(fxz::core ALIAS FXZ_Core)

target_sources(FXZ_Core
        PUBLIC
        FILE_SET HEADERS
        BASE_DIRS
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        FILES
        include/fxz/core/BasicTypes.hpp
        include/fxz/Core.hpp
)

target_include_directories(FXZ_Core
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

#install(
#        TARGETS FXZ_Core
#        EXPORT FXZTargets
#        FILE_SET HEADERS
#        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
#        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
#        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
#        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
#)

add_executable(FXZ_Sandbox game.cpp)
target_link_libraries(FXZ_Sandbox fxz::core)
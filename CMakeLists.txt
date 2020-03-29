
cmake_minimum_required(VERSION 2.8.4)

project(KeyCastOW)

set(app_exe keycastow)

# header
file(GLOB headers *.h)
file(GLOB sources *.cpp)

# resource
file(GLOB resources keycastow.rc)

# for IDE
# source_group("Header files" FILES ${headers})
source_group("Source files" FILES ${headers} ${sources})
source_group("Resource files" FILES ${resources})

# unicode
add_definitions(-D_UNICODE -DUNICODE)

# debug
# add_definitions(-DNDEBUG)
# add_definitions(-g)

# platform
if (MINGW)
    add_definitions(-D_WIN32 -D__MSVCRT_VERSION__=0x1000)
    add_compile_options(-O2 -Wall)
    # elseif (UNIX)
    #     add_definitions(-D_LINUX)
    #     add_compile_options(-O2 -Wall)
elseif (WIN32)
    add_definitions(-D_WIN32)
endif()

add_executable(${app_exe} WIN32 ${sources} ${headers} ${resources})
target_link_libraries(${app_exe} gdiplus dbghelp comctl32 msvcr100)

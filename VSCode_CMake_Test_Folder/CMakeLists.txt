cmake_minimum_required(VERSION 3.1.0)
project(HelloWorldPet CXX)

# コンパイルオプション
set(CMAKE_CXX_FLAGS "-O1 -Wall")             # 最適化・警告の設定
set(CMAKE_CXX_STANDARD 11)                   # c++11/14/17/20
set(CMAKE_CXX_FLAGS_RELEASE "-O3")           # Releaseモード
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g")          # Debugモード
set(CMAKE_CXX_FLAGS_MINSIZEREL "-Os")        # MinSizeReleaseモード
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "-O2 -g") # ReleaseWithDebugInfoモード

option(CMAKE_CXX_FLAGS_VERBOSE "make VERBOSE=1" OFF)
if (CMAKE_CXX_FLAGS_VERBOSE)
    set(CMAKE_VERBOSE_MAKEFILE ON)               # ビルドのプロファイル設定
endif()

include(CTest)
enable_testing()

# ライブラリ
#add_subdirectory(src)
add_library(Pet src/Pet.cpp)
target_include_directories(Pet PUBLIC include)

# 実行ファイル
add_executable(main.out main.cpp)
target_link_libraries(main.out Pet)

# コンパイルオプション
#target_compile_options(main.out PUBLIC -O2 -Wall)                    # 最適化・警告の設定
#target_compile_features(main.out PUBLIC cxx_std__11)                 # c++11/14/17
#target_compile_definitions(main.out PUBLIC NDEBUG _USE_MATH_DEFINES) # プリプロセッサ

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

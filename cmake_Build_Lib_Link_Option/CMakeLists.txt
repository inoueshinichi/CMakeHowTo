cmake_minimum_required(VERSION 3.0.0)

project(test_cmake_build_static_lib_link CXX)

# 静的or動的 ライブラリの指定オプション
option(GREETINGPET_BUILD_SHARED_LIBS "build libGreetingPet as a shared library" OFF)

# Pet.cppとgood_morning.cppからlibGreetingPet.a(静的ライブラリ or 動的ライブラリ)を作成
if (GREETINGPET_BUILD_SHARED_LIBS)
	add_library(GreetingPet SHARED Pet.cpp good_morning.cpp)
else()
	add_library(GreetingPet STATIC Pet.cpp good_morning.cpp)
endif()

# a.outという実行ファイルをmain.cppから作成
add_executable(a.out main.cpp)

# a.outを作成する際libGreetingPetをリンクする
target_link_libraries(a.out GreetingPet)
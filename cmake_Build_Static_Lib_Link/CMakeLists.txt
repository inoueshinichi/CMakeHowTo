cmake_minimum_required(VERSION 3.0.0)

project(test_cmake_build_static_lib_link CXX)

# Pet.cppとgood_morning.cppからlibGreetingPet.a(静的ライブラリ)を作成
add_library(GreetingPet STATIC Pet.cpp good_morning.cpp)

# a.outという実行ファイルをmain.cppから作成
add_executable(a.out main.cpp)

# a.outを作成する際libGreetingPet.aをリンクする
target_link_libraries(a.out GreetingPet)
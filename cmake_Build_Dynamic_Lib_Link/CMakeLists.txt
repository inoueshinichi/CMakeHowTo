cmake_minimum_required(VERSION 3.0.0)

project(test_cmake_build_shared_lib_link CXX)

# good_morning.cppとPet.cppをコンパイルしてlibGreetingPet.dylibを作成
add_library(GreetingPet SHARED good_morning.cpp Pet.cpp)

add_executable(a.out main.cpp)

# a.outの実行時にlibGreetingPet.soを呼び出すようにリンク
target_link_libraries(a.out GreetingPet)
cmake_minimum_required(VERSION 3.0.0)

project(test_cmake_build_subdir_link CXX)

# サブディレクトリを登録
add_subdirectory(src)
add_subdirectory(test)
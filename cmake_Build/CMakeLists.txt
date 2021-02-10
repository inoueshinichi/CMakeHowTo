# CMakeのバージョン
cmake_minimum_required(VERSION 3.0.0)

# プロジェクト名と使用する言語を設定
project(test_cmake_build CXX)

# a.outという実行ファイルをmain.cpp, Pet.cppから生成
add_executable(a.out main.cpp Pet.cpp)
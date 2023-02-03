# How to CMake
CMakeTutorial</br>
参考: https://qiita.com/shohirose/items/45fb49c6b429e8b204ac </br>

Wikiに各種設定に関するページを作成して記載する.</br>

[用語]</br>
静的ライブラリ : lib[basename].a (Unix, macOS), *.lib (Windows) </br>
動的ライブラリ : lib[basename].so (Unix), lib[basename].dylib (macOS), *.dll (Windows) </br>

[gcc build order]</br>
1. g++_Build : g++によるビルド方法</br>
2. g++_Build_Static_Lib_Link : g++による静的ライブラリの作成とソースファイルへのリンク方法</br>
3. g++_Build_Dynamic_Lib_Link : g++による動的ライブラリの作成とソースファイルへのリンク方法</br>
4. g++_Build_lib_link_real_project : 階層構造になったディレクトリにおけるビルド方法</br>

[CMake build order]</br>
1. CMake_Build : g++_Buildと対</br>
2. CMake_Build_Static_Lib_Link : g++_Build_Static_Lib_Linkと対</br>
3. CMake_Build_Dynamic_Lib_Link : g++_Build_Dynamic_Lib_Linkと対</br>
4. CMake_Build_lib_link_real_project : g++_Build_lib_link_real_projectと対</br>


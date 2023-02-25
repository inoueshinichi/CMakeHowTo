# How to CMake
## 参考(公式)
| 概要 | URL |
| :-- | :-- |
| DocTop | https://cmake.org/cmake/help/latest/ |
| BuildSystem | https://cmake.org/cmake/help/latest/manual/cmake-buildsystem.7.html |
| GenExp | https://cmake.org/cmake/help/latest/manual/cmake-generator-expressions.7.html |
| ToolChain | https://cmake.org/cmake/help/latest/manual/cmake-toolchains.7.html | 
| ExecuteProcess | https://cmake.org/cmake/help/latest/command/execute_process.html |
| Properties | https://cmake.org/cmake/help/v3.0/manual/cmake-properties.7.html |




## 参考(Qiita)
| 概要 | URL |
| :-- | :-- |
| 基本(1) | https://qiita.com/shohirose/items/45fb49c6b429e8b204ac |
| 基本(2) | https://qiita.com/shohirose/items/637f4b712893764a7ec1 |
| 基本(3) | https://qiita.com/shohirose/items/d2b9c595a37b27ece607 |
| キャッシュ変数と環境変数 | https://qiita.com/mrk_21/items/186439952a6665184444 |
| function(), macro() | https://qiita.com/mrk_21/items/9de14590d6c3a2473284 |
| 変数のスコープ | https://qiita.com/mrk_21/items/e0639155cf7156a6d8b4 |
| リスト | https://qiita.com/mrk_21/items/082bae48a5ef2ac1564c |
| ループ | https://qiita.com/mrk_21/items/f45736dcf418bd937efe |
| 条件分岐 | https://qiita.com/mrk_21/items/49d8802dc63a2791bcc3 |
| 便利なコマンド | https://qiita.com/mrk_21/items/5e7ca775b463a4141a58 |
| 正規表現 | https://qiita.com/mrk_21/items/4bb58f64a82e73c42cb3 |
| カスタムターゲット | https://qiita.com/mrk_21/items/6d7c70edb6a64fa1a28b |
| GeneratorExpressions | https://qiita.com/mrk_21/items/57075ce36f49ce0aacf4 |
| スクリプトモード | https://qiita.com/mrk_21/items/baec22b35c8b11ebff4d |
| ポリシー | https://qiita.com/mrk_21/items/7c406e28d4730d1364cd |
| モジュール | https://qiita.com/mrk_21/items/ab32a83a12f5d37acc64 |
| ポリシー | https://qiita.com/mrk_21/items/7c406e28d4730d1364cd | 
| CTest | https://qiita.com/mrk_21/items/25ee7f00cebb9934b472 |
| AppleSilicon版macOSで開発する際の注意点 | https://qiita.com/mktshhr/items/c8048b328af6be90f68e |


Wikiに各種設定に関するページを作成して記載する.  

[gcc build order]  
1. g++_Build : g++によるビルド方法
2. g++_Build_Static_Lib_Link : g++による静的ライブラリの作成とソースファイルへのリンク方法
3. g++_Build_Dynamic_Lib_Link : g++による動的ライブラリの作成とソースファイルへのリンク方法
4. g++_Build_lib_link_real_project : 階層構造になったディレクトリにおけるビルド方法

[CMake build order]  
1. CMake_Build : g++_Build
2. CMake_Build_Static_Lib_Link : g++_Build_Static_Lib_Link
3. CMake_Build_Dynamic_Lib_Link : g++_Build_Dynamic_Lib_Link
4. CMake_Build_lib_link_real_project : g++_Build_lib_link_real_project


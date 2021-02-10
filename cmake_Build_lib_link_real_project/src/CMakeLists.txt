# ライブラリを作成(今回は動的)
add_library(GreetingPet SHARED good_morning.cpp Pet.cpp)

# GreetingPetライブラリに必要なインクルードを教えて上げる
# PROJECT_SOURCE_DIRはこのプロジェクトのルートディレクトリの絶対パス
target_include_directories(GreetingPet PUBLIC ${PROJECT_SOUCE_DIR}/include)
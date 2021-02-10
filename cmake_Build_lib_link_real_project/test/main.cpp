#include <iostream>
#include "../include/Pet.h"
#include <memory>
#include "../include/good_morning.h"

int main(int, char**) 
{
    // CMake用テストプログラム
    std::cout << "Hello, world!\n";
    std::string n ="cat";
    std::unique_ptr<Pet> pet(new Pet(n));
    pet->eat();
    
    // 静的ライブラリ
    good_morning();
    
}

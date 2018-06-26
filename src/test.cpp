#include <test.h>
#include <iostream>

void Test::clearScreen() const
{
    std::cout << std::endl;
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

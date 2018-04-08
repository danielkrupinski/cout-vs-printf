#include "../include/integer.h"
#include <iostream>
#include <chrono>

Integer::Integer(int a)
    : amount{a}
{
    Test();
    Print();
}

void Integer::TestCout()
{
    for (int i=0; i!=amount; ++i) {
        auto start = std::chrono::high_resolution_clock::now();
        for (int j=0; j!=1000000; ++j)
            std::cout << j;
        auto end = std::chrono::high_resolution_clock::now();
        results_cout.push_back(std::chrono::duration_cast<milliseconds>(end-start).count());
    }
}

void Integer::Print()
{
    #ifdef _WIN32
        system("cls");
    #elif defined __linux__
        system("clear");
    #endif

    for (int i=0; i!=amount; ++i)
        std::cout << i+1 << "ms" << std::endl;
}

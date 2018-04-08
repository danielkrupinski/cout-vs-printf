#include "../include/integer.h"
#include <iostream>
#include <chrono>

Integer::Integer(int a)
    : amount{a}
{
    Test();
    Print();
}

void Integer::Test()
{
    for (int i=0; i!=amount; ++i) {
        auto start = std::chrono::high_resolution_clock::now();
        for (int j=0; j!=1000000; ++j)
            std::cout << j;
        auto end = std::chrono::high_resolution_clock::now();
        results.push_back(std::chrono::duration_cast<milliseconds>(end-start).count());
    }
}

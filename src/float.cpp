#include "../include/float.h"
#include <iostream>
#include <chrono>

Float::Float(int a)
    : amount{a}
{
    testCout();
    testPrintf();
    print();
}

void Float::testCout()
{
    clearScreen();
    for (int i=0; i!=amount; ++i) {
        auto start = std::chrono::high_resolution_clock::now();
        for (int j=0; j!=1000000; ++j)
            std::cout << j+0.12345;
        auto end = std::chrono::high_resolution_clock::now();
        resultsCout.push_back(std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count());
    }
}

void Float::testPrintf()
{
    clearScreen();
    for (int i=0; i!=amount; ++i) {
        auto start = std::chrono::high_resolution_clock::now();
        for (int j=0; j!=1000000; ++j)
            printf("%.5f",j+0.12345);
        auto end = std::chrono::high_resolution_clock::now();
        resultsPrintf.push_back(std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count());
    }
}

void Float::print()
{
    clearScreen();
    for (int i=0; i!=amount; ++i)
        std::cout << i+1 << ". cout: " << resultsCout[i] << " ms printf: " << resultsPrintf[i] << " ms\n";

    int avgCout {0};
    int avgPrintf {0};

    for (auto& a : resultsCout)
        avgCout+=a;
    for (auto& b : resultsPrintf)
        avgPrintf+=b;

    std::cout << "Average: cout: " << avgCout/amount << " ms printf: " << avgPrintf/amount << " ms";
}

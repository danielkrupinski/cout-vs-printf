#include "../include/string.h"
#include <iostream>
#include <chrono>

String::String(int a)
    : amount{a}
{
    testCout();
    testPrintf();
    print();
}

void String::testCout()
{
    clearScreen();
    for (int i=0; i!=amount; ++i) {
        auto start = std::chrono::high_resolution_clock::now();
        for (int j=0; j!=1000000; ++j)
            std::cout << "abcdef";
        auto end = std::chrono::high_resolution_clock::now();
        resultsCout.push_back(std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count());
    }
}

void String::testPrintf()
{
    clearScreen();
    for (int i=0; i!=amount; ++i) {
        auto start = std::chrono::high_resolution_clock::now();
        for (int j=0; j!=1000000; ++j)
            printf("%s","abcdef");
        auto end = std::chrono::high_resolution_clock::now();
        resultsPrintf.push_back(std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count());
    }
}

void String::print()
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

void String::clearScreen()
{
    std::cout << std::endl;
    #ifdef _WIN32
        system("cls");
    #elif defined __linux__
        system("clear");
    #endif
}

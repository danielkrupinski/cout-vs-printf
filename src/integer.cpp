#include "../include/integer.h"
#include <iostream>
#include <chrono>
#include <thread>

Integer::Integer(int a)
    : amount{a}
{
    TestCout();
    TestPrintf();
    Print();
}

void Integer::TestCout()
{
    for (int i=0; i!=amount; ++i) {
        auto start = std::chrono::high_resolution_clock::now();
        for (int j=0; j!=1000000; ++j)
            std::cout << j;
        auto end = std::chrono::high_resolution_clock::now();
        results_cout.push_back(std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count());
    }
    using namespace std::chrono_literals;
    std::this_thread::sleep_for(500ms);
}

void Integer::TestPrintf()
{
    for (int i=0; i!=amount; ++i) {
        auto start = std::chrono::high_resolution_clock::now();
        for (int j=0; j!=1000000; ++j)
            printf("%d",j);
        auto end = std::chrono::high_resolution_clock::now();
        results_printf.push_back(std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count());
    }
    using namespace std::chrono_literals;
    std::this_thread::sleep_for(500ms);
}

void Integer::Print()
{
    for (int i=0; i!=amount; ++i)
        std::cout << i+1 << ". cout: " << results_cout[i] << " ms printf: " << results_printf[i] << " ms\n";

    int avg_cout {0};
    int avg_printf {0};

    for (auto& a : results_cout)
        avg_cout+=a;
    for (auto& b : results_printf)
        avg_printf+=b;

    std::cout << "Average: cout: " << avg_cout/amount << " ms printf: " << avg_printf/amount << " ms";
}

void Integer::ClearScreen()
{
    std::cout << std::endl;
    #ifdef _WIN32
        system("cls");
    #elif defined __linux__
        system("clear");
    #endif
}

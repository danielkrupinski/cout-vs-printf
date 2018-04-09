#include <iostream>
#include "../include/integer.h"

int main()
{
    std::cout << "Enter amount of test: ";
    int tests {0};
    std::cin >> tests;
    Integer test {tests};
    std::cin.ignore();
    getchar();
    return 0;
}

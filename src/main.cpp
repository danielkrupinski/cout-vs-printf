#include <iostream>
#include "../include/integer.h"
#include "../include/string.h"

int main()
{
    std::cout << "Enter amount of test: ";
    int tests {0};
    std::cin >> tests;
    std::cout << "Select mode:\n"
                 "1. Integer\n"
                 "2. String\n";
    int mode {0};
    std::cin >> mode;

    switch (mode) {
    case 1: {
        Integer test {tests};
        break;
    }
    case 2: {
        String test {tests};
        break;
    }
    }
    //Integer test {tests};
    std::cin.ignore();
    getchar();
    return 0;
}

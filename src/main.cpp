#include <iostream>
#include "../include/integer.h"

using namespace std;

int main()
{
    cout << "Enter amount of test: ";
    int tests {0};
    cin >> tests;
    Integer test {tests};
    cin.ignore();
    getchar();
    return 0;
}

#ifndef STRING_H
#define STRING_H

#include <vector>

class String {
public:
    explicit String(int a);
    void testCout();
    void testPrintf();
    void print();
    void clearScreen();
private:
    int amount {0};
    std::vector<int> resultsCout;
    std::vector<int> resultsPrintf;
};

#endif // STRING_H

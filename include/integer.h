#ifndef INTEGER_H
#define INTEGER_H

#include <vector>

class Integer {
public:
    explicit Integer(int a);
    void testCout();
    void testPrintf();
    void print();
    void clearScreen();
private:
    int amount {0};
    std::vector<int> resultsCout;
    std::vector<int> resultsPrintf;
};

#endif // INTEGER_H

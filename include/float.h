#ifndef FLOAT_H
#define FLOAT_H

#include <vector>
#include "test.h"

class Float : public Test {
public:
    explicit Integer(int a);
    void testCout();
    void testPrintf();
    void print();
    //void clearScreen();
private:
    int amount {0};
    std::vector<int> resultsCout;
    std::vector<int> resultsPrintf;
};

#endif // FLOAT_H

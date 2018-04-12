#ifndef INTEGER_H
#define INTEGER_H

#include <vector>
#include "test.h"

class Integer : public Test {
public:
    explicit Integer(int);
    void testCout();
    void testPrintf();
    void print();
private:
    int amount {0};
    std::vector<int> resultsCout;
    std::vector<int> resultsPrintf;
};

#endif // INTEGER_H

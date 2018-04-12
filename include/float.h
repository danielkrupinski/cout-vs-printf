#ifndef FLOAT_H
#define FLOAT_H

#include <vector>
#include "test.h"

class Float : public Test {
public:
    explicit Float(int);
    void testCout();
    void testPrintf();
    void print();
private:
    int amount {0};
    std::vector<int> resultsCout;
    std::vector<int> resultsPrintf;
};

#endif // FLOAT_H

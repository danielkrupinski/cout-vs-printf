#ifndef STRING_H
#define STRING_H

#include <vector>
#include "test.h"

class String : public Test {
public:
    explicit String(int a);
    void testCout();
    void testPrintf();
    void print();
    void clearScreen() const;
private:
    int amount {0};
    std::vector<int> resultsCout;
    std::vector<int> resultsPrintf;
};

#endif // STRING_H

#ifndef INTEGER_H
#define INTEGER_H

#include <vector>
#include <test.h>

class Integer : public Test {
public:
    explicit Integer(int);
    void testCout();
    void testPrintf();
    void print();
};

#endif // INTEGER_H

#ifndef FLOAT_H
#define FLOAT_H

#include <vector>
#include <test.h>

class Float : public Test {
public:
    explicit Float(int);
    void testCout();
    void testPrintf();
    void print();
};

#endif // FLOAT_H

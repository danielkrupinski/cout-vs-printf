#ifndef STRING_H
#define STRING_H

#include <vector>
#include <test.h>

class String : public Test {
public:
    explicit String(int);
    void testCout();
    void testPrintf();
    void print();
};

#endif // STRING_H

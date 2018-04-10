#ifndef TEST_H
#define TEST_H

class Test {
public:
    virtual void testCout() = 0;
    virtual void testPrintf() = 0;
    virtual void print() = 0;
    virtual void clearScreen() = 0;
    virtual ~Test() {};
};

#endif // TEST_H

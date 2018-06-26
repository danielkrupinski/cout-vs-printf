#ifndef TEST_H
#define TEST_H

class Test {
public:
    explicit Test(int a) : amount{a} {};
    virtual ~Test() {};
    virtual void testCout() = 0;
    virtual void testPrintf() = 0;
    virtual void print() = 0;
    void clearScreen();
protected:
    int amount;
    std::vector<int> resultsCout;
    std::vector<int> resultsPrintf;
};

#endif // TEST_H

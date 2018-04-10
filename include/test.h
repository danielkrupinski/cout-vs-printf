#ifndef TEST_H
#define TEST_H

class Test {
public:
    virtual Test();
    virtual void testCout();
    virtual void testPrintf();
    virtual void print();
    virtual void clearScreen();
    virtual ~Test();
private:
    int amount {0};
    std::vector<int> resultsCout;
    std::vector<int> resultsPrintf;
};

#endif // TEST_H

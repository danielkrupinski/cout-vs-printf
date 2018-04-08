#ifndef INTEGER_H
#define INTEGER_H

#include <vector>

class Integer {
public:
    explicit Integer(int a);
    void TestCout();
    void TestPrintf();
    void Print();
    void ClearScreen();
private:
    int amount {0};
    std::vector<int> results_cout;
    std::vector<int> results_printf;
};

#endif // INTEGER_H

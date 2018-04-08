#ifndef INTEGER_H
#define INTEGER_H

#include <vector>

class Integer {
public:
    Integer(int a) {}
    void TestCout();
    void Print();
private:
    int amount {0};
    std::vector<int> results_cout;
};

#endif // INTEGER_H

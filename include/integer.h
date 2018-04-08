#ifndef INTEGER_H
#define INTEGER_H

class Integer {
public:
    Integer(int a) : amount{a} {}
private:
    int amount {0};
    std::vector<int> results;
};

#endif // INTEGER_H

#include "../include/integer.h"

Integer::Integer(int a)
    : amount{a}
{
    Test();
    Print();
}

Integer::Test()
{
    for (int i=0; i!=amount; ++i)
        for (int i=0; i!=1000000; ++i);

}

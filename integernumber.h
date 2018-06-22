#ifndef INTEGERNUMBER_H
#define INTEGERNUMBER_H

#include"realnumber.h"

class IntegerNumber:public RealNumber
{
public:
    IntegerNumber(int);
    ~IntegerNumber();
    void print();
    IntegerNumber add(const IntegerNumber &other);
    IntegerNumber mul(const IntegerNumber &other);
private:
    int n;
};

#endif

#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H
#include"number.h"
#include<string>
using namespace std;

class ComplexNumber:public Number
{
public:
    ComplexNumber(string);
    ~ComplexNumber();
    void print();
    ComplexNumber add(const ComplexNumber &other);
    ComplexNumber mul(const ComplexNumber &other);
private:
    double a;
    double b;
    bool sign;
};

#endif

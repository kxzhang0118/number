#include"realnumber.h"
#include<iostream>
using namespace std;

RealNumber::RealNumber(double x)
{
    n=x;
}

RealNumber::~RealNumber(){}

void RealNumber::print()
{
    cout<<"The value of the realnumber is: "<<n<<endl;
}

RealNumber RealNumber::add(const RealNumber &other)
{
    RealNumber x(n+other.n);
    return x;
} 

RealNumber RealNumber::mul(const RealNumber &other)
{
    RealNumber x(n*other.n);
    return x;
}

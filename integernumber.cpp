#include"integernumber.h"
#include<iostream>
using namespace std;

IntegerNumber::IntegerNumber(int x)
{
    n=x;
}

IntegerNumber::~IntegerNumber(){}

void IntegerNumber::print()
{
    cout<<"The value of the integernumber is: "<<n<<endl;
}

IntegerNumber IntegerNumber::add(const IntegerNumber &other)
{
    IntegerNumber x(n+other.n);
    return x;
}

IntegerNumber IntegerNumber::mul(const IntegerNumber &other)
{
    IntegerNumber x(n*other.n);
    return x;
}



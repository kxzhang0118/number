#include"number.h"
#include"realnumber.h"
#include"integernumber.h"
#include"complexnumber.h"
#include<iostream>
using namespace std;

int main()
{
    cout<<"Test for realnumber:"<<endl;
    RealNumber a(1.4),b(3.5),c(0);
    a.print();
    b.print();
    Number *p=&c;
    c=a.add(b);
    p->print();
    c=b.mul(a);
    p->print();

    cout<<"Test for integernumber:"<<endl;
    IntegerNumber d(5),e(6),f(0);
    d.print();
    e.print();
    p=&f;
    f=d.add(e);
    p->print();
    f=e.mul(d);
    p->print();

    cout<<"Test for complexnumber:"<<endl;
    ComplexNumber g("4.2+i"),h("3.5+2.1i"),j("0");
    g.print();
    h.print();
    p=&j;
    j=g.add(h);
    p->print();
    j=g.mul(h);
    p->print();
    
    return 0;
}

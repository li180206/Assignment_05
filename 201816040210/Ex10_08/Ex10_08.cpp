//Ex10_18:Ex10_18.cpp
#include<iostream>
#include "Complex.h"
using namespace std;
int main()
{
    Complex a( 3, 3 );//a is Complex(3,3)
    Complex b;//b is a Complex
    cout<<a<<"\n"<<b<<endl;//print a and b
    cin>>b;//input b
    cout<<b<<endl;//print new b
    cout<<"\n"<<a+b<<"   "<<a-b<<"   "<<a*b;//print a+b,a-b and a*b
}

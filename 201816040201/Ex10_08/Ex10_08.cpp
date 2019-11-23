// Lab 4: ComplexTest.cpp
#include <iostream>
using namespace std;

#include "Complex.h"

int main()
{
   Complex a(1,7 ), b( 9, 2 ),c; // create three Complex objects
   c=a+b;
   Complex d;
   cout<<"a is:"<<a<<"b is:"<<b;
   cout<<"c=a+b is:"<<c;
  d=a-b;
  cout<<"d=a-b is:"<<d;
   Complex e=c*d;
  cout<<"c*d is:"<<e;


} // end main



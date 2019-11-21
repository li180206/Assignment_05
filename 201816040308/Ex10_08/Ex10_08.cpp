#include<bits/stdc++.h>
using namespace std;

#include "Complex.h"

int main()
{
   cout<<"Please input x,y as the a"<<endl;
   Complex a;
   cin>>a;
   cout<<"Please input x,y as the size of Array b"<<endl;
   Complex b;
   cin>>b;
   if(a!=b)
        cout<<"a and b are not equal"<<endl;
   else
        cout<<"a and b are equal"<<endl;
   Complex c;
   c=a+b;
   cout<<"a + b = "<<c<<endl;
   c=a-b;
   cout<<"a - b = "<<c<<endl;
   c=a*b;
   cout<<"a * b = "<<c<<endl;
}


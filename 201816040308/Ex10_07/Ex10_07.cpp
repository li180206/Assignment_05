#include<bits/stdc++.h>
using namespace std;

#include "DoubleSubscriptedArray.h"

int main()
{
   int x,y;
   cout<<"Please input x,y as the size of Array a"<<endl;
   cin>>x>>y;
   DoubleSubscriptedArray a(x,y);
   cout<<"Please input "<<x*y<<" integers"<<endl;
   cin>>a;
   cout<<"Please input x,y as the size of Array b"<<endl;
   cin>>x>>y;
   DoubleSubscriptedArray b(x,y);
   cout<<"Please input "<<x*y<<" integers"<<endl;
   cin>>b;
   if(a!=b){
        cout<<"a and b are not equal"<<endl;
   }
   else
        cout<<"a and b are equal"<<endl;
   cout<<"Assigning b to a"<<endl;
   a=b;
   cout<<"a[0][0] is "<<a(0,0)<<endl;
   cout<<"Assigning 100 to a[0][0]"<<endl;
   a(0,0)=100;
   cout<<"a is:"<<endl<<a;
   cout<<"b is:"<<endl<<b;
}


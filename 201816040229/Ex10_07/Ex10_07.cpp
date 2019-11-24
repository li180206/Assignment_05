#include<iostream>

#include"DoubleSubscriptedArray.h"

#include <stdexcept>

using namespace std;
int main()
{
    DoubleSubscriptedArray integers1(7);// seven-element DoubleSubscriptedArray
    DoubleSubscriptedArray integers2; // 10-element DoubleSubscriptedArray by default
    // input and print integers1 and integers2
    cout <<"Enter 17 integers:" << endl;
    cin >> integers1 >> integers2;

    cout <<"integers1:\n" << integers1
    <<"integers2:\n" << integers2;
    if (integers1 != integers2 )
     cout <<"integers1 and integers2 are not equal"<< endl;
     int x,y,z;
     cout<<"please enter the subscript x and y"<<endl;
     cin>>x>>y;
     cout<<"\n";
     z=(x-1)*4+y-1;
     if(z<10)
     {
         cout<<"integers2"<<"("<<x<<","<<y<<")"<<"="<<integers2[z];
     }
     else
     {
         cout<<"out of range\n";
     }
} // end main



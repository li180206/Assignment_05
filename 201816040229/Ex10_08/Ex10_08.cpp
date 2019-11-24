// 10_08.cpp
//Complex class test program.
#include<iostream>
#include"Complex.h"
using namespace std;
int main()
{
    Complex x(0.0,0.0);
    Complex y( 4.3,8.2 );
    Complex z( 3.3,1.1 );
    cout <<"x:";
    cout<<x;
    cout <<"\ny: "<< y;
    cout <<"\nz:"<<z;

    x=y+z;
    cout << "\n\nx = y + z:"<< endl;
    cout<<x;
    cout <<"=";
    cout<<y;
    cout << "+";
    cout<<z;

    x=y - z;
    cout << "\n\nx = y - z:" << endl;
    cout<<x;
    cout <<"=";
    cout<<y;
    cout <<"-";
    cout<<z;
    cout << endl;

    x=y*z;
    cout<<"\n\nx = y * z:"<<endl;
    cout<<x;
    cout<<"=";
    cout<<y;
    cout<<"*";
    cout<<z<<endl;

    cout <<"\n"<< ( ( y == z ) ? "  y == z" : " y != z" );

} // end main

//10.8:test.cpp
#include<iostream>
#include"Complex.h"
using namespace std;
int main()
{
    Complex x;
    Complex y( 4.3 , 8.2 );
    Complex z( 3.3 , 1.1 );
    cout<<"x: "<<x;

    cout<<"\ny: "<<y;

    cout<<"\nz: "<<z;

    x=y+z;
    cout<<"\n\nx=y+z:"<<endl;

    cout<<x;
    cout<<"=";

    cout<<y;
    cout<<"+";

    cout<<z;


    x=y-z;
    cout<<"\n\nx=y-z:"<<endl;

    cout<<x;
    cout<<"=";

    cout<<y;
    cout<<"-";

    cout<<z;
    cout<<endl;

    x=y*z;
    cout<<"\n\nx=y*z:"<<endl;
    cout<<x;
    cout<<"=";
    cout<<y;
    cout<<"*";
    cout<<z;
    cout<<endl;

    if ( y == z )
      cout << "\ny equals z" << endl;
    if ( y != z )
      cout << "\ny is not equal to z" << endl;
}

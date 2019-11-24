//Ex10_18:Complex.cpp
#include<iostream>
#include "Complex.h"
using namespace std;
//constructor
Complex::Complex( double r, double i )
    :real( r ),
    imaginary( i )
{
    //empty
}//end function
//addition operator
Complex Complex::operator+( const Complex &right )const
{
    return Complex( real + right.real,
            imaginary+right.imaginary);
}//end function
//subtraction operator
Complex Complex::operator-( const Complex &right )const
{
    return Complex( real - right.real,
            imaginary - right.imaginary );
}//end function
//multiplication operator
Complex Complex::operator*( const Complex &right )const
{
    return Complex(real*right.real-imaginary*right.imaginary,
            real*right.imaginary+imaginary*right.real);
}//end function
//determine two Complex equal
bool Complex::operator==( const Complex &right )const
{
    if( real==right.real&&imaginary==right.imaginary )//both real and imaginary are equal
        return true;
    else
        return false;
}//end function
//overload input operator
istream &operator>>( istream &input , Complex &right )
{
    input>>right.real>>right.imaginary;

    return input;//enables cin>>x>>y;
}//end function
//overload output function
ostream &operator<<( ostream &output , const Complex &right )
{
    output<<"("<<right.real<<", "<<right.imaginary<<")";

    return output;//enables cout<<x<<y;
}//end function

//Ex10_18:Complex.h
#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
using namespace std;
#include<iostream>
class Complex
{
    //overload input and output
    friend ostream &operator<<( ostream &, const Complex & );
    friend istream &operator>>( istream &, Complex & );
public:
    explicit Complex( double =0.0, double = 0.0 );//constructor function
    Complex operator+( const Complex & )const;//addition
    Complex operator-( const Complex & )const;//subtraction
    Complex operator*( const Complex & )const;//multiplication
    bool operator==( const Complex & )const;//equality operator
    bool operator!=( const Complex &right )const//inequality operator
    {
        return !( *this==right );
    }
private:
    double real;//real part
    double imaginary;//imaginary part
};

#endif // COMPLEX_H_INCLUDED

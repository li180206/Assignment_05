#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

#include <iostream>

class Complex
{
    friend std::istream &operator>>(std::istream & , Complex &);//input
    friend std::ostream &operator<<(std::ostream & , const Complex &);//output
public:
    explicit Complex(double = 0.0, double = 0.0);//constructor
    Complex operator+( const Complex &) const;//addition
    Complex operator-( const Complex &) const;//subtraction
    Complex operator*( const Complex &) const;//multiply
    bool operator==(const Complex &) const;//judge if Complex a equals Complex b
    bool operator!=(const Complex &) const;//judge if Complex a equals Complex b
private:
    double real; //real part
    double imaginary; // imaginary part
};

#endif // COMPLEX_H_INCLUDED

#include <iostream>
using namespace std;

#include "Complex.h"

Complex::Complex(double a,double b)
    :real(a),imaginary(b)
{

}

Complex Complex::operator+(const Complex &right) const
{
    return Complex(real+right.real,imaginary+right.imaginary);
}

Complex Complex::operator-(const Complex &right) const
{
    return Complex(real-right.real,imaginary-right.imaginary);
}

Complex Complex::operator*(const Complex &right) const
{
    return Complex(real*right.real,imaginary*right.imaginary);
}

bool Complex::operator==(const Complex &right) const
{
    if(real!=right.real||imaginary!=right.imaginary)
        return false;
    return true;
}

ostream &operator<<(std::ostream &output,const Complex &a)
{

    output<<'('<<a.real<<','<<a.imaginary<<')';
    return output;
}
istream &operator>>(std::istream &input,Complex &a)
{
    input>>a.real>>a.imaginary;
    return input;
}

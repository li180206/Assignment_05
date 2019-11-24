#include <iostream>

#include "Complex.h"
#include<cmath>
using namespace std;


istream &operator>>(istream &input,Complex &c)
{
    input>>c.real>>c.imaginary;
    return input;
}
ostream &operator<<(ostream &output,const Complex &c )
{
    output<<"("<<c.real<<","<<c.imaginary<<")";
    return output;
}

Complex::Complex(double realPart,double imaginaryPart)
    :real(realPart),
    imaginary(imaginaryPart)
{
    //empty body
}
Complex Complex::operator+(const Complex &operand2)const
{
    return Complex(real+operand2.real,imaginary+operand2.imaginary);
}
Complex Complex::operator-(const Complex &operand2)const
{
    return Complex(real-operand2.real,imaginary-operand2.imaginary);
}
Complex Complex::operator*(const Complex &operand2)const
{
    return Complex(real*operand2.real-imaginary*operand2.imaginary,imaginary*operand2.real+real*operand2.imaginary);
}
bool Complex::operator==(const Complex &c)
{
    double square1 = pow(real, 2) + pow(imaginary, 2);
    double square2 = pow(c.real, 2) + pow(c.imaginary, 2);
    if (square1==square2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Complex::operator!=(const Complex &c)
{
    double square1 = pow(real, 2) + pow(imaginary, 2);
    double square2 = pow(c.real, 2) + pow(c.imaginary, 2);
    if (square1!=square2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

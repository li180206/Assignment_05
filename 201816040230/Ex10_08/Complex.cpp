#include<iostream>
#include"Complex.h"
using namespace std;
Complex::Complex(double realPart,double imaginaryPart)
:real(realPart),imaginary(imaginaryPart)
{
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
    return Complex(real*operand2.real,imaginary*operand2.imaginary);
}
bool Complex::operator==(const Complex &operand2)const
{
    if(*this==Complex(operand2.real,operand2.imaginary))
    {
        return true;
    }
    return false;
}
bool Complex::operator!=(const Complex &operand2)const
{
    if(*this!=Complex(operand2.real,operand2.imaginary))
    {
        return true;
    }
    return false;
}
istream &operator>>(istream &input,Complex &operand2)
{
    input>>operand2.real>>operand2.imaginary;
}
ostream &operator<<(ostream &output,Complex const&operand2)
{
    output<<"("<<operand2.real<<","<<operand2.imaginary<<")";
}

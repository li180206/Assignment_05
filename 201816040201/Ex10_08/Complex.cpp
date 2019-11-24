// Lab 4: Complex.cpp
// Member-function definitions for class Complex.
#include <iostream>
using namespace std;

#include "Complex.h"

Complex::Complex( double realpart, double imaginarypart ):real(realpart),imaginary(imaginarypart){}


Complex Complex::operator+(const Complex &op2) const
{
    return Complex(real+op2.real,imaginary+op2.imaginary);
}
Complex Complex::operator-(const Complex &op2) const
{
    return Complex(real-op2.real,imaginary-op2.imaginary);
}
Complex Complex::operator*(const Complex &op2)const
{
    return Complex(real*op2.real-imaginary*op2.imaginary,imaginary*op2.real+real*op2.imaginary);
}
bool Complex::operator==(const Complex &op2)const
{
    return (real==op2.real&&imaginary==op2.imaginary)?true:false;
}
istream &operator>>(istream &input,Complex &op2)
{
    input>>op2.real>>op2.imaginary;
    return input;
}
ostream &operator<<(ostream &output,const Complex &op2)
{
    output<<'('<<op2.real<<','<<op2.imaginary<<')'<<endl;
}

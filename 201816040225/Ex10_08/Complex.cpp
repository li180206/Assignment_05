//10.8:Complex.cpp
#include<iostream>
#include"Complex.h"//Complex class definition
using namespace std;
Complex::Complex(double realPart,double imaginaryPart)//constructor
:real(realPart),imaginary(imaginaryPart)
{
}
Complex Complex::operator+(const Complex &operand2)const//function operator+
{
    return Complex(real+operand2.real,imaginary+operand2.imaginary);
}
Complex Complex::operator-(const Complex &operand2)const//function operator-
{
    return Complex(real-operand2.real,imaginary-operand2.imaginary);
}
Complex Complex::operator*(const Complex &operand2)const//function multiplication
{
    double r,i;
    r=real*operand2.real-imaginary*operand2.imaginary;
    i=imaginary*operand2.real+real*operand2.imaginary;
    return Complex(r,i);
}
bool Complex::operator==(const Complex &right)const//==function
{
   if(real==right.real||imaginary==right.imaginary)
        return true;
   else
    return false;
}
bool Complex::operator!=(const Complex &right)const//!=function
{
   if(real==right.real||imaginary==right.imaginary)
        return false;
   else
    return true;
}
ostream &operator<<(ostream &output,const Complex &number)
{
    output<<'('<<number.real<<","<<number.imaginary<<')';
    return output;
}

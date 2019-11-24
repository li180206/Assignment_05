// Fig 10.14:Complex.h
#include<bits/stdc++.h>
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
    friend std::ostream &operator<<(std::ostream &,const Complex &);
    friend std::istream &operator>>(std::istream &,Complex &);
public:
    Complex( double=0 , double=0  );
   Complex operator+(const Complex &) const;
   Complex operator-(const Complex &) const;
   Complex operator*(const Complex &)const;
 bool operator==(const Complex &)const;
 bool operator!=(const Complex &op2)const
 {
     return !(*this==op2);
 }

private :
    double real;
    double imaginary;
    // Complex x;
};
/* Write class definition for Complex */

#endif


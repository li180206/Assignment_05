//10.8 : Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H
class Complex
{
    friend std::ostream &operator<<(std::ostream &,const Complex &);

public:
    explicit Complex(double=0.0,double=0.0);//constructor
    Complex operator+(const Complex &)const;//addition
    Complex operator-(const Complex &)const;//subtraction
    Complex operator*(const Complex &)const;//multiplication
    bool operator==(const Complex &)const;//== function
    bool operator!=(const Complex &)const;//!=function
private://data members
    double real;
    double imaginary;
};
#endif // COMPLEX_H

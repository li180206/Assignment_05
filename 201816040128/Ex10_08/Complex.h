#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

using namespace std;

class Complex
{
public:
	explicit Complex(double = 0.0, double = 0.0);
	Complex operator+(const Complex &) const;
	Complex operator-(const Complex &) const;
	Complex operator*(const Complex&) const;
	bool operator!=(const Complex&) const;
	bool operator==(const Complex&) const;
	friend ostream& operator<<(ostream&, Complex&);
	friend istream& operator>>(istream&, Complex&);
private:
	double real;
	double imaginary;
};

#endif 


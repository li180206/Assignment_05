#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex
{
    friend std::ostream &operator<<( std::ostream &, const Complex &);
    friend std::istream &operator>>( std::istream &, Complex &);
public:
    explicit Complex( double = 0.0, double = 0.0 );//Complex constructor
    Complex operator+( const Complex & ) const; //addition
    Complex operator-( const Complex & ) const; //subtraction
    Complex operator*( const Complex & ) const; //multiplication
    bool operator==( const Complex &); // == operator
    bool operator!=( const Complex &); // != operator
private:
    double real; // real part
    double imaginary; //imaginary part
}; //end class Complex

#endif // COMPLEX_H_INCLUDED

#include <iostream>
#include "Complex.h" //Complex class definition
using namespace std;

//Constructor
Complex::Complex( double realPart, double imaginaryPart )
    :real( realPart ), imaginary( imaginaryPart)
{

} // end Complex constructor

//addition operator
Complex Complex::operator+( const Complex &operand2 ) const
{
    return Complex( real + operand2.real, imaginary + operand2.imaginary );
} //end function operator+

//subtraction operator
Complex Complex::operator-( const Complex &operand2 ) const
{
    return Complex( real - operand2.real, imaginary - operand2.imaginary );
} //end function operator-

//multiplication operator
Complex Complex::operator*( const Complex &operand2 ) const
{
    return Complex( real * operand2.real - imaginary * operand2.imaginary,
                    imaginary * operand2.real + real * operand2.imaginary );
} //end function operator*

// == operator
bool Complex::operator==( const Complex &operand2)
{
    return ( real == operand2.real && imaginary == operand2.imaginary );
} //end function operator==

// != operator
bool Complex::operator!=( const Complex &operand2)
{
    return !( *this == operand2 );
} //end function operator!=

//overloaded input operator
istream &operator>>( istream &input , Complex &a )
{
    input >> a.real >> a.imaginary;
    return input;
} //end function operator>>

//overloaded output operator
ostream &operator<<( ostream &output , const Complex &a )
{
    output <<"("<< a.real<<", "<< a.imaginary<<")";
    return output;
} //end function operator<<

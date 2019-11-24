#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

 // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#endif
#include <iostream>
class DoubleSubscriptedArray
{
    friend std::ostream &operator<<( std::ostream &, const DoubleSubscriptedArray &);
    friend std::istream &operator>>( std::istream &, DoubleSubscriptedArray & );

public:
    explicit DoubleSubscriptedArray( int = 10); // default constructor
    DoubleSubscriptedArray( const  DoubleSubscriptedArray& ); // copy constructor

    const DoubleSubscriptedArray &operator=( const DoubleSubscriptedArray & );// assignment operator
    bool operator==( const DoubleSubscriptedArray & ) const;// equality operator
    bool operator!=( const DoubleSubscriptedArray &right ) const
    {
        return !(*this == right );// invokes DoubleScriptedArray::operator==
    } // end function operator!=
    // subscript operator for non-const objects returns modifiable 1value
    int &operator[]( int );
    // subscript operator for const objects returns rvalue
    int operator[]( int ) const;
private:
    size_t size; // pointer-based array size
    int *ptr; // pointer to first element of pointer-based array
};// end class DoubleScriptedArray


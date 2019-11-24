//DoubleSubscriptedArray.cpp
#include<iostream>
#include<iomanip>
#include <stdexcept>
#include "DoubleSubscriptedArray.h" //  DoubleSubscriptedArray class definition
using namespace std;
// default constructor for class DoubleSubscriptedArray (default size 10)
DoubleSubscriptedArray::DoubleSubscriptedArray( int arraySize)
      :size( arraySize > 0 ? arraySize :
            throw invalid_argument( "size must be greater than 0")),
            ptr(new int[ size ])
            {
                for (size_t i = 0; i < size; ++i )
                    ptr[ i ] =0;// set pointer-based array element
            }

// end DoubleSubscriptedArray default constructor

const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=( const DoubleSubscriptedArray &right )
{
    if (&right != this ) // avoid self-assignment
        {
            // for DoubleSubscriptedArray of different sizes, deallocate original
            // left-side Array.then allocate new left-side Array
            if (size != right.size )
                {
                    delete [] ptr; // release space
                    size = right.size; // resize this object
                    ptr = new int[ size ];// create space for DoubleSubscriptedArray copy
                } // end inner if
            for (size_t i = 0; i <size; ++i )
                ptr[ i ] = right.ptr[ i ]; // copy array into object
        } // end outer 1f
        return *this; // enables x = y = z, for example
}

bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right ) const
{
    if (size != right.size) //different number of elements
        return false; // arrays of
    for ( size_t i= 0; i < size; ++i )
        if (ptr[ i ] != right.ptr[i])
        return false; // Array contents are not equal
        return true;
}



int &DoubleSubscriptedArray::operator[](int subscript)
{
    //check for subscript out-of-range error
    if (subscript < 0 || subscript >= size )
    throw out_of_range( "Subscript out of range");
    return ptr[ subscript ];
}
// reference return
 // end function operator[]
//overloaded subscript operator for const Arrays
//const reference return creates an rvalue
int DoubleSubscriptedArray::operator[]( int subscript ) const
{
    // check for subscript out-of-range error
    if ( subscript <0 || subscript >= size )
        throw out_of_range( "Subscript out of range ");
    return ptr[subscript ];// returns copy of this element
}
// overloaded input operator for class DoubleSubscriptedArray;
// inputs values for entire DoubleSubscriptedArray
istream &operator>>( istream &input, DoubleSubscriptedArray &a )
{
    for ( size_t i = 0;i < a.size; ++i )
        input >> a.ptr[ i ];
    return input; // enables cin >> x >> y;
}// end function
// overloaded output operator for class Array
ostream &operator<<( ostream &output, const DoubleSubscriptedArray &a )
{
    for (size_t i =0;i < a.size; ++i )
        {
            output << setw(8)<< a.ptr[ i ];

            if ((i+1)%4==0) // 4 numbers per row of output
                output << endl;
        }
         if (a.size %4 != 0) // end last line of output
            output << endl;

         return output; // enables cout << x<< y;
}

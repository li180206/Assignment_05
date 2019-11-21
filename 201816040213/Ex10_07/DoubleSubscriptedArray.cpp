#include <iostream>
#include <iomanip>
#include "DoubleSubscriptedArray.h"

using namespace std;

//Constructor
DoubleSubscriptedArray::DoubleSubscriptedArray( int row, int column )
{
    if ( row * column > 0 )
    {
        rowsize = row;
        columnsize = column;
        ptr = new int*[rowsize];
    }
    else
        throw invalid_argument("Array size must be greater than 0");
    for( int i = 0; i < rowsize; ++i)
    {
        ptr[i] = new int[columnsize];
        for( int j = 0; j < columnsize; ++j)
            ptr[i][j] = 0; //set pointer-based array element
    }

} // end DoubleSubscriptedArray constructor

// () operator
int &DoubleSubscriptedArray::operator()( int row, int column )
{
    if(row < 0 || row >= rowsize)
        throw out_of_range( "Row out of range" );
    if(column < 0 || column >= columnsize)
        throw out_of_range( "Column out of range" );
    return ptr[row-1][column-1];
} //end function operator()

// () operator
int &DoubleSubscriptedArray::operator()( int row, int column ) const
{
    if(row < 0 || row >= rowsize)
        throw out_of_range( "Row out of range" );
    if(column < 0 || column >= columnsize)
        throw out_of_range( "Column out of range" );
    return ptr[row-1][column-1];
} //end function operator()

// == operator
bool DoubleSubscriptedArray::operator==( const DoubleSubscriptedArray &right) const
{
    if( rowsize!=right.rowsize || columnsize!=right.columnsize )
        return false;
    else
    {
        for( int i = 0; i < rowsize ; ++i)
            for( int j = 0; j < columnsize; ++j)
                if( ptr[i][j] != right.ptr[i][j])
                    return false;
        return true;
    }
} //end function operator==

// != operator
bool DoubleSubscriptedArray::operator!=( const DoubleSubscriptedArray &right) const
{
    return ! ( *this == right );
} //end function operator!=

// = operator
const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=( const DoubleSubscriptedArray &right )
{
    if( &right != this) //avoid self-assignment
    {
        if( rowsize!=right.rowsize || columnsize!=right.columnsize )
        {
            for( int i = 0; i < rowsize; ++i)
                delete [] ptr[i];
            delete [] ptr;//delete ptr space
            rowsize = right.rowsize;
            columnsize = right.columnsize;
            //apply a new space for the array
            ptr = new int*[rowsize];
            for( int j = 0; j < rowsize; ++j)
                ptr[j] = new int[columnsize];
        }
        //copy array into object
        for( int i = 0; i < rowsize; ++i)
        {
            for( int j = 0; j < columnsize; ++j)
                ptr[i][j] = right.ptr[i][j];
        }
    }
    return *this;
} //end function operator=*/

//overloaded input operator
istream &operator>>( istream &input, DoubleSubscriptedArray &a )
{
    for( int i = 0; i < a.rowsize ; ++i)
        for( int j = 0; j < a.columnsize; ++j)
            input >> a.ptr[i][j];
    return input;
} //end function operator>>

//overloaded output operator
ostream &operator<<( ostream &output, const DoubleSubscriptedArray &a)
{
    for( int i = 0; i < a.rowsize ; ++i)
    {
        for( int j = 0; j < a.columnsize; ++j)
            output << setw( 12 ) <<a.ptr[i][j];
        output << endl;
    }
    return output;
} //end function operator<<

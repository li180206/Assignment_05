//DoubleSubscriptedArray.cpp

#include <iostream>
#include <iomanip>
using namespace std;

//include definition of class DoubleSubscriptedArray from DoubleSubscriptedArray.h
#include "DoubleSubscriptedArray.h"//DoubleSubscriptedArray class definition

DoubleSubscriptedArray::DoubleSubscriptedArray(int row, int column)
:rows( row > 0 ? row : throw invalid_argument( "2D Array row must be greater than 0" )),
columns( column > 0 ? column : throw invalid_argument( "2D Array column must be greater than 0" ))
{
    ptr = new int* [rows];
    for(int k = 0;k < rows; k++)
        ptr[k] = new int [columns];

    for(int i=0; i < rows; ++i)
    {
        for(int j=0; j < columns; ++j)
        {
            ptr[i][j] = 0;
        }
    }
}//default constructor

DoubleSubscriptedArray::DoubleSubscriptedArray( const DoubleSubscriptedArray &arrayCopy )
:rows(arrayCopy.rows), columns(arrayCopy.columns)
{
    ptr = new int* [rows];
    for(int k = 0;k < rows; k++)
        ptr[k] = new int [columns];

    for(int i=0; i < rows; ++i)
    {
        for(int j=0; j < columns; ++j)
        {
            ptr[i][j] = arrayCopy.ptr[i][j];
        }
    }
}//copy constructor

DoubleSubscriptedArray::~DoubleSubscriptedArray()
{
    for(int i = 0; i < rows; i++)
		delete[] ptr[i];
	delete[] ptr;
}//destructor

const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)
{
    if( &right != this )
    {
        if( rows != right.rows && columns != right.columns )
        {
            for(int i = 0; i < rows; i++)
                delete[] ptr[i];
            delete[] ptr;
            rows = right.rows;
            columns = right.columns;

            ptr = new int* [rows];
            for(int k = 0;k < rows; k++)
                ptr[k] = new int [columns];
        }
    }

    for(int i=0; i < rows; ++i)
    {
        for(int j=0; j < columns; ++j)
        {
            ptr[i][j] = right.ptr[i][j];
        }
    }

    return *this;
}//function operator=

bool DoubleSubscriptedArray::operator==( const DoubleSubscriptedArray &right ) const
{
    if( rows != right.rows && columns != right.columns )
        return false;

    for(int i=0; i < rows; ++i)
    {
        for(int j=0; j < columns; ++j)
        {
            if(ptr[i][j] != right.ptr[i][j])
                return false;
        }
    }

    return true;
}//judge operator==

int &DoubleSubscriptedArray::operator()(int row, int column)
{
    if((row < 0 || row > rows)||(column < 0 || column > columns))
        throw invalid_argument("subscript out of range");

    return ptr[row-1][column-1];
}//function double subscripted(can be a left value)

int DoubleSubscriptedArray::operator()(int row, int column) const
{
    if((row < 0 || row > rows)||(column < 0 || column > columns))
        throw invalid_argument("subscript out of range");

    return ptr[row-1][column-1];
}//function double subscripted(cannot be a left value)

istream &operator>>(istream &input, DoubleSubscriptedArray &a)
{
    for( int i = 0; i < a.rows; ++i)
        for( int j = 0; j < a.columns; ++j)
            input >> a.ptr[i][j];

    return input;
}//istream

ostream &operator<<(ostream &output,const DoubleSubscriptedArray &a)
{
    for( int i = 0; i < a.rows; ++i)
    {
        for( int j = 0; j < a.columns; ++j)
        {
            output << setw(10) << a.ptr[i][j];
        }

        output << endl;
    }

    output << endl;

    return output;
}//ostream

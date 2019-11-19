#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

#include <array>

class DoubleSubscriptedArray
{
    //iostream 
    friend std::ostream &operator<<( std::ostream &, const DoubleSubscriptedArray & );
    friend std::istream &operator>>( std::istream &, DoubleSubscriptedArray & );
public:
    explicit DoubleSubscriptedArray( int = 2, int = 3 );//default constructor
    DoubleSubscriptedArray( const DoubleSubscriptedArray & );//copy constructor
    ~DoubleSubscriptedArray();//destructor

    const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);//function operator=
    bool operator==( const DoubleSubscriptedArray & ) const;//judge operator==
    bool operator!=( const DoubleSubscriptedArray &right) const//judge operator!=
    {
        return !( *this == right );
    }

    int &operator()(int, int);//function double subscripted(can be a left value)
    int operator()(int, int) const;//function double subscripted(cannot be a left value)
private://define private member: rows, columns, and ptr is a 2D array
    int rows;
    int columns;
    int **ptr;
};

#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

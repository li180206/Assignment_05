#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

class DoubleSubscriptedArray
{
    friend std::ostream &operator<<( std::ostream &, const DoubleSubscriptedArray &);
    friend std::istream &operator>>( std::istream &, DoubleSubscriptedArray &);
public:
    DoubleSubscriptedArray( int = 1, int = 1);//DoubleSubscriptedArray Constructor
    int &operator()( int , int );// () operator
    int &operator()( int , int ) const;// () operator
    bool operator==( const DoubleSubscriptedArray &) const;// == operator
    bool operator!=( const DoubleSubscriptedArray &) const;// != operator
    const DoubleSubscriptedArray &operator=( const DoubleSubscriptedArray & );// = operator
private:
    int rowsize; //row size
    int columnsize; //column size
    int **ptr;

};

#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

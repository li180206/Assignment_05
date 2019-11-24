#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

#include<iostream>
#include "DoubleSubscriptedArray.h"
using namespace std;
class DoubleSubscriptedArray
{
    friend ostream &operator<<(ostream &,const DoubleSubscriptedArray &);
    friend istream &operator>>(istream &, DoubleSubscriptedArray &);
public:
    DoubleSubscriptedArray(int,int);

    DoubleSubscriptedArray(const DoubleSubscriptedArray &);
    ~DoubleSubscriptedArray();

    const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray & );

    bool operator==(const DoubleSubscriptedArray & )const;
    bool operator!=(const DoubleSubscriptedArray &right)const
    {
        return ! (*this==right);
    }

    int &operator()(int,int);
    int operator()(int,int)const;
private:
    int *ptr;
    int row;
    int column;
};

#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED

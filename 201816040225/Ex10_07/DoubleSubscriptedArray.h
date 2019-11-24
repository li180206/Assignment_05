//10.7 DoubleSubscriptedArray.h
#ifndef DOUBLESUBSCRIPTED_H
#define DOUBLESUBSCRIPTED_H
#include<iostream>
using namespace std;
class DoubleSubscriptedArray//definition of class
{
   friend ostream &operator<<(ostream &,const DoubleSubscriptedArray &);//output
    friend istream &operator>>(istream &,const DoubleSubscriptedArray &);//input
public:
    DoubleSubscriptedArray(int,int);//constructor
    DoubleSubscriptedArray(const DoubleSubscriptedArray &);
    ~DoubleSubscriptedArray();//destroy
    int &operator()(int ,int );//use the operator
    bool operator==(const DoubleSubscriptedArray &)const;//judge arrays
    bool operator!=(const DoubleSubscriptedArray &)const;//judge arrays
    const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);//become the same
    size_t getRow()const;//getRow
    size_t getColumn()const;//GetColumn
private://data members
    size_t Rows;
    size_t Columns;
    int *sptr;
};
#endif // DOUBLESUBSCRIPTED_H

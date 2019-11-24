#include <iostream>
#include<stdexcept>
#include<iomanip>
#include "DoubleSubscriptedArray.h"
using namespace std;

DoubleSubscriptedArray::DoubleSubscriptedArray( int arraySize)
    :size(arraySize>0? arraySize)
    throw invalid_argument("Array size must be great than 0")
    ptr(new int[size])
{
    for(size_t i=0;i<size;+=i)
        ptr[i]=0;
}
DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray &arrayToCopy)
    :size(arrayToCopy.size)
    ptr(new int[size])
{
    for(size_t i=0;i<size;+=i)
        ptr[i]=arrayToCopy.ptr[i];
}
DoubleSubscriptedArray::DoubleSubscriptedArray( int r, int c)
{
    row=r;
    column=c;
    DoubleSubscriptedArray=new int[row*column];
    for(int i=0;i<row*column;++i)
    {
        *(DoubleSubscriptedArray+i)=1;
    }
}
DoubleSubscriptedArray::~DoubleSubscriptedArray( )
{
    delete [] ptr;
}

const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)
{
    if(&right != this )
    {
        if(size != right.size)
        {
            delete[]ptr;
            size=right.size;
            ptr=new int[size];
        }
        for(size_t i=0;i<size;++i)
            ptr[i]=right.ptr[i];
    }
    return *this;
}
bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right )const
{
    if(size != right.size)
       return false;
       for(size_t i=0;i<size;++i)
        if(ptr[i]!=right.ptr[i])
           return false;
    return true;

}
//overloaded subscript operator for no-const DoubleSubscriptedArry
int &DoubleSubscriptedArray::operator()(int row,int column)
{
    if(row<0||row>=size||column<0||column>=size)
        throw out_of_range("Subscript out of range");
    return ptr(row,column);
}
int DoubleSubscriptedArray::operator()(int row,int column)const
{
    if(row<0||row>=size||column<0||column>=size)
        throw out_of_range("Subscript out of range");
    return ptr(row,column);
}

istream &operator>>(istream &input,DoubleSubscriptedArray &a)
{
    for(size_t i=0;i<a.size;++i)
        input>>a.ptr[i];
    return input;
}
ostream &operator<<(ostream &output,const DoubleSubscriptedArray &a )
{
    for(size_t i=0;i<a.size;++i)
    {
        output<<setw(12)<<a.ptr[i];
        if((i+1)%4==0)//4 numbers per row of output
            output << endl;
    }
    if(a.size%4!=0)//end last line of output
        output<<endl;
    return output;
}

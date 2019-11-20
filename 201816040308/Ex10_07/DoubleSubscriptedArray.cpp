#include <iostream>
using namespace std;

#include "DoubleSubscriptedArray.h"

DoubleSubscriptedArray::DoubleSubscriptedArray(int a,int b)
    :x(a),y(b),ptr(new int[a*b])
{
}
const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)
{
    if(&right!=this)
    {
        if(x!=right.x||y!=right.y)
        {
            delete [] ptr;
            x=right.x;
            y=right.y;
            ptr=new int[x*y];
        }
        for(int i=0;i<x;i++)
            for(int j=0;j<y;j++)
                ptr[i*y+j]=right.ptr[i*y+j];
    }
    return *this;
}

bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right) const
{
    if(x!=right.x||y!=right.y)
        return false;
    for(int i=0;i<x;i++)
        for(int j=0;j<y;j++)
            if(ptr[i*y+j]!=right.ptr[i*y+j])
                return false;
    return true;
}
int &DoubleSubscriptedArray::operator()(int a, int b)
{
    if(a>=x||a<0||b>=y||b<0)
        throw("Out of range");
    return ptr[a*y+b];
}
int DoubleSubscriptedArray::operator()(int a, int b) const
{
    if(a>=x||a<0||b>=y||b<0)
        throw("Out of range");
    return ptr[a*y+b];
}
ostream &operator<<(std::ostream &output,const DoubleSubscriptedArray &a)
{
    for(int i=0;i<a.x;i++){
        for(int j=0;j<a.y;j++){
            output<<a.ptr[i*a.y+j]<<' ';
        }
        output<<endl;
    }
    return output;
}
istream &operator>>(std::istream &input,DoubleSubscriptedArray &a)
{
    for(int i=0;i<a.x;i++)
        for(int j=0;j<a.y;j++)
            input>>a.ptr[i*a.y+j];
    return input;
}

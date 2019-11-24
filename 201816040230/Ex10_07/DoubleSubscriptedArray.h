#ifndef DOUBLESUBSCRIPTEDARRAY_H
#define DOUBLESUBSCRIPTEDARRAY_H
#include <iostream>
class DoubleSubscriptedArray
{
    friend std::ostream &operator<<(std::ostream &,const DoubleSubscriptedArray &);
    friend std::istream &operator>>(std::istream &,DoubleSubscriptedArray &);
public:
   DoubleSubscriptedArray(int,int);
    const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);
    bool operator==(const DoubleSubscriptedArray &)const;
    bool operator!=(const DoubleSubscriptedArray &right)const
    {
        return !(*this==right);
    }
    int &operator()(int,int);
    int operator()(int,int)const;
private:
    int row;//行
    int column;//列
    int *ptr;

};
#endif // DOUBLESUBSCRIPTEDARRAY_H

//10.7 DoubleSubscriptedArray.cpp
#include<iostream>
using namespace std;
#include<stdlib.h>
#include<iomanip>
#include"DoubleSubscriptedArray.h"
DoubleSubscriptedArray::DoubleSubscriptedArray(int row,int column)//constructor  initial 0
{
    Rows=(row>=1)?row:4;
    Columns=(column>=1)?column:5;
    sptr=new int[Rows*Columns];
        for(int i=1;i<=Rows*Columns;i++)
        sptr[i]=0;
}//end function

DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray &Copy)
:Rows(Copy.Rows),Columns(Copy.Columns)
{
    sptr=new int[Rows*Columns];
     for(int i=1;i<=Rows*Columns;i++)
        sptr[i]=Copy.sptr[i];
}//end function

DoubleSubscriptedArray::~DoubleSubscriptedArray()//free memory
{
    delete []sptr;
}//end function

bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &a)const//judge
{
    if(Rows!=a.Rows||Columns!=a.Columns)
        return false;
     for(int i=1;i=Rows*Columns;i++)
    {
          if(sptr[i]!=a.sptr[i])
            return false;
    }
    return true;
}//end function

const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &a)//copy array
{
    if(&a!=this)
    {
        if(Rows!=a.Rows||Columns!=a.Columns)
        {
            delete []sptr;
            Rows=a.Rows;
            Columns=a.Columns;
            sptr=new int[Rows*Columns];
        }
       for(int i=1;i<=Rows*Columns;i++)
            sptr[i]=a.sptr[i];
    }
    return *this;
}//end function

int &DoubleSubscriptedArray::operator()(int row,int column)//()operator
{
    if(Rows<=row||Columns<=column)
    {
        cout<<"\nError:out of range"<<endl;
    }
    return sptr[row*Columns+column];
}//end function

istream &operator>>(istream &input,DoubleSubscriptedArray &a)//input function
{
     for(int i=1;i<=a.Rows*a.Columns;i++)
   {
       input>>a.sptr[i];
   }
   return input;
}//end function

ostream &operator<<(ostream &output,const DoubleSubscriptedArray &a)//output function
{ for(int i=1;i<=a.Rows*a.Columns;i++)
    {
        output<<setw(4)<<a.sptr[i];
        if(i%a.Columns==0)
            output<<endl;
    }
    output<<endl;
    return output;
}//end function

bool DoubleSubscriptedArray::operator!=(const DoubleSubscriptedArray &a)const//judge
    {
        return!(*this==a);
    }//end function


    size_t DoubleSubscriptedArray::getRow()const//get Row
    {
        return Rows;
    }//end function

    size_t DoubleSubscriptedArray::getColumn()const//getColumn
    {
        return Columns;
    }//end function

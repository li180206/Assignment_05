#include<iostream>
#include<iomanip>
#include<stdexcept>
#include"DoubleSubscriptedArray.h"
using namespace std;
DoubleSubscriptedArray::DoubleSubscriptedArray(int x,int y)
:row(x),column(y)

{
    ptr=new int[row*column];
    if(row<0||column<0)
        throw invalid_argument("row,column must more than 0");
    for(int i=1;i<=row;++i)
        for(int j=1;j<=column;++j)
        {
            ptr[i*column+j]=0;//数组的元素位置
        }
}
 const DoubleSubscriptedArray &DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray &right)
 {
     if(&right!=this)
     {
         if(row!=right.row||column!=right.column)
         {
             delete[]ptr;
             row=right.row;
             column=right.column;
             ptr=new int[row*column];
         }
         for(int i=0;i<row;++i)
            for(int j=0;j<column;++j)
            ptr[i*column+j]=right.ptr[i*column+j];
     }
     return *this;
 }
  bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray &right)const
  {
      if(row!=right.column||column!=right.column)
      return false;
      for(int i=0;i<row;++i)
        for(int j=0;j<column;++j)
        if(ptr[i*column+j]!=right.ptr[i*column+j])
        return false;
      return true;
  }
  int  &DoubleSubscriptedArray::operator()(int x,int y)
  {
        return ptr[x*column+y];
  }
int  DoubleSubscriptedArray::operator()(int x,int y)const
  {

        return ptr[x*column+y];
  }
  istream &operator>>(istream &input,DoubleSubscriptedArray &m)
  {
      for(int i=1;i<=m.row;++i)
      {
          for(int j=1;j<=m.column;++j)
          {
              input>>m.ptr[i*m.column+j];
          }

      }



      return input;
  }
  ostream &operator<<(ostream &output,const DoubleSubscriptedArray &m)
  {
      int i,j;

      for(i=1;i<=m.row;++i)
      {
          for(j=1;j<=m.column;++j)
        {
            output<<m.ptr[i*m.column+j]<<" ";
           if((i*m.column+j)%m.column==0)
           {
               cout<<endl;
           }
        }
      }


      return output;
  }

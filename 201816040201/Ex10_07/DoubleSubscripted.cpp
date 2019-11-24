#include<bits/stdc++.h>
#include"DoubleSubscripted.h"
using namespace std;
DoubleSubscriptedArry::DoubleSubscriptedArry(int x,int y):row(x>0?x:1),col(y>0?y:1),p(new int[row*col])
{
    for(int i=1;i<=row*col;i++)
        p[i]=0;
}
DoubleSubscriptedArry::DoubleSubscriptedArry(const DoubleSubscriptedArry &ary):row(ary.row),col(ary.col),p(new int[row*col])
{
    for(int i=1;i<=row*col;i++)
        p[i]=ary.p[i];

}
size_t DoubleSubscriptedArry::getclow()
{
  return col;
}
size_t DoubleSubscriptedArry::getrow()
{
    return row;
}
const DoubleSubscriptedArry & DoubleSubscriptedArry::operator=(const DoubleSubscriptedArry &op2)
{
    if(&op2!=this)
    {
        if(row*col!=op2.row*op2.col)
        {
            delete []p;
            row=op2.row;
            col=op2.col;
            p=new int[row*col];
        }
        for(int i=1;i<=row*col;i++)
            p[i]=op2.p[i];
    }
}
bool DoubleSubscriptedArry::operator==(const DoubleSubscriptedArry &op2)const
{
    if(row!=op2.row||col!=op2.col)
        return false;
    for(int i=1;i=row*col;i++)
        if(p[i]!=op2.p[i])
        return false;
    return true;
}
int &DoubleSubscriptedArry::operator( )(int x,int y )
{
      return p[x*y];
}
int DoubleSubscriptedArry::operator( )(int x,int y )const
 {
    return p[x*y];
 }
istream &operator>>(istream &input,DoubleSubscriptedArry &op2)
{
    for(int i=1;i<=op2.row*op2.col;i++)
        input>>op2.p[i];
    return input;
}
ostream &operator<<(ostream &output,const DoubleSubscriptedArry &op2)
{
    for(int i=1;i<=op2.row*op2.col;i++)
    {
        output<<setw(4)<<op2.p[i];
        if(i%op2.col==0)
            output<<endl;
    }
    output<<endl;
    return output;
}



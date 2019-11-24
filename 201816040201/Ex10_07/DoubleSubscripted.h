#include<bits/stdc++.h>
class DoubleSubscriptedArry
{
    friend std::ostream &operator<<(std::ostream &,const DoubleSubscriptedArry &);
    friend std::istream &operator>>(std::istream &,DoubleSubscriptedArry &);
public :
    DoubleSubscriptedArry(int ,int );
    DoubleSubscriptedArry(const DoubleSubscriptedArry &);
    size_t getrow();
    size_t getclow();
    const DoubleSubscriptedArry &operator=(const DoubleSubscriptedArry &);
    bool operator==(const DoubleSubscriptedArry &)const;
bool operator!=(const DoubleSubscriptedArry &op2)const
{
        return !(*this==op2);
}
   int &operator( )(int ,int );
   int operator( )(int ,int )const;
private:
    size_t row,col;
    int *p;

};

#include<bits/stdc++.h>

class DoubleSubscriptedArray
{
   friend std::ostream &operator<<(std::ostream &,const DoubleSubscriptedArray &);
   friend std::istream &operator>>(std::istream &,DoubleSubscriptedArray &);
public:
   DoubleSubscriptedArray( int ,int  );
   int &operator()(int , int);
   int operator()(int , int) const;
   const DoubleSubscriptedArray &operator=(const DoubleSubscriptedArray &);
   bool operator==(const DoubleSubscriptedArray &) const;
   bool operator!=(const DoubleSubscriptedArray &right) const{
        return !(*this==right);
   }
private:
   int x;
   int y;
   int *ptr;
};


#include <iostream>
#include "DoubleSubscriptedArray.h"
using namespace std;

int main()
{

   DoubleSubscriptedArray m(2,4);//将m=（2.4）存入数组里面

   cout<<"请输入数组元素："<<endl;
   cin>>m;
   cout<<"数组元素为："<<endl;
   cout<<m;
   cout<<"请输入row,column:"<<endl;
   int row,column;
   cin>>row>>column;
   cout<<"数组下标对应元素："<<m(row,column)<<endl;
   if(m(2,4)!=m(row,column))
   {
       cout<<"匹配错误"<<endl;
   }
   else
    cout<<"匹配正确"<<endl;

    return 0;
}

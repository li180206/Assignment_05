//10.7 test.cpp
#include<iostream>
#include<stdexcept>
#include"DoubleSubscriptedArray.h"//definition the class
using namespace std;
int main()
{
int r,c;//input
cout<<"rows:  "<<"columns: "<<endl;
cin>>r>>c;
DoubleSubscriptedArray array1(r,c);
cout<<array1.getRow()<<array1.getColumn()<<endl;
cout<<array1;//the initial array
cout<<"input number"<<endl;
cin>>array1;//input numbers
cout<<"after that the array is: "<<endl;
cout<<array1;//get  array1
cout<<"input the new rows and columns: "<<endl;
cin>>r>>c;//create the new array2
DoubleSubscriptedArray array2(r,c);
cout<<"input number"<<endl;
cin>>array2;
if(array1==array2)//judge array1 and array2
    cout<<"\n two arrays are equal to each other"<<endl;
if(array1!=array2)//judge array1 and array2
    cout<<"\n two arrays are not equal"<<endl;
cout<<"create  a new array == array1: "<<endl;
DoubleSubscriptedArray array0(array1);
cout<<array0;
cout<<"\n copy array2 to array0: "<<endl;
array0=array2;//equal to array2
cout<<array0;
if(array0==array2)//judge
    cout<<"\n they are equal"<<endl;
if(array0!=array2)//judge
    cout<<"\n they are not equal"<<endl;
cout<<"\nassigning 50 to array1[8][8]"<<endl;
array1(8,8)=50;
cout<<array1;
return 0;
}

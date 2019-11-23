#include<iostream>
#include"DoubleSubscriptedArray.h"
#include<stdexcept>
#include<iomanip>
using namespace std;

int main()
{
	DoubleSubscriptedArray chessBorard(2, 3);
	cout << "请输入六个数据\n";
	cin>>chessBorard;
	cout<<chessBorard;
	cout<<chessBorard(1,2);
}



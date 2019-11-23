#include<iostream>
#include"Complex.h"
using namespace std;

int main()
{
	Complex complex1;
	Complex complex2;
	Complex complex3;
	cout << "请直接输入实部和虚部，以空格间隔\n";
	cin >> complex1;
	cout << complex1;
	cout << "\n请直接输入实部和虚部，以空格间隔\n";
	cin >> complex2;
	cout << complex2;
	complex3 = complex1 * complex2;
	cout << "\n复数相乘的结果为：";
	cout << complex3;
	if (complex1 == complex2)
	{
		cout << "\n复数相等";
	}
	if (complex1 != complex2)
	{
		cout << "\n复数不相等";
	}
}


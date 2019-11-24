#include <iostream>
#include"Complex.h"
using namespace std;

int main()
{
  Complex x(0.0,0.0),y,z;
  cout<<"请输入两个复数："<<endl;
  cin>>y;
  cin>>z;
  cout << "x: ";
  cout<<x;
  cout << "\ny: ";
  cout<<y;
  cout << "\nz: ";
  cout<<z;
  x = y + z;
  cout << "\n\nx = y + z:" << endl;
  cout<<x;
  cout << " = ";
  cout<<y;
  cout << " + ";
  cout<<z;
  x = y - z;
  cout << "\n\nx = y - z:" << endl;
  cout<<x;
  cout << " = ";
  cout<<y;
  cout << " - ";
  cout<<z;
  cout << endl;
  x = y * z;
  cout << "\n\nx = y * z:" << endl;
  cout<<x;
  cout << " = ";
  cout<<y;
  cout << " * ";
  cout<<z;
  cout << endl;
}

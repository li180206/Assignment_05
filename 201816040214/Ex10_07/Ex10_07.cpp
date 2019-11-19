#include <iostream>
#include <array>
#include <iomanip>

#include "DoubleSubscriptedArray.h"
using namespace std;

//function main
int main()
{
    //2D array of numbers
    int row, column, test;
    cout << "Please input the row of the 2D array:";
    cin >> row;
    cout << "Please input the column of the 2D array:";
    cin >> column;
    cout << "Please input values to the 2D array:\n";
    DoubleSubscriptedArray a(row,column), b(row, column);
    cin >> a;
    cout << "Output the 2D array a:\n";
    cout << a;

    cout << "Output array[0][0]:\n";
    cout << setw(10) << a(1,1);

    cout << "\n\nOutput the 2D array b:" << endl;
    cout << b;

    cout << "If (a == b), it will output a=b, or output a!=b\n";
    if(a == b)
        cout << setw(10) << "a=b";
    else
        cout << setw(10) << "a!=b";

    cout << "\nIf (a != b), it will output a!=b, or output a=b\n";
    if(a != b)
        cout << setw(10) << "a!=b";
    else
        cout << setw(10) << "a==b";

    cout << "\n\nMake a equal to b, and print 2D array b" << endl;
    b = a;
    cout << b;

    cout << "\nIf (a == b), it will output a=b, or output a!=b\n";
    if(a == b)
        cout << setw(10) << "a=b";
    else
        cout << setw(10) << "a!=b";

    cout << "\n\nOutput the right value of 2D array a[1][2]";
    test = a(1,2);
    cout << "\n";
    cout << setw(10) << test;

    cout << "\n\nMake a[1][2] equals to 10, and print 2D array a";
    a(1,2) = 10;
    cout << "\n";
    cout << a;
}

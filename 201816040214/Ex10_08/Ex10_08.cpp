#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    Complex x;
    Complex y;
    Complex z;//constructor

    cout << "Please input two complexs' real and imaginary:(such as(a,b))" << endl;//input complex
    cin >> y;
    cin.get();
    cin >> z;//input two complex

    cout << "\nx: ";
    cout << x;
    cout << "\ny: ";
    cout << y;
    cout << "\nz: ";
    cout << z;//output x, y, z

    x=y+z;
    cout << "\n\nx = y + z: " << endl;
    cout << x;
    cout << " = ";
    cout << y;
    cout << " + ";
    cout << z;//output x=y+z

    x = y - z;
    cout << "\n\nx = y - z: " << endl;
    cout << x;
    cout << " = ";
    cout << y;
    cout << " - ";
    cout << z;//output x=y-z

    x = y * z;
    cout << "\n\nx = y * z: " << endl;
    cout << x;
    cout << " = ";
    cout << y;
    cout << " * ";
    cout << z;//output x=y*z

    cout << "\nIf two complex are same, it will output y=z.Or it will output y!=z\n" << endl;
    if(y == z)
        cout << "y=z" << endl;
    else
        cout << "y!=z" << endl;

    cout << "\n" ;

    if(y != z)
        cout << "y!=z" << endl;
    else
        cout << "y=z" << endl;
}

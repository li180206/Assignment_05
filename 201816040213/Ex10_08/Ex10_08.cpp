#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex x;
    Complex y( 4.3, 8.2 );
    Complex z( 3.3, 1.1 );

    cout<<"Please enter the complex x: ";
    cin>>x; //input x
    cout<<"x : "<<x<<endl; //output x

    x = y + z;
    cout<<"\nx = y + z:\n"<<x<<" = "<<y<<" + "<<z<<endl; //output y + z

    x = y - z;
    cout<<"\nx = y - z:\n"<<x<<" = "<<y<<" - "<<z<<endl; //output y - z

    x = y * z;
    cout<<"\nx = y * z:\n"<<x<<" = "<<y<<" * "<<z<<endl; //output y * z

    cout<<"\n"<<( ( y == z)? "y is equal to z. " : "y is not equal to z. " )<<
        "(according to the overloaded == operator)"<<endl;
    cout<<"\n"<<( ( y != z)? "y is not equal to z. " : "y is equal to z. " )<<
        "(according to the overloaded != operator)"<<endl;
    return 0;
}

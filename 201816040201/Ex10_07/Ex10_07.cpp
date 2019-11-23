#include <iostream>
#include"DoubleSubscripted.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    DoubleSubscriptedArry hehe(3,3);
    DoubleSubscriptedArry xixi(3,4);
    //cout<<hehe<<endl;
    cin>>hehe;
    cout<<hehe<<endl;
    cout<<hehe(2,3)<<endl;
    if(hehe!=xixi)
    {
        cout<<"not same"<<endl;
        xixi=hehe;
    }
    cout<<xixi<<endl;


    return 0;
}

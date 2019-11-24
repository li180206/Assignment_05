#include <iostream>
#include<ctime>

#include "DoubleSubscriptedArray.h"
using namespace std;

int main()
{
    DoubleSubscriptedArray chessBoard(3,5);//生成一个矩阵

    cout<<chessBoard(1,1)<<endl;//输出1行1列的元素
    chessBoard(1,1)=12;
    cout<<chessBoard(1,1)<<endl;
    return 0;
}

//
// Created by OLD MAN on 2020/1/9.
//

//一个正整数,如果它能被 7 整除，或者它的十进制表示法中某一位上的数字为 7，则称其为与 7 相关的数。
//
//现在小蒜蒜想求出所有小于等于 n(n<100) 的与 7 无关的正整数的平方和。
//
//输入格式
//        输入为一行，正整数 n(n<100)。
//
//输出格式
//        输出一行，包含一个整数，即小于等于 n 的所有与 7 无关的正整数的平方和。

#include <iostream>
using namespace std;

bool aboutSeven(int a){
    if (!(a % 7)){
        return true;
    }
    while (a > 1){
        if (a % 10 == 7){
            return true;
        }
        a = a / 10;
    }
    return false;
}

int main(){
    int n;
    cin>>n;

    int result = 0;
    for (int i = 1; i <= n; ++i) {
        if (!(aboutSeven(i))){
            cout<<i<<" ";
            result += i * i;
        }
    }

    cout<<endl<<result;
}
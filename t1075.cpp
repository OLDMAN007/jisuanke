//
// Created by OLD MAN on 2020/1/7.
//

//小蒜上了他的第一堂计算机概论，老师说计算机内部是由很多的小开关来组成：1 代表开、0 代表关。于是聪明的小蒜便了解了，原来我们平常使用电灯开关就是把 1 变成 0、0 变成 1 嘛！
//
//输入格式
//        输入只有一行，含有一个为 0 或 1 的整数。
//
//输出格式
//        输入为 0 则输出 1；
//
//输入为 1 则输出 0。

#include <iostream>
using namespace std;
int main(){
    bool a;
    cin>>a;
    if(a){
        cout<<0;
    } else {
        cout<<1;
    }
}
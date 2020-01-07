//
// Created by OLD MAN on 2020/1/7.
//

//小蒜给了你一个整数，要求从个位开始分离出它的每一位数字。
//
//输入格式\
//输入一个整数，整数在 1 到 10^8 之间。
//
//输出格式\
//从个位开始按照从低位到高位的顺序依次输出每一位数字。数字之间以一个空格分开。

#include <iostream>
using namespace std;
int main(){
    long a;
    cin>>a;
    
    while (a > 0){
        cout<<a % 10<<" ";
        a = a / 10;
    }
}
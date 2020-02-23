//
// Created by OLD MAN on 2020/2/23.
//
//有一个函数
//y =     x       x<1
//        2x−1    1≤x<10
//        3x−11   x≥10
//输入格式
//        输入一个整数 x(0≤x≤100)。
//
//输出格式
//        输出对应的 y 的值。


#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    
    if (x < 1){
        cout<<x;
    } else if (x >= 1 && x < 10) {
        cout<<2 * x -1;
    } else if (x >= 10){
        cout<<3 * x - 11;
    }
    
}
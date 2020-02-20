//
// Created by OLD MAN on 2020/2/20.
//
//如果今天是星期三，后天就是星期五；如果今天是星期六，后天就是星期一。我们用数字1到7对应星期一到星期日。给定某一天，请你输出那天的“后天”是星期几。
//
//输入格式
//        输入第一行给出一个正整数 D（1≤D≤7），代表星期里的某一天。
//
//输出格式
//        在一行中输出 D 天的后天是星期几。
#include <iostream>
using namespace std;
int main(){
    int d;
    cin>>d;
    switch (d){
        case 1:
            cout<<3;
            break;
        case 2:
            cout<<4;
            break;
        case 3:
            cout<<5;
            break;
        case 4:
            cout<<6;
            break;
        case 5:
            cout<<7;
            break;
        case 6:
            cout<<1;
            break;
        case 7:
            cout<<2;
            break;
    }
}
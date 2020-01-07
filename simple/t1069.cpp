//
// Created by OLD MAN on 2020/1/6.
//
//蒜头君让一个球从某一高度落下（整数，单位米），每次落地后反跳回原来高度的一半，再落下。编程计算气球在第 10 次落地时，共经过多少米？第 10 次反弹多高？
//
//输入格式
//        输入一个整数 h (1≤h≤100)，表示球的初始高度。
//
//输出格式
//        输出包含两行：
//
//第 1 行：到球第 10 次落地时，一共经过的米数。
//
//第 2 行：第 10 次弹跳的高度。
//
//注意：结果可能是实数，结果用double类型保存。
//
//提示：输出时不需要对精度特殊控制，用cout << ANSWER，或者printf("%g", ANSWER)即可。

#include <iostream>
using namespace std;
int main(){
    double h ;
    cin>>h;

    double sum = h, h10;

    for(int i = 1; i < 10; i++){
        sum += h;
        h = h / 2;
    }

    cout<<sum<<endl<<h/2;
}
//
// Created by OLD MAN on 2020/1/6.
//
//为了能够更清晰整齐地看到输出结果，我们可以去控制输出的格式。
//
//读入三个整数，按每个整数占 8 个字符的宽度，右对齐输出它们。
//
//输入格式
//        只有一行，包含三个int范围内的整数，整数之间以一个空格分开。
//
//输出格式
//        只有一行，按照格式要求依次输出三个整数，之间以一个空格分开。

//#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<setw(8)<<a<<" "<<setw(8)<<b<<" "<<setw(8)<<c;
    return 0;
}

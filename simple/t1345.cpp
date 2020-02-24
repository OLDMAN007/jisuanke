//
// Created by OLD MAN on 2020/2/24.
//
//求实数的绝对值。
//
//输入格式\
//输入一个实数 x。
//
//输出格式\
//输出它的绝对值，结果保留两位小数。
//
//数据范围\
//0≤∣x∣≤1000000

#include<iostream>
using namespace std;
int main(){
    float x;
    cin>>x;

    if(x<0){
        printf("%.2f",-x);
    } else {
        printf("%.2f",x);
    }
}
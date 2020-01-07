//
// Created by OLD MAN on 2019/9/3.
//
//蒜术师给了你一组样本数据，请帮助他计算这组数据的均值。
//
//输入格式
//        输入有两行，第一行包含一个整数 n(1≤n<100)，代表样本容量；
//
//第二行包含 n 个绝对值不超过 1000 的浮点数，代表各个样本数据。
//
//输出格式
//        输出一行，包含一个浮点数，表示均值，精确到小数点后 4 位。

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
//    float a[n],sum=0;     float精度不够
    double a[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    printf("%.4f%",sum/n);
    return 0;
}

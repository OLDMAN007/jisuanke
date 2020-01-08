//
// Created by OLD MAN on 2020/1/8.
//
//将一个数组中的值按逆序重新存放。例如，原来的顺序为 8,6,5,4,1。要求改为 1,4,5,6,8。
//
//输入格式\
//输入为两行：第一行数组中元素的个数 n(1<n<100)，第二行是 n 个整数（整数范围为 [−100,100]），每两个整数之间用空格分隔。
//
//输出格式\
//输出为一行：输出逆序后数组的整数，每两个整数之间用空格分隔。

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    for (int j = n-1; j >= 0; --j) {
        cout<<a[j]<<" ";
    }
}
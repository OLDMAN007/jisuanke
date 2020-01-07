//
// Created by OLD MAN on 2019/9/1.
//

//小蒜蒜的班上有学生若干名，给出每名学生的年龄（整数），求班上所有学生的平均年龄，保留到小数点后两位。
//
//输入格式
//        第一行有一个整数 n(1 <= n <= 100)，表示学生的人数。
//
//其后 n 行每行有 1 个整数，表示每个学生的年龄，取值为 15 到 25。
//
//输出格式
//        输出一行，该行包含一个浮点数，为要求的平均年龄，保留到小数点后两位。

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    float sum=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        sum += a[i];
    }

    float avg;
    avg = sum/n;
    printf("%.2f%" , avg);

    return 0;
}

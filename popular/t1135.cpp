//
// Created by OLD MAN on 2020/1/9.
//

//输入两个 n 行 m 列的矩阵 A 和 B，输出它们的和 A+B。
//
//输入格式
//        第一行包含两个整数 n 和 m，表示矩阵的行数和列数。1≤n≤100，1≤m≤100。
//
//接下来 n 行，每行 m 个整数，表示矩阵 A 的元素。
//
//接下来 n 行，每行 m 个整数，表示矩阵 B 的元素。
//
//相邻两个整数之间用单个空格隔开，每个元素均在 1 ~ 1000 之间。
//
//输出格式
//        n 行，每行 m 个整数，表示矩阵加法的结果。相邻两个整数之间用单个空格隔开。

#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    int a[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>a[i][j];
        }
    }

    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < m; ++i) {
            int b;
            cin>>b;
            cout<<b+a[k][i]<<" ";
        }
        cout<<endl;
    }
}
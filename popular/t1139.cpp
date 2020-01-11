//
// Created by OLD MAN on 2020/1/11.
//
//给定 n 行 m 列的图像各像素点的灰度值，要求用如下方法对其进行模糊化处理：
//
//四周最外侧的像素点灰度值不变；
//
//中间各像素点新灰度值为该像素点及其上下左右相邻四个像素点原灰度值的平均（舍入到最接近的整数）。
//
//输入格式
//        第一行包含两个整数 n 和 m，表示图像包含像素点的行数和列数。1≤n≤100，1≤m≤100。
//
//接下来 n 行，每行 m 个整数，表示图像的每个像素点灰度。相邻两个整数之间用单个空格隔开，每个元素均在 0 ~ 255 之间。
//
//输出格式
//        n 行，每行 m 个整数，为模糊处理后的图像。相邻两个整数之间用单个空格隔开。

#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int n, m;
    cin>>n>>m;

    float a[100][100] = {0};
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>a[i][j];
        }
    }

    float result[100][100];
    memcpy(result, a, sizeof(a));
    for (int k = 1; k < n - 1; ++k) {
        for (int i = 1; i < m - 1; ++i) {
            result[k][i] = (a[k][i] + a[k - 1][i] + a[k + 1][i] + a[k][i - 1] + a[k][i + 1]) / 5;
        }
    }

    for (int l = 0; l < n; ++l) {
        for (int i = 0; i < m; ++i) {
            cout << round(result[l][i]) << " ";
        }
        cout<<endl;
    }
}

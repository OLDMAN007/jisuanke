//
// Created by OLD MAN on 2020/1/9.
//

//计算两个矩阵的乘法。n×m 阶的矩阵 A 乘以 m×k 阶的矩阵 B 得到的矩阵 C 是 n×k 阶的，且 C[i][j]=A[i][0]×B[0][j]+A[i][1]×B[1][j]+……+A[i][m−1]×B[m−1][j](C[i][j] 表示 C 矩阵中第 ii 行第 jj 列元素)。
//
//输入格式
//        第一行为 n,m,k，表示 A 矩阵是 n 行 m 列，B 矩阵是 m 行 k 列，n,m,k 均小于 100；
//
//然后先后输入 A 和 B 两个矩阵，A 矩阵 n 行 m 列，B 矩阵 m 行 k 列，矩阵中每个元素的绝对值不会大于 1000。
//
//输出格式
//        输出矩阵 C，一共 n 行，每行 k 个整数，整数之间以一个空格分开。

#include <iostream>
using namespace std;
int main(){
    int n, m, k;
    cin>>n>>m>>k;

    int a[n][m], b[m][k];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>a[i][j];
        }
    }
    for (int l = 0; l < m; ++l) {
        for (int i = 0; i < k; ++i) {
            cin>>b[l][i];
        }
    }

    int result[100][100] = {0};
    for (int i1 = 0; i1 < n; ++i1) {
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < k; ++j) {
                int l;
                result[i1][j] += a[i1][i] * b[l][i];
            }
        }
    }

    for (int j1 = 0; j1 < n; ++j1) {
        for (int i = 0; i < k; ++i) {
            cout<<result[j1][i]<<" ";
        }
        cout<<endl;
    }
}
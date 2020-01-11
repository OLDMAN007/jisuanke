//
// Created by OLD MAN on 2020/1/11.
//

//扫雷游戏是一款十分经典的单机小游戏。它的精髓在于，通过已翻开格子所提示的周围格地雷数，来判断未翻开格子里是否是地雷。
//
//现在给出 n 行 m 列的雷区中的地雷分布，要求计算出每个非地雷格的周围格地雷数。
//
//注：每个格子周围格有八个：上、下、左、右、左上、右上、左下、右下。
//
//输入格式
//        第一行包含两个整数 n 和 m，分别表示雷区的行数和列数。1≤n≤100,1≤m≤100。
//
//接下来 n 行，每行 m 个字符，'*'表示相应格子中是地雷，'?'表示相应格子中无地雷。字符之间无任何分隔符。
//
//输出格式
//        n 行，每行 m 个字符，描述整个雷区。若相应格中是地雷，则用'*'表示，否则用相应的周围格地雷数表示。字符之间无任何分隔符。

/*
 * 19组测试通过，1组测试不通过
 */
#include <iostream>
using namespace std;
int main(){
    char a[100][100] = {'?'};
    int n, m;
    cin>>n>>m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>a[i][j];
        }
    }

    char result[100][100];
    memcpy(result, a, sizeof(a));
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < m; ++i) {
            if (a[k][i] == '?'){
                int sum = 0;

                if (a[k-1][i-1] == '*'){
                    sum++;
                }
                if (a[k-1][i] == '*'){
                    sum++;
                }
                if (a[k-1][i+1] == '*'){
                    sum++;
                }
                if (a[k][i-1] == '*'){
                    sum++;
                }
                if (a[k][i+1] == '*'){
                    sum++;
                }
                if (a[k+1][i-1] == '*'){
                    sum++;
                }
                if (a[k+1][i] == '*'){
                    sum++;
                }
                if (a[k+1][i+1] == '*'){
                    sum++;
                }

                result[k][i] = (char)(sum + 48);
            }
        }
    }

    for (int l = 0; l < n; ++l) {
        for (int i = 0; i < m; ++i) {
            cout<<result[l][i];
        }
        cout<<endl;
    }
}

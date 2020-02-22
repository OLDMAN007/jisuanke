//
// Created by OLD MAN on 2020/2/22.
//

//蒜术师想让你编写程序，输入 n 的值，求 1/1 - 1/2 + 1/3 - 1/4 + 1/5 - 1/6 ⋯⋯ ((-1)^(n-1))/n 的值。
//
//输入格式\
//输入一个正整数 n。1≤n≤1000。
//
//输出格式\
//输出一个实数，为表达式的值，保留到小数点后四位。

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    float result = 0;
    for (float i = 1; i <= n; ++i) {
        if ((int)i % 2 == 0){
            result -= 1/i;
        } else {
            result += 1/i;
        }
    }

    printf("%.4f",result);
}
//
// Created by OLD MAN on 2020/1/8.
//

//求 10000 以内 n 的阶乘。
//
//输入格式
//        只有一行输入，整数 n(0≤n≤10000)。
//
//输出格式
//        一行，即 n! 的值。

#include <iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;

    int result[35670]={1,0};//result
    int carry = 0;//进位
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < 35669; ++j) {
            int flag = i * result[j] + carry;
            result[j] = flag % 10;
            carry = flag / 10;
        }
    }

    for (int k = 35669; k >= 0; --k) {
        if (!result[k]){
            continue;
        } else {
            for (int i = k; i >= 0; --i) {
                cout<<result[i];
            }
        }
        break;
    }
}

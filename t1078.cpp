//
// Created by OLD MAN on 2020/1/7.
//

//蒜头君有两个正整数 m 和 k，其中 1<m<100000，1<k<5，判断 m 能否被 19 整除，且各位数字中恰好含有 k 个 3。如果满足条件，则输出"YES"，否则，输出"NO"。
//
//输入格式
//        m 和 k 的值，中间用单个空格间隔。
//
//输出格式
//        满足条件时输出"YES"，不满足时输出"NO"。

#include <iostream>
using namespace std;
int main(){
    int m, k;
    cin>>m>>k;

    if (!(m % 19)) {
        int count = 0;

        while (m) {
            if (m % 10 == 3) {
                count ++;
            }
            m /= 10;
        }

        if (count == k) {
            cout<<"YES";
        } else {
            cout<<"NO";
        }
    } else {
        cout<<"NO";
    }
}
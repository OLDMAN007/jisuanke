//
// Created by OLD MAN on 2020/1/7.
//

//求两个大的正整数相减的差。
//
//输入格式
//        共 2 行，第 1 行是被减数 a，第 2 行是减数 b(a>b)。每个大整数不超过 200 位，不会有多余的前导零。
//
//输出格式
//        一行，即所求的差。

#include <iostream>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;

    int n[205], m[205], s[205];
    for (int i = 0; i < a.length(); ++i) {
        n[i] = a[a.length()-i-1] - '0';
    }
    for (int j = 0; j < b.length(); ++j) {
        m[j] = b[b.length()-j-1] - '0';
    }

    for (int k = 0; k < a.length(); ++k) {
        if(n[k] < m[k]){
            n[k+1]--;
            s[k] = n[k] + 10 - m[k];
//            if (m[k]){
//                s[k] = n[k] + 10 - m[k];
//            } else {
//                s[k] = n[k];
//            }
        } else {
            s[k] = n[k] - m[k];
//            if (m[k]) {
//                s[k] = n[k] - m[k];
//            } else {
//                s[k] = n[k];
//            }
        }
    }

    for (int l = a.length()-1; l > 0; --l) {
        if(!s[l]){
            continue;
        } else {
            for (int i = l; i >= 0; --i) {
                cout<<s[i];
            }
        }
        break;
    }
}
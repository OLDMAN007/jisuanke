//
// Created by OLD MAN on 2020/2/27.
//
//给定一个只包含小写字母的字符串，请你找到第一个仅出现一次的字符。如果没有，输出"no"。
//
//输入格式\
//一个字符串，长度小于 100000。
//
//输出格式\
//输出第一个仅出现一次的字符，若没有则输出"no"。

#include <iostream>
using namespace std;
int main(){
    char a[100000], i=0;
    char x;
    while ((x=cin.get())!='\n'){
        cin.unget();
        cin>>a[i++];
    }

    for (int j = 0; j < i; ++j) {
        for (int k = 0; k < i; ++k) {
            if (a[k] == a[j] && k !=j){
                break;
            }
            if (k+1==i){
                cout<<a[j];
                return 0;
            }
        }
        if (j+1 == i){
            cout<<"no";
            return 0;
        }
    }
}
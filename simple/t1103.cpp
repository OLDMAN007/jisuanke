//
// Created by OLD MAN on 2020/2/26.
//

//输入一行字符，统计出其中数字字符的个数。
//
//输入格式\
//一行字符串，总长度不超过 255。
//
//输出格式\
//输出为 1 行，输出字符串里面数字字符的个数

#include <iostream>
using namespace std;
int main(){
    char c;

    int i = 0, count = 0;
    while ((c=cin.get())!='\n'){
//        cin.unget();  //重新放回到輸入流中
//        cin>>a;
        if (c >= '0' && c<= '9'){
            count++;
        }
    }

    cout<<count;
}
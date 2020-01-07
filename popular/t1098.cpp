//
// Created by OLD MAN on 2020/1/6.
//
//求两个不超过 200 位的非负整数的和。
//
//输入格式\
//有两行，每行是一个不超过 200 位的非负整数，可能有多余的前导 0。
//
//输出格式\
//一行，即相加后的结果。结果里不能有多余的前导 0，即如果结果是 342，那么就不能输出为 0342。
//#include<bits/stdc++.h>

#include <iostream>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;

    //将输入的数值存到数组中
    int m[205],n[205],s[205];
    for(int i=0;i<a.length();i++){
        m[i] = a[a.length()-i-1] - '0';//数字对应的ASCII码表中的值减去'0'对应的值
    }
    for(int i=0;i<b.length();i++){
        n[i] = b[b.length()-i-1] - '0';
    }

    //计算结果，并保存到数组中
    int k=(a.length()>b.length())?a.length():b.length();
    s[0]=0;
    for(int i=0;i<k;i++){
        s[i+1]=(s[i]+m[i]+n[i])/10;//计算进位
        s[i]=(s[i]+m[i]+n[i])%10;//计算当前位
    }

    for(int i=k-1;i>=0;i--){
        //去除结果前多余的'0'
        if (!s[i]) {
            continue;//结束当前循环体，继续遍历
        } else {
            //循环输出计算结果
            for(int j=i;j>=0;j--){
                cout<<s[j];
            }
        }
        //输出结束，跳出循环
        break;
    }
}

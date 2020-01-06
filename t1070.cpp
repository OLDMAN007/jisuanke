//
// Created by OLD MAN on 2020/1/6.
//
//蒜头君：所谓角谷猜想，是指对于任意一个正整数，如果是奇数，则乘 3 加 1，如果是偶数，则除以 2，得到的结果再按照上述规则重复处理，最终总能够得到 1。
// 如，假定初始整数为 5，计算过程分别为 16、8、4、2、1。
//
//程序要求输入一个整数，将经过处理得到 1 的过程输出来。
//
//输入格式 \
//一个正整数 N(N≤2,000,000)。
//
//输出格式 \
//从输入整数到 1 的步骤，每一步为一行，每一部中描述计算过程。最后一行输出"End"。如果输入为 1，直接输出"End"。
//
//数据保证中途计算不会超过int范围。

#include <iostream>
using namespace std;

void jiaogu(int n){
    if (n == 1) ;
    else if (n % 2 > 0){
        cout<<n<<"*3+1="<<n*3+1<<endl;
        jiaogu(n * 3 + 1);
    }
    else if (n % 2 == 0){
        cout<<n<<"/2="<<n/2<<endl;
        jiaogu(n /2);
    }
}

int main(){
    int n;
    cin>>n;

    jiaogu(n);

    cout<<"End";
}
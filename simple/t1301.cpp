//
// Created by OLD MAN on 2020/2/20.
//
//憨厚的蒜头君昨天捡到了 3 块小石头，他想再去捡一个小石头，让这 4 个石头正好一共重 20 斤，请问他应该去捡一个多少斤的石头?
//
//输入格式
//        三个整数 a,b,c，是这三个石头的重量(斤)。
//
//输出格式
//        一个整数，是第四个石头的重量(斤)。
//
//数据范围
//0<a,b,c,a+b+c≤20。

#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<20-a-b-c;
}

//
// Created by OLD MAN on 2019/9/1.
//
//蒜头君买了一箱 n 个苹果，很不幸的是买完时箱子里混进了一条虫子。虫子每 x 小时能吃掉一个苹果，假设虫子在吃完一个苹果之前不会吃另一个，那么经过 y 小时你还有多少个完整的苹果？

#include<iostream>
using namespace std;
int main(){
    int n,x,y;
    cin>>n>>x>>y;
    if(y%x == 0)
        n = n - y/x;
    else
        n = n - y/x -1;
    if(n < 0)
        n=0;
    cout<<n;
    return 0;
}
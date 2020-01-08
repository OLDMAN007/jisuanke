//
// Created by OLD MAN on 2020/1/7.
//
//救生船从大本营出发，营救若干屋顶上的人回到大本营，屋顶数目以及每个屋顶的坐标和人数都将由输入决定，求出所有人都到达大本营并登陆所用的时间。
//
//在直角坐标系的原点是大本营，救生船每次从大本营出发，救了人之后将人送回大本营。坐标系中的点代表屋顶，每个屋顶由其位置坐标和其上的人数表示。
//
//救生船每次从大本营出发，以速度 50 米/分钟驶向下一个屋顶。达到一个屋顶后，救下其上的所有人，每人上船 1 分钟。然后船原路返回，回到大本营，每人下船 0.5 分钟。假设原点与任意一个屋顶的连线不穿过其它屋顶。
//
//输入格式 \
//第一行，一个整数，表示屋顶数 n (1≤n≤100)。
//
//接下来依次有 n 行输入，每一行前两个实数表示屋顶相对于大本营的平面坐标位置 (x,y)（单位是米）、然后一个表示人数的整数r，数之间以一个空格分开。0≤x,y≤100,1≤r≤100。
//
//输出格式 \
//一行，救援需要的总时间，精确到分钟 (向上取整)。

//#include<bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main(){
    int n=0,r=0;
    double x=0,y=0;
    cin>>n;
    double count=0;
    while(n--){
        cin>>x>>y>>r;
        count += sqrt(x*x+y*y)/25 + 1.5*r;
    }
    cout<<fixed<<setprecision(0);
    cout<<(int)ceil(count);
}
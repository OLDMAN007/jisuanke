//
// Created by OLD MAN on 2019/9/5.
//
//蒜头君在去年赚了一大笔钱！他想要把这些钱用于投资，并对自己能得到多少收益感到好奇。
//
//已知投资的复合年利率为 R（0 到 20 之间的整数）。蒜头君现有总值为 M 的钱（100 到 1,000,000 之间的整数）。他清楚地知道自己要投资 Y 年（范围 0 到 400）。
//
//请帮助他计算最终他会有多少钱，并输出它的整数部分。数据保证输出结果在 32 位有符号整数范围内。
//
//输入格式
//        一行包含三个整数 R，M，Y，相邻两个整数之间用单个空格隔开。
//
//输出格式
//        一个整数，即蒜头君最终拥有多少钱（整数部分）。
#include <iostream>
using namespace std;
int main(){
    int y;
//    float r;  float就不通过……
    double r, m;
    cin>>r>>m>>y;
    r = r*0.01 +1;
    for(int i=0;i<y;i++){
        m = m*r;
    }
//    printf("%.0f",m);
    cout<<(int)m;
}

/*
 *
#include <stdio.h>
void main() {
	int r, m, y,i;
	scanf("%d %d %d",&r,&m,&y);
	double sum = (double)m * (r / 100.0+1.0);//不好确定顺序就多加小括号
	for (i = 1; i < y;i++) {
		sum *= (r / 100.0+1.0);
	}printf("%d", (int)sum);
}
 */
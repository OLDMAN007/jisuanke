//
// Created by OLD MAN on 2020/1/6.
//
//鸡尾酒疗法，原指 “高效抗逆转录病毒治疗”（HAART），由美籍华裔科学家何大一于 1996 年提出，是通过三种或三种以上的抗病毒药物联合使用来治疗艾滋病。
// 该疗法的应用可以减少单一用药产生的抗药性，最大限度地抑制病毒的复制，使被破坏的机体免疫功能部分甚至全部恢复，从而延缓病程进展，延长患者生命，提高生活质量。
// 人们在鸡尾酒疗法的基础上又提出了很多种改进的疗法。为了验证这些治疗方法是否在疗效上比鸡尾酒疗法更好，可用通过临床对照实验的方式进行。
// 假设鸡尾酒疗法的有效率为 x，新疗法的有效率为 y，如果 y−x 大于 5%，则效果更好，如果 x−y 大于 5%，则效果更差，否则称为效果差不多。
//
//下面蒜头君给出 n 组临床对照实验，其中第一组采用鸡尾酒疗法，其他 n−1 组为各种不同的改进疗法。请写程序判定各种改进疗法效果如何。
//
//输入格式
//        第一行为整数 n(1<n≤20)；
//
//其余 n 行每行两个整数，第一个整数是临床实验的总病例数(小于等于 10000)，第二个疗效有效的病例数。
//
//这 n 行数据中，第一行为鸡尾酒疗法的数据，其余各行为各种改进疗法的数据。
//
//输出格式
//        有 n−1 行输出，分别表示对应改进疗法的效果：
//
//如果效果更好，输出"better"；
//如果效果更差，输出"worse"；
//否则输出"same"。

#include <iostream>
using namespace std;
int main(){
    float n, sum, effective;
    cin>>n>>sum>>effective;
    float rowEfficiency = effective / sum * 100;
    for(int i = 1; i < n; i++){
        float sum , effective;
        cin>>sum>>effective;
        float improveEfficiency = effective / sum * 100;
        if (improveEfficiency - rowEfficiency > 5) cout<<"better"<<endl;
        else if (rowEfficiency -  improveEfficiency >5) cout<<"worse"<<endl;
        else cout<<"same"<<endl;
    }
}
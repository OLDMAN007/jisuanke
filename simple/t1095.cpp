//
// Created by OLD MAN on 2020/1/9.
//
//一个长度为 n(n>0) 的序列中存在“有趣的跳跃”当前仅当相邻元素的差的绝对值经过排序后正好是从 1 到 (n−1)。例如，1 4 2 3 存在“有趣的跳跃”，因为差的绝对值分别为 3,2,1。当然，任何只包含单个元素的序列一定存在“有趣的跳跃”。你需要写一个程序判定给定序列是否存在“有趣的跳跃”。
//
//输入格式\
//一行，第一个数是 n(0<n<3000)，为序列长度，接下来有 n 个整数，依次为序列中各元素，各元素的绝对值均不超过 1,000,000,000。
//
//输出格式\
//一行，若该序列存在“有趣的跳跃”，输出"Jolly"，否则输出"Not jolly"。

#include <iostream>
using namespace std;

void jolly(int a[], int size){
    for (int i = 0; i < size - 1; ++i) {
        if (!(a[i + 1] - a[i] == 1)){
            cout<<"Not jolly";
            return;
        }
    }
    cout<<"Jolly";
}

void sort(int a[], int size){
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i; j < size; ++j) {
            if (a[j] < a[i]){
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
    }
    jolly(a, size);
}

int difference(int a[], int size){
    int b[size - 1];
    for (int i = 0; i < size - 1; ++i) {
        b[i] = abs(a[i + 1] - a[i]);
    }
    sort(b,size - 1);
}

int main(){
    int n;
    cin>>n;

    if (n == 1){
        cout<<"Jolly";
        return 0;
    }

    int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }

    difference(a, n);
}
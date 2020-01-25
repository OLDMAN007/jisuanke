//
// Created by OLD MAN on 2020/1/24.
//

//给出一个元素个数不超过 30 的集合，元素为 [1,10^8]范围内的整数，求该集合所有子集的元素之和。
//
//输入格式
//        若干个数，表示集合中的元素。
//
//输出格式
//        一个整数，表示所有子集元素之和。


/*
 *    子集的个数为2的n次幂
 *    result = 所有元素和 * 子集个数 / 2
 */
#include <iostream>
using namespace std;

//返回子集个数
int num(int size){
    return 1<<size;
}

//返回所有元素的和
int sum(int a[], int size){
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += a[i];
    }
    return sum;
}

int main(){
    int a[30], size = 0;

    while (size == 0 || cin.eof()){
        cin>>a[size];
        size++;
    }

    int result = sum(a,size) * num(size) / 2;
    cout<<result;
}
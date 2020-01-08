//
// Created by OLD MAN on 2020/1/8.
//
//蒜头君有一个正整数 n，他想求第 n 小的质数。
//
//输入格式\
//一个不超过 10000 的正整数 n。
//
//输出格式\
//第 n 小的质数。

#include <iostream>
using namespace std;

bool isPrime(unsigned long n) {
    if (n <= 3) {
        return n > 1;
    } else if (n % 2 == 0 || n % 3 == 0) {
        return false;
    } else {
        for (unsigned short i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) {
                return false;
            }
        }
        return true;
    }
}
//bool isPrime(long n){
//    if (n <= 3){
//        return n > 1;
//    }
//    for (int i = 2; i*i <= n; ++i) {
//        if (n % i == 0 ){
//            return false;
//        }
//    }
//    return true;
//}

int main(){
    int n;
    cin>>n;

    int count = 0;
    for (int i = 2; true; ++i) {
        if (isPrime(i)){
            count++;
        }
        if (count == n){
            cout<<i;
            return 0;
        }
    }
}
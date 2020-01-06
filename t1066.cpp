//
// Created by OLD MAN on 2020/1/6.
//

//小蒜蒜最近学习了菲波那契数列。
//
//菲波那契数列是指这样的数列：数列的第一个和第二个数都为 1，接下来每个数都等于前面 2 个数之和。
//
//给出一个正整数 k，要求菲波那契数列中第 k 个数是多少。
//
//输入格式
//        输入一行，包含一个正整数 k。（1 ≤ k ≤ 46）
//
//输出格式
//        输出一行，包含一个正整数，表示菲波那契数列中的第 k 个数。

/*
 * 此方法运行超时
 */
//#include <iostream>
//using namespace std;
//
//int fibonacci(long k){
//    if (k <= 2){
//        return 1;
//    } else {
//        return fibonacci(k - 1) + fibonacci(k - 2);
//    }
//}
//
//int main(){
//    int k;
//    cin>>k;
//    cout<<fibonacci(k)<<endl;
//}


#include <iostream>
using namespace std;

int main(){
    int k;
    long f[50] = {1,1};
    cin>>k;

    for(int i = 2; i < k; i++){
        f[i] = f[i - 1] + f[i -2];
    }

    cout<<f[k-1];
}
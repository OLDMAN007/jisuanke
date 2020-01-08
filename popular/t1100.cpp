//
// Created by OLD MAN on 2020/1/8.
//
//任意给定一个正整数 N(N≤100)，计算 2 的 N 次方的值。
//
//输入格式\
//输入一个正整数 N。
//
//输出格式\
//输出 2 的 N 次方的值。
//
//提示\
//高精度计算。

#include <iostream>
using namespace std;
int main(){
    int n, result[50] = {1, 0};
    cin>>n;

    int carry = 0;//进位
    while (n--) {
        for (int j = 0; j < 50; ++j) {
            int flag = result[j] * 2 + carry;
            result[j] = flag % 10;
            carry = flag / 10;
        }
    }

    for (int j = 49; j >= 0 ; --j) {
        if (!result[j]){
            continue;
        } else {
            for (int i = j; i >= 0; --i) {
                cout<<result[i];
            }
        }
        break;
    }
}


/*
 * 小垃圾，long long 也不够long啊
 */
//#include <iostream>
//using namespace std;
//
//long long pow(int n){
//    if (n == 1){
//        return 2;
//    } else {
//        return pow(n - 1) * 2;
//    }
//}
//
//int main(){
//    int n;
//    cin>>n;
//    cout<<pow(n);
//}

/*
 * 什么玩意儿，没看懂
 */
//#include<iostream>
//#include<cstring>
//#include<cstdio>
//#include<string>
//#include<vector>
//#include<cstdlib>
//#include<algorithm>
//using namespace std;
//char a[1005][1005];
//int main()
//{
//    int n;
//    a[0][0] = '1';
//    int before = 1;
//    for(int i = 1;i <= 100; ++i)
//    {
//        int k = 0;
//        int mod = 0;
//        for(int j = 0;j < before;++j)
//        {
//            a[i][k++] = ((a[i - 1][j] - '0') * 2 + mod) % 10+48;
//            mod = (((a[i - 1][j] - '0') * 2) + mod) / 10;
//        }
//        if(mod)
//            a[i][k++] = mod + 48;
//        before=k;
//    }
//    while(cin>>n)
//    {
//        int len=strlen(a[n]);
//        for(int i=len-1;i>=0;--i)
//            cout<<a[n][i];
//        cout<<endl;
//    }
//}

/*
 * 可了
 */
//#include<stdio.h>
//
//int main()
//{
//    int a[50]={0};//创建保存数据的数组
//    a[49]=1;//用数组存储
//    int n;
//    int i;
//    int x=0;// x代表进位
//    scanf("%d",&n);
//    while(n--){      //做n次循环
//        int i=49;
//        while(i>0){
//            int flag=2 * a[i]+x;  //计算2的阶乘
//            a[i]=flag % 10;    //留下个位
//            x=flag / 10;      //取走十位
//            i--;
//        }
//    }
//
//    for(i=0;i<50;i++)     //出去数组多余的0
//        if(a[i]!=0) break;
//    for(;i<50;i++)      //按序输出
//        printf("%d",a[i]);
//    return 0;
//
//}
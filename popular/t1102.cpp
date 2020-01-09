//
// Created by OLD MAN on 2020/1/8.
//

//求 10000 以内 n 的阶乘。
//
//输入格式
//        只有一行输入，整数 n(0≤n≤10000)。
//
//输出格式
//        一行，即 n! 的值。

/*
 * 程序运行超时
 */
//#include <iostream>
//using namespace std;
//int main(){
//    int n ;
//    cin>>n;
//
//    int result[35670]={1,0};//result
//    int carry = 0;//进位
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 0; j < 35669; ++j) {
//            int flag = i * result[j] + carry;
//            result[j] = flag % 10;
//            carry = flag / 10;
//        }
//    }
//
//    for (int k = 35669; k >= 0; --k) {
//        if (!result[k]){
//            continue;
//        } else {
//            for (int i = k; i >= 0; --i) {
//                cout<<result[i];
//            }
//        }
//        break;
//    }
//}


#include<iostream>
#include<cstring>
using namespace std;
int a[100000];
int main()
{
    int n;
    int i,j;

    cin>>n;
    a[0]=1,a[1]=1;
    for(i=1;i<=n;i++)//高精乘
    {
        for(j=1;j<=a[0];j++)
            a[j]*=i;
        for(j=1;j<=a[0];j++)
        {
            a[j+1]+=a[j]/10;
            a[j]%=10;
        }
        if(a[j]>0)//进位处理
        {
            while(a[j]>10)
            {
                a[j+1]+=a[j]/10;
                a[j]%=10;
                j++;
            }
            a[0]=j;
        }
    }
    for(i=a[0];i>=1;i--)
        cout<<a[i];
    return 0;
}
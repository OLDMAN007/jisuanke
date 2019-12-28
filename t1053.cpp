//
// Created by OLD MAN on 2019/9/3.
//
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    double a[n],sum=0,avg;      //float精度不够
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    avg=sum/n;
    printf("%.0f %.5f",sum,avg);
}

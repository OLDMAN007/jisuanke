//
// Created by OLD MAN on 2019/9/5.
//

#include <iostream>
using namespace std;
int main(){
//    float x,n;
//  float 精度不够，通过19组测试，1组不通过
    double x,n;
    cin>>x>>n;
    for(int i=0;i<n;i++){
        x = x*1.001;
    }
    printf("%.4f",x);
}
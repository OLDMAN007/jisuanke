//
// Created by OLD MAN on 2020/1/6.
//

//#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    for(int i = 1;i<=3;i++){
        for(int j = i;j<3;j++){
            cout<<" ";
        }
        for(int j = 1;j<=2*i-1;j++){
            cout<<a;
        }
        cout<<endl;
    }
    for(int i =2;i>0;i--){
        for(int j=i;j<3;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<a;
        }
        cout<<endl;
    }
    return 0;
}

//
// Created by OLD MAN on 2020/1/6.
//

//#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    int m[205],n[205],s[205];
    for(int i=0;i<a.length();i++){
        m[i] = a[a.length()-i-1] - '0';
    }
    for(int i=0;i<b.length();i++){
        n[i] = b[b.length()-i-1] - '0';
    }
    int k=(a.length()>b.length())?a.length():b.length();
    s[0]=0;
    for(int i=0;i<k;i++){
        s[i+1]=(s[i]+m[i]+n[i])/10;
        s[i]=(s[i]+m[i]+n[i])%10;
    }
    for(int i=k;i>=0;i--){
        if(!s[i]){
            continue;
        }else{
            for(int j=i;j>=0;j--){
                cout<<s[j];
            }
        }break;
    }
}

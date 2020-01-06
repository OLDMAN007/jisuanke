//
// Created by OLD MAN on 2020/1/6.
//

//#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    bool a[n];
    int w=1;
    for(int i=0;i<n;i++){
        a[i]=true;
    }
    for(int i=1;i<=m;i++){
        if(i==1){
            for(int j=0;j<n;j++){
                a[j]=false;
            }
        }
        else if(i==2){
            for(int j=0;j<(n+1)/2;j++)
                a[2*j+1]=1;
        }
        else
            for(int j=1;j<=n/i;j++){
                a[i*j-1]=!a[i*j-1];
            }
    }
    for(int i=0;i<n;i++){
        if(!a[i]){
            if(w){
                cout<<i+1;
                w=0;
            }else{
                cout<<","<<i+1;
            }
        }
    }
}

//
// Created by OLD MAN on 2020/1/6.
//
//#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int n,a,b;
    cin>>n>>a>>b;
    int x[a],y[b];
    int w=0,v=0;
    for(int i=0;i<a;i++) cin>>x[i];
    for(int i=0;i<b;i++) cin>>y[i];
    for(int i=0;i<n;i++){
        if((x[i%a]==0&&y[i%b]==2)||(x[i%a]==2&&y[i%b]==5)||(x[i%a]==5&&y[i%b]==0))
            w++;
        if ((x[i%a]==2&&y[i%b]==0)||(x[i%a]==5&&y[i%b]==2)||(x[i%a]==0&&y[i%b]==5))
            v++;
    }
    if(w>v) cout<<"A";
    if(w==v) cout<<"draw";
    if(w<v) cout<<"B";
}


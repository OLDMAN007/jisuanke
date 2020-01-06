//
// Created by OLD MAN on 2020/1/6.
//

//#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if((!(n%4)&&(n%100))||!(n%400))
        cout<<"Y";
    else
        cout<<"N";
}
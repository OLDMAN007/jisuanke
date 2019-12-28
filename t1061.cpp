//
// Created by OLD MAN on 2019/9/5.
//

#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n],num=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==m)
            num++;
    }
    cout<<num;
}
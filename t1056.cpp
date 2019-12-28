//
// Created by OLD MAN on 2019/9/3.
//

#include <iostream>
using namespace std;
int main(){
    int n,a=0,b=0,c=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        a+=n1;
        b+=n2;
        c+=n3;
    }
    cout<<a<<" "<<b<<" "<<c<<" "<<a+b+c;
}
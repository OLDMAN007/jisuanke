//
// Created by OLD MAN on 2019/9/3.
//

#include <iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    if(m%2==0)
        m+=1;
    if(n%2==0)
        n-=1;
//    cout<<0.5*(m+n)*(n-m+2)/2;
    int num=(n-m)/2+1;
    cout<<num*m + num*(num-1);
}
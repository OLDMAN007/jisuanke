//
// Created by OLD MAN on 2019/9/3.
//
#include <iostream>
using namespace std;
int main(){
    int n,max=0;
    cin>>n;
    for(int i=0,a;i<n;i++){
        cin>>a;
        if(a>=max)
            max=a;
    }
    cout<<max;

}

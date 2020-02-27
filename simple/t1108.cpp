//
// Created by OLD MAN on 2020/2/27.
//

#include<iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    for(int i=0;i<a.length();i++){
        if(a[i] == 'A'){
            cout<<"T";
        } else if(a[i]=='T'){
            cout<<"A";
        } else if(a[i]=='G'){
            cout<<"C";
        } else if(a[i]=='C'){
            cout<<"G";
        }
    }
}

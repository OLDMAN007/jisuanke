//
// Created by OLD MAN on 2019/9/3.
//

#include <iostream>
using namespace std;
int main(){
    int a=0,b=0,c=0,n;
    cin>>n;
    int m[n];
    for(int i=0;i<n;i++){
        cin>>m[i];
        if(m[i]==1)
            a++;
        if(m[i]==5)
            b++;
        if(m[i]==10)
            c++;
    }
    cout<<a<<endl<<b<<endl<<c<<endl;
}
//
// Created by OLD MAN on 2019/9/5.
//

#include <iostream>
using namespace std;
int main(){
    int n,k,sum,i;
    cin>>n>>k;
    float m = 200;
    for(i=1;i<=20;i++){
        sum = n*i;
        if(sum >= m)
            break;
        m += m*k*0.01;
//        cout<<sum<<" "<<m<<endl;
    }
    if(i>20){
        cout<<"Impossible";
        return 0;
    }
    cout<<i;
}z
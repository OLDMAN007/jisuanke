//
// Created by OLD MAN on 2019/9/3.
//

#include <iostream>
using namespace std;
int main(){
    int n,max=0,min=1001;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>max)
            max=a[i];
        if(a[i]<=min)
            min=a[i];
    }
    cout<<max-min;
    return 0;
}
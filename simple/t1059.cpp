//
// Created by OLD MAN on 2019/9/3.
//

#include <iostream>
using namespace std;
int main(){

    // why 20组测试，通过8组
//    int m,n;
//    cin>>m>>n;
//    if(m%17 != 0)
//        m += 17 - m%17;
//    if(n%17 != 0)
//        n -= 17 - n%17;
//    //cout<<m<<" "<<n<<endl;
//     int num = (n-m)/17 + 1;
//    //cout<<num<<endl;
//    cout<<0.5*num*(n+m);

    int m,n;
    cin>>m>>n;
    if(m%17 != 0)
        m += 17 - m%17;
    if(n%17==0)
        n+=1;
    int sum=0;
    for(int i=m;i<n;i+=17){
        sum+=i;
    }
    cout<<sum;
}
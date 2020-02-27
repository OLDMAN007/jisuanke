//
// Created by OLD MAN on 2020/2/27.
//
//猜拳
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string a,b;
        cin>>a>>b;
        if(a=="Rock" && b=="Scissors"){
            cout<<"Player1"<<endl;
        } else if(a=="Rock" && b=="Paper"){
            cout<<"Player2"<<endl;
        } else if(a=="Scissors" && b=="Rock"){
            cout<<"Player2"<<endl;
        }else if(a=="Scissors" && b=="Paper"){
            cout<<"Player1"<<endl;
        }else if(a=="Paper" && b=="Rock"){
            cout<<"Player1"<<endl;
        }else if(a=="Paper" && b=="Scissors"){
            cout<<"Player2"<<endl;
        } else {
            cout<<"Tie"<<endl;
        }
    }
}
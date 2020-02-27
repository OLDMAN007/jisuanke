//
// Created by OLD MAN on 2020/2/27.
//
//密文\A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
//
//明文\V W X Y Z A B C D E F G H I J K L M N O P Q R S T U
#include <iostream>
using namespace std;

string sec(string x){
    for (int i = 0; i < x.length(); ++i) {
        if (x[i]+21 > 90){
            x[i]= (x[i]+21)%90+64;
        } else if(x[i] == ','){

        } else {
            x[i]= x[i] + 21;
        }
    }
    return x;

}

int main(){
    char x;
    while ((x=cin.get()) != '\n'){
        cin.unget();
        string a;
        cin>>a;
        cout<<sec(a)<<" ";
    }
}
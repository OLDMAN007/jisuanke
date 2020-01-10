//
// Created by OLD MAN on 2020/1/10.
//

//假定蒜厂新进了 m(10≤m≤999) 本图书，它们都是由 n(1≤n≤26) 个作者独立或相互合作编著的。假设 m 本图书编号为整数（1 到 999），作者的姓名为字母（'A'到'Z'），请根据图书作者列表找出参与编著图书最多的作者和他的图书列表。
//
//输入格式
//        第一行为所进图书数量 m，其余 m 行，每行是一本图书的信息，其中第一个整数为图书编号，接着一个空格之后是一个由大写英文字母组成的没有重复字符的字符串，每个字母代表一个作者。
//
//输出格式
//        输出有多行：
//
//第一行为出书最多的作者字母（如果有多个输出姓名字典序最小的）；
//
//第二行为作者出书的数量；
//
//其余各行为作者参与编著的图书编号（按输入顺序输出）。

#include <iostream>
using namespace std;
//
//int toInt(string str){
//    int a = 0;
//    for (int i = 0; i < str.length(); ++i) {
//        a *= 10;
//        a += (int)str[i] - 48;
//    }
//    return a;
//}

int main(){
    int n;
    cin>>n;

    string a[1000][2];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin>>a[i][j];
        }
    }

    string b[26][1001];
    for (int k = 0; k < 26; ++k) {
        b[k][0] = (char)(65 + k);//65 -> A
        b[k][1] = (char)48;//48 -> 0
    }


    for (int l = 0; l < n; ++l) {
        string users = a[l][1];
        for (int i = 0; i < users.length(); ++i) {
            char user = users[i];

            int p = (int)user - 65;
            b[p][1] = to_string(stoi(b[p][1]) + 1);
            int max = stoi(b[p][1]);
            b[p][max + 1] = a[l][0];
        }
    }

    int max = 0;
    int user = 0;
    for (int m = 0; m < 26; ++m) {
        if (stoi(b[m][1]) > max){
            max = stoi(b[m][1]);
            user = (int)b[m][0][0] - 65;
        }
    }

    cout<<b[user][0]<<endl<<stoi(b[user][1])<<endl;
    for (int i1 = 0; i1 < max + 2; ++i1) {
        cout<<b[user][i1 + 2]<<endl;
    }
}
#include <iostream>
#include <sstream>
#include <cmath>
#include <iomanip>

using namespace std;
int main() {
    cout << "Hello, World!" << endl;

    //int转string
    {
        string to_string(int val);

        string to_string(long val);

        string to_string(long long val);

        string to_string(unsigned val);

        string to_string(unsigned long val);

        string to_string(unsigned long long val);

        string to_string(float val);

        string to_string(double val);

        string to_string(long double val);
    }

    //string转int
    {
        istringstream is("12"); //构造输入字符串流，流的内容初始化为“12”的字符串
        int i;
        is >> i; //从is流中读入一个int整数存入i中
    }
    {
        std::string str_dec = "2001, A Space Odyssey";
        std::string str_hex = "40c3";
        std::string str_bin = "-10010110001";
        std::string str_auto = "0x7f";

        std::string::size_type sz;   // alias of size_t

        int i_dec = std::stoi (str_dec,&sz);
        int i_hex = std::stoi (str_hex,nullptr,16);
        int i_bin = std::stoi (str_bin,nullptr,2);
        int i_auto = std::stoi (str_auto,nullptr,0);

        std::cout << str_dec << ": " << i_dec << " and [" << str_dec.substr(sz) << "]\n";
        std::cout << str_hex << ": " << i_hex << '\n';
        std::cout << str_bin << ": " << i_bin << '\n';
        std::cout << str_auto << ": " << i_auto << '\n';
    }

    //四舍五入函数
    {
        float a = 1.4, b = 1.5;
        floor(a);//不大于自变量的最大整数
        ceil(a);//不小于自变量的最小整数
        round(a);//四舍五入到最邻近的整数
    }

    //copy数组
    {
        int a[10][10] = {0};
        int b[10][10];
        memcpy(b, a, sizeof(a));
    }

    //保留小數點後n位
    {
        //第一种写法
        cout<<setiosflags(ios::fixed)<<setprecision(2);
        //第二种写法
        cout.setf(ios::fixed);
        cout<<setprecision(2);
        //第三种写法
        cout<<fixed<<setprecision(2);

        printf("%.4f",0.23456);
    }

    return 0;
}
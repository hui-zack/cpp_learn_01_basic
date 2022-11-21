// Create by hui on 2021/10/30 22:12
// Code describe: 字符定义方式
// Keyword: char

#include <iostream>

using namespace std;

int main() {
    char ch1 = 'a';                                     //* 定义char类型变量; 只能是单引号
    cout << "打印值: " << ch1 << endl;
    cout << "char占用空间: " << sizeof(ch1) << "字节" << endl;
    cout << "输出对应ASCII码: " << int(ch1) << endl;

    return 0;
}
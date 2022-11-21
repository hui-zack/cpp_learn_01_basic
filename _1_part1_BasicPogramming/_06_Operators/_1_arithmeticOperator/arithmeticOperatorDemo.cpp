// Create by hui on 2021/11/1 13:07
// Code describe: 算数运算符
// Keyword      : + - * / % i++ i--

#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 3.0;

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;          //* 如果是两个整数相除 结果只保留整数部分
    cout << a % b << endl;          //* %-->取余
    cout << "\n" << endl;

    cout << a++ << endl;
    cout << ++b << endl;

    int i = 10;
    int j = 10;
    cout << ++i * 100 << endl;      //* 先给i+1, 之后用新的i参与运算
    cout << i << endl;
    cout << j++ * 100 << endl;      //* 拿原始的j参与运算, 之后给j+1
    cout << j << endl;

    return 0;
}
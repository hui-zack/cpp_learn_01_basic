// Create by hui on 2021/11/1 16:55
// Code describe: 两个数比较大小(三目运算符实现)
// Keyword      : 1 ? 2 : 3;

#include <iostream>

using namespace std;

int main() {
    int a = 0;
    int b = 0;
    int num_max;

    cout << "input a = " << endl;
    cin >> a;
    cout << "input b = " << endl;
    cin >> b;

    num_max = a > b ? a : b;      //* 三目运算符实现获取最大值
    cout << "the max num =  " << num_max  << endl;

    return 0;
}
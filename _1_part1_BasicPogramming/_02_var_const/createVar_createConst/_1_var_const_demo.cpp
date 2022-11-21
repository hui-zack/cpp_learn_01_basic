// 变量和常量的定义
// Created by admin on 2021/10/30.
//

#include <iostream>
using namespace std;
#define myName "张辉"								//*2 宏常量定义字符串
/*
 *
 * */
int main() {
    int i = 1;										//*1 变量定义
    const int mouth = 12;							//*3 一般常量定义int
    cout << "输出变量i: " << i << endl;
    cout << "输出宏常量myName: " << mouth << endl;
    cout << "输出一般常量为: " << myName << endl;

    system("pause");
    return 0;
}
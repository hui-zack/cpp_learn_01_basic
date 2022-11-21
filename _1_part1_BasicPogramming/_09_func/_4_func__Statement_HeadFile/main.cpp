// Create by hui on 2022/11/2 10:38
// Code describe: 
// Keyword      : 

#include <iostream>
/* 3-3-1 在main函数中声明自定义头文件, 便可使用其内部已声明的函数 */
#include "add.cpp"
using namespace std;

int main() {
    int result = Add(1, 2);
    cout << result << endl;
    return 0;
}
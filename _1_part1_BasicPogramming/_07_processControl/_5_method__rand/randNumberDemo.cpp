// Create by hui on 2021/11/2 14:21
// Code describe: 生成随机数
// Keyword      : rand 

#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand((unsigned int)time(NULL));        //* 使用当前时间充值随机数种子

    int num = rand() % 100 + 1;                         //* 获取随机数
    cout << num << endl;

    return 0;
}
// Create by hui on 2021/12/9 14:35
// Code describe: 函数声明; 声明可以写多次, 但是定义只能有一次
// Keyword      :

#include <iostream>
using namespace std;
/* 2-2 在main前面声明函数 */
int getMax(int a, int b);          //* 函数声明, 提前告诉编译器函数的存在

int main() {
    int a = 19;
    int b = 28;

    getMax(a, b);
    return 0;
}

/* 2-1 在main后面定义函数 */
int getMax(int  a, int b){
    return a > b ? a : b;
}


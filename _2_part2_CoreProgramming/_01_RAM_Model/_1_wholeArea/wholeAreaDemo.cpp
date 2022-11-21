// Create by hui on 2021/12/20 15:56
// Code describe: 内存四区-全局区
// Keyword      : 

#include <iostream>

using namespace std;
/**
 * 全局区存放全局变量, 静态变量, 常量, 程序结束后操作系统释放
 *  局部变量:
 *      写在函数体内的变量都叫局部变量
 *  全局变量:
 *      写在函数体外部的变量叫做全局变量
 * */

/* 1-1 函数外变量-全局区 */
int g_a = 10;

/* 1-2 函数外常量-全局区 */
const int c_g_a = 10;

/* 1-3 函数外静态变量-全局区 */
static int s_g_c = 12;

/* 1-4 函数外字符串-全局区 */
string gStr = "test";

int main() {

    /* 1-5 函数内静态变量-全局区 */
    static int s_a = 10;

    /* 1-6 函数内字符串变量-非全局区 */
    string iStr = "123";


    /* 1-7 函数内变量-非全局区 */
    int a = 10;

    /* 1-8 函数内常量-非全局区 */
    const int c_l_a = 10;

    cout << "全局区:" << endl;
    cout << "    函数外变量(全局区): " << (long long) &g_a << endl;
    cout << "    函数外常量(全局区)" << (long long) &c_g_a << endl;
    cout << "    函数外静态变量(全局区): " << (long long) &s_g_c << endl;
    cout << "    函数内静态变量(全局区): " << (long long) &s_a << endl;
    cout << "    函数外字符串(全局区): " << (long long) &gStr << endl;

    /* 1-9 函数内字符串常量 */
    cout << "    函数内字符串常量(全局区): " << (long long) &"213" << endl;

    cout << "非全局区: " << endl;
    cout << "    函数内字符串变量(非全局区): " << (long long) &iStr << endl;
    cout << "    函数内变量(非全局区): " << (long long) &a << endl;
    cout << "    函数内常量(非全局区): " << (long long) &c_l_a << endl;

    return 0;
}
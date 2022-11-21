// Create by hui on 2021/12/15 11:09
// Code describe: 常量指针, 指针常量,  全常指针
// Keyword      : const int* p = &i; int* const p = &i; const int* const p = * &i;

#include <iostream>

using namespace std;

int main() {
    int num = 123;

    /* 4-1 定义一个指针常量 */
    int* const pointerConst = &num;         // 指针本身是常量，指针里面所存储的内容（内存地址）是常量

    /* 4-2 定义一个常量指针 */
    const int* constPointer = &num;         // 指向常量的指针，指针中所存地址中对应的值是常量，不能修改这个指令存储的内存地址

    /* 4-3 定义一个全常指针 */
    const int* const p3 = &num;   //* 全常指针; 指向内容, 存储地址全部read-only

    return 0;
}
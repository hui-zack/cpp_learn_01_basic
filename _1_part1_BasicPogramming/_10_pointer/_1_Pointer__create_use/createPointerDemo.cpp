// Create by hui on 2021/12/9 16:59
// Code describe: 指针的定义
// Keyword      : int * p = &

#include <iostream>

using namespace std;

int main() {
    // 定义指针
    int num = 100;
    /* 1-1 定义指针 */
    int* pNum = &num;

    // 基本使用
    cout << "指针存的地址: " << pNum << endl;
    cout << "指针本身地址: " << &pNum << endl;
    /* 1-2 对指针解引用, 获取指向地址的存储内容 */
    cout << "指向地址内容: " << *pNum << endl;   //* 指针变量前加 * 号来解引用, 找到指针指向的内存中的数据
    return 0;
}
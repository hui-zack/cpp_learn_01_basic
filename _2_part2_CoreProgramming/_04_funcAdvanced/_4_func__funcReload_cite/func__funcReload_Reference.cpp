// Create by hui on 2021/12/27 10:37
// Code describe: 函数重载-引用重载
// Keyword      : 
/*
 *
 * */
#include <iostream>

using namespace std;

/* 4-1 第一个重载-int普通引用作为形参 */
void func(int& a){
    cout << "func1(int &a)调用" << endl;
}

/* 4-2 第二次重载-int常量引用作为形参 */
void func(const int& a){
    cout << "func2(const int &a)调用" << endl;
}


int main() {
    /* 4-3 实参为堆栈区的地址, 优先调用形参为普通引用类型的函数 */
    int a = 10;
    func(a);

    /* 4-4 实参为常量区的地址, 普通引用不能获取常量区地址, 只能调用实参为常量引用的函数 */
    func(10);
    return 0;
}
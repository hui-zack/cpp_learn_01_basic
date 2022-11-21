// Create by hui on 2021/12/26 20:42
// Code describe: 函数的占位参数
// Keyword      : void func(int){...}

#include <iostream>

using namespace std;

/* 2-1 函数设置占位参数 */
void func(int a, int){      //* 第二个int, 占位参数
    cout << a << endl;
}
/* 2-3 占位参数设置默认值 */
void func2(int a, int = 100){
    cout << a << endl;
}

int main() {
    int i = 9999;
    /* 2-2 调用具有占位参数的函数 */
    func(i, 10086);           //* 调用占位参数

    /* 2-4 调用具有默认值占位参数的函数 */
    func2(12315);
    return 0;
}
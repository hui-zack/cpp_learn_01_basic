// Create by hui on 2021/12/24 15:34
// Code describe: 引用作为函数的返回值, 函数返回引用的话, 该函数可以作为左值(=号左边的值)
// Keyword      : int& method(){}

#include <iostream>

using namespace std;

/**
 * 引用型返回值
 * */
int& method(int value){                          /* 3-1 引用方式返回数据 */
    // 静态变量, 存放在全局区, 全局区上的数据在程序结束后释放, 可以以引用的方式返回
    // 无论调用多少次method, 静态变量只在第一次调用时进行初始化, 再次调用操作的都是同一个地址
    static int a = value;
    cout << "[method] addr of static var in func: "<< &a << endl;
    return a;
}

int main() {
    /* 3-2 使用引用接收引用型返回值 */
    int  & b = method(100);

    cout << "addr of b(引用接收引用返回值) = " << &b << endl;

    /* 3-3 使用普通方式接收引用型返回值 */
    int c = method(200);

    cout << "addr of c(普通接收引用返回值) = " << &c << endl;

    /* 3-4 引用方式作为左值 */
    method(200) = 10086;
    cout << "value of b(修改左值) = " << b << endl;
    return 0;
}

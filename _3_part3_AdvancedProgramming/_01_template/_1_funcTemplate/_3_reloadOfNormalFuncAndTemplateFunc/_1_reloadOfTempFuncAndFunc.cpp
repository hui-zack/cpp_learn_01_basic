// Create by hui on 2022/11/21 0:29
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;

/** 普通函数 */
void myPrint(int a){
    cout << "normal func reload, value = " << a << endl << endl;
}

/* 3-1 模板函数(与普通函数发生重载) */
template<class T>
void myPrint(T a){
    cout << "template func reload, value = " << a << endl << endl;
}

/* 3-3 模板函数参数数量不同发生重载 */
template<class T>           // 模板函数的声明必须带有template<class T>
void myPrint(T a, T b);

int main() {
    /* 3-1-1 模板函数和普通函数发生重载, 优先调用普通函数 */
    myPrint(12);

    /* 3-2-2 调用函数时设置空模板参数, 优先调用模板函数 */
    myPrint<>(123);

    myPrint(1, 2);
    return 0;
}


template<class T>
void myPrint(T a, T b){
    cout << "template func reload, valueA = " << a << ", valueB = " << b << endl << endl;
}
// Create by hui on 2021/12/24 14:26
// Code describe: 
// Keyword      : 

#include <iostream>
using namespace std;

/**
 * 参数的值传递, 实参的编译地址会复制数据到一个新的内存地址, 并将新的内存地址传入
 */
void getAddrInFuncByValueParam(int num){
    cout << "[getAddrInFuncByValueParam] input param addr: " << &num << endl;
}

/**
 * 参数的指针传递, 实参直接传入编译地址, 函数内修改参数, 会修改实参数据
 * */
void getAddrInFuncByPointerParam(int * num){
    cout << "[getAddrInFuncByValueParam] input param addr: " << num << endl;
}

/**
 * 参数的引用传递, 实参直接传入编译地址, 函数内修改参数, 会修改实参数据
 * */
 /* 2 参数的引用传递 */
void getAddrInFuncByCiteParam(int & num)
{
    cout << "[getAddrInFuncByCiteParam] input param addr: " << &num << endl;
}


int main() {
    int numA = 10086;

    cout << "原地址: " << &numA << endl;

    // 引用传递时, 传入原参数的编译地址, 函数内打印的形参地址和实参相同
    getAddrInFuncByCiteParam(numA);

    // 指针传递时, 传入原参数的编译地址, 函数内打印的形参地址和实参相同
    getAddrInFuncByPointerParam(&numA);

    // 值传递时, 传入的是副本, 函数内打印形参地址和实参不相同
    getAddrInFuncByValueParam(numA);


    return 0;
}


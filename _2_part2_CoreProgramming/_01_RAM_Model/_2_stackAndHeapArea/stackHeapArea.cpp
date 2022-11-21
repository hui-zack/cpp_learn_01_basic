// Create by hui on 2021/12/20 18:05
// Code describe: 函数返回局部变量的地址是非法操作(局部变量在栈区), 运行完自动释放
// Keyword      : 

#include <iostream>

using namespace std;

/*
 * 栈区数据注意事项 - 不要返回局部变量的地址
 * 存放函数的参数值, 局部变量等
 * 栈区的数据由编译器开辟和管理
 *
 * */
int* getVarPointer(){
    /* 2-1-1 定义栈区数据-局部变量 */
    int a = 10;     //* 该局部变量存放在栈区, 栈区的数据在函数执行完后自动释放
    cout << "栈区数据地址: " <<(long long) &a <<endl;
    return &a;
}


int* getHeapPointer(){
    /* 2-2-1 定义堆区数据-new */
    int *pInt = new int(19);
    cout << "堆区数据地址: " << (long long)&pInt <<endl;
    return pInt;
}

int main() {
    // 栈区的变量在函数调用后就释放, 因此返回的是空指针
    int* p = getVarPointer();                    //* func()内局部变量的地址在栈区, 运行完func()就被释放,

    // 堆区的变量不手动释放就会一直存在
    int *pInt = getHeapPointer();

    cout << "测试结果: " << endl;
    cout << "    " << p << endl;
    cout << "    " << pInt << endl;
    return 0;
}
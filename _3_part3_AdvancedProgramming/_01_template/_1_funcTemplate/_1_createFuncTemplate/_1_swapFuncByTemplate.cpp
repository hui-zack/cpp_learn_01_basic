// Create by hui on 2022/11/20 20:25
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;

/* 1-1 定义函数模板的方法 */
template <typename T>
void swapData(T& dataA, T& dataB){
    T temp = dataA;
    dataA = dataB;
    dataB = temp;
}

int main() {
    string stringA = "天空飞来五个字";
    string stringB = "这都不算事";


    /* 1-2-1 模板使用方式1 编译器自动推导参数类型 */
    swapData(stringA, stringB);

    cout << "stringA = " << stringA << endl;
    cout << "stringB = " << stringB << endl << endl;


    /* 1-2-2 模板使用方式2 手动指定参数类型 */
    swapData<string>(stringA, stringB);

    cout << "stringA = " << stringA << endl;
    cout << "stringB = " << stringB << endl;


    return 0;
}
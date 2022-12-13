// Create by hui on 2022/12/13 15:29
// Code describe: 函数对象作为参数传递
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;

/** 编写函数对象类 */
class printString{
public:
    void operator()(string str){
        cout << str << endl;
    }
};

/* 2-1 编写全局函数用于接收函数对象参数 */
void receiveFuncObject(printString& ps, string value){
    ps(value);
}

int main() {
    string str = "hello world";

    /* 2-2 将函数对象传入接收函数 */
    printString ps;
    receiveFuncObject(ps, str);

    return 0;
}
// Create by hui on 2022/5/27 17:28
// Code describe: 静态成员变量和静态成员函数
// Keyword      : 

#include <iostream>

using namespace std;

class master{

public:
    /* 6-1-1 类内创建静态成员变量 */
    static int port;                     //不在类外初始化的话, 编译器会报错
    int num;
    master(): num(10){};

    /* 6-2-1 类内创建静态成员函数 */
    static void func(){
        //
        cout << "[master] static void func 调用" << endl;
    }


};

/* 6-1-2. 静态成员变量初始化; 类外初始化() */
int master::port = 100;


int main() {
    master p1;

    /* 6-1-3 类名调用静态成员变量-推荐 */
    cout << "[main] Person::port = " << master::port << endl;

    /* 6-1-4 实例对象调用静态成员变量-不推荐 */
    cout << "[main] Person::port = " << p1.port << endl;


    /* 6-2-2 类名调用静态成员函数-推荐 */
    master::func();

    /* 6-2-3 对象访问静态成员函数-不推荐 */
    p1.func();


    return 0;
}
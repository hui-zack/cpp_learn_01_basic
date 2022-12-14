// Create by hui on 2021/12/24 17:31
// Code describe: 给函数参数设置默认值
// Keyword      : 

#include <iostream>

using namespace std;

/* 1-1 函数设置默认参数 */
int add(int a = 0, int b = 0, int c = 0){
    return a + b + c;
}

int main() {
    cout << add() << endl;
    cout << add(10) << endl;
    cout << add(10, 20) << endl;
    cout << add(10, 20, 30) << endl;

    return 0;
}
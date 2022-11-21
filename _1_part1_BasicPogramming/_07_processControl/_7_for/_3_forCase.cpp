// Create by hui on 2021/11/3 14:06
// Code describe: for循环嵌套打印正方形100个*
// Keyword      : for

#include <iostream>

using namespace std;

int main() {
    /*
     * 100个*拍成一个正方形
     * */
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            cout << "* ";
        }
        cout << endl;
    }

    /*
     * 99乘法表
     * */
    for (int i=1; i<10; i++){                                   //* 99乘法表
        for (int j=1; j<=i; j++){                               //* 列数<=当前的行数
            cout << i << " * " << j << " = " << i*j << "  ";
        }
        cout << endl;
    }

    return 0;
}
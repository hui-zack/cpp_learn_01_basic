// Create by hui on 2021/12/10 11:22
// Code describe: 所有的指针变量都在64位操作系统都占8个字节
// Keyword      : 

#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int* p = &a;
    cout << "sizeof(int): " << sizeof(a) << endl;
    cout << "sizeof(int*): " << sizeof(p) << endl;
    cout << "sizeof(double*): " << sizeof(double*) << endl;
    return 0;
}
// Create by hui on 2021/11/1 13:58
// Code describe: 赋值运算符
// Keyword      : = += -= /= *= %=

#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 2;

    cout << (a+=b) << endl;
    cout << (a-=b) << endl;
    cout << (a/=b) << endl;
    cout << (a*=b) << endl;
    cout << (a%=b) << endl;

    return 0;
}
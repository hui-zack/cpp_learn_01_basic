// Create by hui on 2021/11/4 10:14
// Code describe: goto跳转
// Keyword      : goto

#include <iostream>

using namespace std;

int main() {
    cout << "1. xxx" << endl;
    goto COORD;
    cout << "2. xxx" << endl;
    cout << "3. xxx" << endl;
    cout << "4. xxx" << endl;
    cout << "5. xxx" << endl;
    COORD:
    cout << "6. xxx" << endl;
    return 0;
}
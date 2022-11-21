// Create by hui on 2021/11/1 14:48
// Code describe: 逻辑运算符
// Keyword      : ! && ||

#include <iostream>

using namespace std;

int main() {
    bool fl1 = true;
    bool fl2 = false;

    cout << !fl1 << endl;               //* !
    cout << (fl1 && fl2) << endl;       //* &&
    cout << (fl1 || fl2) << endl;       //* ||

    return 0;
}
// Create by hui on 2021/11/1 12:37
// Code describe: cin对象实现键盘输入
// Keyword      : cin

#include <iostream>
#include <string>

using namespace std;

int main() {
    int i = 0;
    cout << "请输入整形i的值: " << endl;
    cin >> i;                               //* cin对象实现键盘输入
    cout << i << endl;


    float f = 1.0f;
    cout << "请输入浮点型f的值: " << endl;
    cin >> f;
    cout << f << endl;

    char ch = '0';
    cout << "请输入字符ch的值: " << endl;
    cin >> ch;
    cout << ch << endl;

    string str = "0";
    cout << "请输入字符串str的值" << endl;
    cin >> str;
    cout << str << endl;

    bool flag = false;
    cout << "请输入布尔型flag的值" << endl;
    cin >> flag;
    cout << flag << endl;

    return 0;
}
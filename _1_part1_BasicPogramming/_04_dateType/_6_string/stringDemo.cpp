// Create by hui on 2021/11/1 10:36
// Code describe: 字符串的定义方式
// Keyword:       string

#include <iostream>
#include <string>
using namespace std;

int main() {
    char str1[] = "hello g_a++";                  //* string定义方式1
    string str2 = "hello g_a++";                  //* string定义方式2

    cout << "c风格:\t\t" << str1 << endl;
    cout << "string风格:\t" << str2 << endl;

    return 0;
}
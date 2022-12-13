// Create by hui on 2022/11/24 19:26
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;
/**
    char& operator[](int index);            使用运算符[]取下标index处的字符
    char& at(int index);                    使用成员方法at(int index)取下标index处的字符
 */
int main() {
    string str = "hello";
    /* 7-1 使用运算符[]取下标index处的字符 */
    char &firstChar = str[0];
    cout << firstChar << endl;

    /* 7-2 使用成员方法at(int index)取下标index处的字符 */
    char &secondChar = str.at(1);
    cout << secondChar << endl;

    return 0;
}
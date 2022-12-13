// Create by hui on 2022/11/24 0:05
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;
/**
    string& replace(int pos, int n, const char* s);         从pos开始及n个字符的区域, 替换为char*字符串s
    string& replace(int pos, int n, const string& str);     从pos开始及n个字符的区域, 替换为string字符串str
 */
int main() {
    string str = "hello c++, i have come here";
    /* 5-1-1 从pos开始及n个字符的区域, 替换为char*字符串s */
    str.replace(6, 3, "cpp/c++");

    /* 5-1-2 从pos开始及n个字符的区域, 替换为string字符串str */
    str.replace(6, 7, string("c++/cpp"));

    cout << str << endl;
    return 0;
}
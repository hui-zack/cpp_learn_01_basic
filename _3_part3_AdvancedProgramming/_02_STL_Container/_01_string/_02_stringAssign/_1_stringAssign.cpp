// Create by hui on 2022/11/23 21:50
// Code describe: 字符串赋值操作
// Keyword      : 

#include <iostream>
#include <string>
/**
    string& operqtor=(const char* s);           将char*字符串赋值到当前字符串
    string& operqtor=(const string& s);         把字符串s赋值给当前字符串
    string& operqtor=(const char s);            把字符赋值给当前字符串

    string& assign(const char* s);              把char*字符串赋值给当前字符串
    string& assign(const string &s);            把字符串s赋值给当前字符串
    string& assign(const char* s, int n);       把s的前n个字符赋值给当前字符串
    string& assign(int n, char c);              把n个字符c赋值给当前字符串
 */
using namespace std;

int main() {
    string str;
    /* 2-1-1 把char*字符串赋值str */
    str = "hello c++";

    string s1 = "yes c++";
    /* 2-1-2 把string字符串str2赋值给str */
    str = s1;

    /* 2-1-3 把单个字符赋值给字符串 */
    str = 'c';


    /* 2-2-1 把char*字符串赋值str */
    str.assign("hello c++");

    string s2 = "yes c++";
    /* 2-2-2 把string字符串str2赋值给str */
    str.assign(s2);

    /* 2-2-3 把char*字符串的前n个字符赋值给str */
    str.assign("helloC++", 5);

    /* 2-2-4 把n个相同字符赋值给str */
    str.assign(5, 'c');

    cout << str << endl;
    return 0;
}
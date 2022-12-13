// Create by hui on 2022/11/23 22:12
// Code describe: 字符串的拼接操作(尾部追加)
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;
/**
    string& operator+=(const char* str);                +=拼接char*字符串
    string& operator+=(const string& str);              +=拼接string字符串
    string& operator+=(const char c);                   +=拼接字符

    string& append(const char *s);                      append拼接char*字符串
    string& append(const string& s);                    append拼接string字符串
    string& append(const char* s, int n);               append拼接char*字符串的前n个字符
    string& append(const string& s, int pos, int n)     append拼接string字符串pos下标开始的n个字符
 */
int main() {
    string str = "hello";
    /* 3-1-1 +=拼接char*字符串 */
    str += " c++";

    /* 3-1-2 +=拼接string字符串 */
    str += string(", I have come her");

    /* 3-1-3 +=拼接字符 */
    str += 'e';

    cout << str << endl;


    string str2 = "hello";
    /* 3-2-1 append拼接char*字符串 */
    str2.append(" c++");

    /* 3-2-2 append拼接string字符串 */
    str2.append(string(", i have "));

    /* 3-2-3 append拼接char*字符串的前n个字符 */
    str2.append("come your place", 5);

    /* 3-2-4 append拼接string字符串pos下标开始的n个字符 */
    str2.append(string("yeah,here"), 5, 4);

    cout << str2 << endl;

    return 0;
}
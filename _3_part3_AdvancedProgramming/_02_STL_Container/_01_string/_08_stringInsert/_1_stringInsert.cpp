// Create by hui on 2022/11/24 19:36
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;
/**
     字符串插入:
        string& insert(int pos, const char* s);         在pos下标前插入char*字符串s
        string& insert(int pos, const string& str);     在pos下标前插入string字符串str
        string& insert(int pos, int n, char c);         在pos下标前插入n个字符c
    字符串删除:
        string& erase(int pos, int n = npos);           删除pos下标开始及之后n个字符
 */

string& getString(){
   return *new string("hello c++");
}

int main() {
    string &str1 = getString();
    /* 8-1-1 在pos下标前插入char*字符串s */
    str1.insert(6, string("cpp/"));
    cout << str1 << endl;

    string &str2 = getString();
    /* 8-1-2 在pos下标前插入string字符串str */
    str2.insert(6, "cpp/");
    cout << str2 << endl;
    string &str3 = getString();

    /* 8-1-3 在pos下标前插入n个字符c */
    str3.insert(9, 1, '!');
    cout << str3 << endl;

    /* 8-2 删除pos下标开始及之后n个字符 */
    str3.erase(9, 1);
    cout << str3 << endl;
    return 0;
}
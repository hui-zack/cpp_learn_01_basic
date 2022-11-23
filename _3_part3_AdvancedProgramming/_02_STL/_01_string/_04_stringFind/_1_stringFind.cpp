// Create by hui on 2022/11/23 23:39
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;
template<class T>
void print(T& t){
    cout << t << endl;
}
/**
    int find(const char* s, int post = 0) const         在pos下标开始及之后的区域, 查找char*字符串第一次出现的下标
    int find(const string& str, int pos = 0) const      在pos下标开始及之后的区域, 查找string字符串str第一次出现的下标
    int find(const char* s, int pos, int n) const       在pos下标开始之后n个字符的区域, 查找char*字符串第一次出现的下标
    int find(const char c, int pos) const               在pos下标开始及之后的区域, 查找字符c第一次出现的下标

    int rfind(const char* s, int pos = npos) const      从pos下标开始及之前的区域, 查找char*字符串最后一次出现的下标
    int rfind(const string& str, int pos = npos) const  从pos下标开始及之前的区域, 查找string字符串str最后一次出现的下标
    int rfind(const char* s, int pos, int n) cosnt      从pos下标开始之前n个字符的区域, 查找char*字符串s最后一次出现的下标
    int rfind(const char c, int pos = 0) const          查找字符最后一次出现的下标
 */


int main() {
    string str = "hello c++, c++ world, i have come";
    /* 4-1-1 在pos下标开始及之后的区域, 查找char*字符串第一次出现的下标 */
    int index11 = str.find("c++");
    print(index11);

    /* 4-1-2 在pos下标开始及之后的区域, 查找string字符串str第一次出现的下标 */
    int index12 = str.find(string("c++"));
    print(index12);

    /* 4-1-3 在pos下标开始之后n个字符的区域, 查找char*字符串第一次出现的下标 */
    int index13 = str.find("c++", 5, 3);
    print(index13);

    /* 4-1-4 在pos下标开始及之后的区域, 查找字符c第一次出现的下标 */
    int index14 = str.find('+', 5);
    print(index14);

    print("----");

    /* 4-2-1 从pos下标开始及之前的区域, 查找char*字符串最后一次出现的下标 */
    int index21 = str.rfind("c++", 10);
    print(index21);

    /* 4-2-2 从pos下标开始及之前的区域, 查找string字符串str最后一次出现的下标 */
    int index22 = str.rfind(string("c++"), 10);
    print(index22);

    /* 4-2-3 从pos下标开始之前n个字符的区域, 查找char*字符串s最后一次出现的下标 */
    int index23 = str.rfind("c++", 9, 3);
    print(index23);

    /* 4-2-4 查找字符最后一次出现的下标 */
    int index24 = str.rfind('+', 9);
    print(index24);

    return 0;
}
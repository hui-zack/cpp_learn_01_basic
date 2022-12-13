// Create by hui on 2022/11/24 19:16
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;
template <class T>
void print(T t){
    cout << t << endl;
}

/**
    int compare(const string& s) const                  与string字符串比较
    int compare(const char* s) const                    与char*字符串比较
 */
int main() {
    string str = "hello c++";

    /* 6-1 与string字符串比较 */
    int result1 = str.compare("hello c++");

    /* 6-2 与char*字符串比较 */
    int result2 = str.compare(string("hello c++"));


    print(result1);
    print(result2);
    return 0;
}
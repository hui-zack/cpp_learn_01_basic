// Create by hui on 2022/11/24 19:49
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;
/**
    string substr(int pos = 0, int n = npos) const      返回pos下标开始及之后的n个字符组成的字符串
 */
int main() {

    string str = "hello c++!";
    /* 9-1 返回pos下标开始及之后的n个字符组成的字符串 */
    string subStr =  str.substr(6, 3);
    cout << subStr << endl;
    return 0;
}
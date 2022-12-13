// Create by hui on 2022/11/23 21:16
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;

int main() {
    /* 1-1 创建空字符串 */
    string s1;

    /* 1-2 根据char* 初始化字符串 */
    const char* str = "hello c++";
    string s2(str);

    /* 1-3 根据字符串初始化字符串 */
    string s3(s2);
    cout << s3 << endl;

    /* 1-4 根据单个字符初始化字符串 */
    string s4(5, 'a');
    cout<< s4 << endl;

    return 0;
}
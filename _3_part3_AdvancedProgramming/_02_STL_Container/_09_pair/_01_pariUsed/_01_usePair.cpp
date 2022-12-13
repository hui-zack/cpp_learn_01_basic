// Create by hui on 2022/12/12 18:10
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;

/**
    pair<T1, T2> p(T1 value1, T2 value2);                       // 使用默认构造创建对组
    pair<T1, T2> p = make_pair<T1 value1, T2 value2);           // 使用make_pair创建对组
*/

int main() {
    /* 9-1-1 使用默认构造创建对组 */
    pair<string, int> pair1("id", 1);

    /* 9-1-2 使用make-pair创建对组 */
    pair<string, int> pair2 = make_pair("id", 2);

    /* 9-2-1 获取对组的第一个值 */
    cout << pair1.first << endl;

    /* 9-2-2 获取对组的第二个值 */
    cout << pair1.second << endl;

    return 0;
}
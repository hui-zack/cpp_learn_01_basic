// Create by hui on 2022/12/13 23:10
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;
/**
    template<class T> bool logical_and<T>(){}               // &&的逻辑仿函数
    template<class T> bool logical_or<T>(){}                // ||的逻辑仿函数
    template<class T> bool logical_not<T>(){}               // !的逻辑仿函数
 */
int main() {
    /* 6-1 使用&&的逻辑仿函数 */
    logical_and<> logicalAnd;
    cout << "use logical_and: " << logicalAnd(1, 1) << endl;

    /* 6-2 使用||的逻辑仿函数 */
    logical_or<> logicalOr;
    cout << "use logical_or: " << logicalOr(1, 0) << endl;

    /* 6-3 使用!的逻辑仿函数 */
    logical_not<> logicalNot;
    cout << "use logical_not: " << logicalNot(1) << endl;
    return 0;
}
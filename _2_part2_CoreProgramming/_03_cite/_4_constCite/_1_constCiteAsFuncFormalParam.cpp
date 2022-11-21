// Create by hui on 2021/12/24 17:11
// Code describe: 常量引用常用于修饰形常, 以防止实参内容被修改
// Keyword      : void printInt(const int& i)
#include <iostream>

using namespace std;

/* 4-1 引用方式作为形参, 避免原值误操作, 且不会开辟新内存, 减少内存消耗 */
void printInt(const int & i){           //* const int & i; 常量引用, 防止实参内容被修改
    cout << i << endl;
}

int main() {
    int a = 100;
    printInt(a);

    return 0;
}
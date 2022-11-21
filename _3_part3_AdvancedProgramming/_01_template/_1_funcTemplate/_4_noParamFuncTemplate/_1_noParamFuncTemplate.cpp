// Create by hui on 2022/11/20 21:01
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;

/* 4-1 定义无参函数模板 */
template<typename T>

void func(){
    cout << "func is running ..." << endl;
}

int main() {
    /* 4-2 调用无参数模板 */
    func<int>();

    return 0;
}
// Create by hui on 2022/11/11 20:34
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;

class Add{
public:
    /* 1-1 使用没有操作符的operator定义成员函数 */
    int operator()(int numA, int numB){
        return numA + numB;
    }
};

int main() {
    Add add = Add();
    /* 1-2-1 使用Add类实例对象的仿函数方法 */
    int result = add(1, 2);
    cout << result << endl;

    /* 1-2-2 使用Add类实例对象的仿函数方法 */
    cout << Add()(1,2) << endl;
    return 0;
}
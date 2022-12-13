// Create by hui on 2022/12/13 15:14
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;


class Add{
public:

    int count;          // 用于记录函数加法函数被调用了多少次

    /* 1-1 重载()元素符号, 使得Add类变成函数对象(函数式对象) */
    int operator()(int value1, int value2){
        count +=1;
        return value1 + value2;
    }
};
int main() {

    int num1 = 100;
    int num2 = 132;
    /* 1-2 像普通函数一样使用函数对象 */
    Add add;
    int result = add(num1, num2);
    int result2 = add(num1, num2);
    cout << num1 << " + " << num2 << " = " << result << endl;
    cout << "invoke time = " << add.count << endl;

    return 0;
}
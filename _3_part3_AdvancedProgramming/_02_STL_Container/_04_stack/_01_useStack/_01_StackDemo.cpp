// Create by hui on 2022/12/7 21:06
// Code describe: 创建栈对象的方式
// Keyword      : 

#include <iostream>
#include <string>
#include <stack>

using namespace std;

/**
    构造函数:
        stack<T> stk;                       // 使用无参构造创建栈对象
        stack(const stack &stk)             // 使用拷贝构造创建栈对象
    整体赋值:
        stack& operator=(const stack& stk)  // 使用=号拷贝栈的所有元素
    数据存取:
        push()                              // 栈添加元素-入栈
        pop()                               // 栈删除元素-出栈
        top()                               // 返回栈顶元素-获取元素
    大小操作:
        empty()                             // 判断栈是否为空
        size()                              // 获取栈元素个数
 */
int main() {
    /* 1-1-1 使用无参构造创建栈对象 */
    stack<int> intStack;

    /* 1-1-2 使用拷贝构造创建栈对象 */
    stack<int> copyStack(intStack);


    /* 1-2-1 栈添加元素-入栈 */
    intStack.push(100);
    intStack.push(200);
    intStack.push(300);

    /* 1-2-2 栈删除元素-出栈 */
    intStack.pop();

    /* 1-2-3 返回栈顶元素-获取元素 */
    int stackTop = intStack.top();
    cout << "stack top is " << stackTop << endl;


    /* 1-3-1 判断栈是否为空 */
    cout << "stack is empty ? " << intStack.empty() << endl;

    /* 1-3-2 获取栈元素个数 */
    cout << "stack size = " << intStack.size() << endl;


    /* 1-4-1 使用=号拷贝栈的所有元素 */
    copyStack = intStack;
    cout << "[copyStack] size = " << copyStack.size() << ", top = " << copyStack.top() << endl;

    return 0;
}
// Create by hui on 2022/12/5 21:52
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <deque>

using namespace std;

/**

    deque<T> deq                            // 默认构造的使用方法
    deque<T>(begin, end);                   // 使用区间构造deque<T>(deq.begin(), deq.end()), 将deq[begin, end)区间的元素拷贝到新deque对象
    deque<eleType>(n, ele);                 // 使用n个ele元素创建deque对象
    deque<T>(const deque &deq);             // 拷贝构造deque对象

 */

template<class T>
void printDeque(const deque<T>& deq){
    for (T ele : deq){
        cout << ele << " ";
    }
    cout << endl;
}

template<class T>
void printDeque(const string& dequeName,const deque<T>& deq){
    cout << dequeName << ": ";
    for (T ele : deq){
        cout << ele << " ";
    }
    cout << endl;
}

void insertIntDataToDeque(deque<int>& deq){
    for (int i = 0; i < 10; i++){
        deq.push_back((i + 1) * 10);
    }
}



int main() {
    /* 1-1 使用默认构造创建空的deque容器 */
    deque<int> deq1;
    insertIntDataToDeque( deq1);
    printDeque("deq1", deq1);

    /* 1-2 使用区间构造deque<T>(deq.begin(), deq.end()), 将deq的[begin, end)区间的元素拷贝到新deque对象 */
    deque<int> deq2(deq1.begin(), deq1.end());
    printDeque("deq2", deq2);

    /* 1-3 使用n个ele元素创建deque对象 */
    deque<int> deq3(10, 10086);
    printDeque("deq3", deq3);

    /* 1-4 拷贝构造deque对象 */
    deque<int> deq4(deq1);
    printDeque("deq4", deq4);

    return 0;
}
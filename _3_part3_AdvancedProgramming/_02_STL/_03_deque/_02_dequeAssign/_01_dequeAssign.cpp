// Create by hui on 2022/12/5 22:37
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <deque>
using namespace std;

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

/*
    deque& operator=(const deque &deq);     // 使用=号赋值deque对象
    assign(beg, end);                       // 将deq对象[begin, end)区间中的数据拷贝赋值给新deque对象
    assign(n, ele);                         // 将n个ele拷贝构造到新deque对象
**/


int main() {
    deque<int> deq;
    insertIntDataToDeque(deq);

    /* 2-1 使用=号赋值deque对象 */
    deque<int> deq1 = deq;
    printDeque("deq1", deq1);

    /* 2-2 将deq对象[begin, end)区间中的数据拷贝赋值给新deque对象 */
    deque<int> deq2;
    deq2.assign(deq.begin(), deq.end());
    printDeque("deq2", deq2);

    /* 2-3 将n个ele拷贝构造到新deque对象 */
    deque<int> deq3;
    deq3.assign(10, 10086);
    printDeque("deq3", deq3);

    return 0;
}
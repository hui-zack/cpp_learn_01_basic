// Create by hui on 2022/12/6 0:26
// Code describe: 获取元素
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

/**
    at(int index);              // at方法根据下标获取元素
    operator[];                 // 数组方式根据下标获取元素
    front();                    // 获取头部元素
    back();                     // 获取尾部元素
 * */
int main() {
    deque<int> deq;
    insertIntDataToDeque(deq);

    /* 5-1 at方法根据下标获取元素 */
    cout << "index = 2 ele: " << deq.at(2) << endl;

    /* 5-2 数组方式根据下标获取元素 */
    cout << "index = 2 ele: " << deq[2] << endl;

    /* 5-3 获取头部元素 */
    cout << "get first ele: " << deq.front() << endl;

    /* 5-4 获取尾部元素 */
    cout << "get last ele : " << deq.back() << endl;

    return 0;
}
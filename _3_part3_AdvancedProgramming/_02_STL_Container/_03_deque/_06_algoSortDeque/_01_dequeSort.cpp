// Create by hui on 2022/12/6 0:44
// Code describe: 对deque容器进行排序
// Keyword      : 

#include <iostream>
#include <string>
#include <deque>
/* 6-1 包含算法库头文件 */
#include <algorithm>
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
    sort(auto selfBegin, auto selfEnd);     // 对deque容器的[beg, end)区间的元素进行排序
 */
int main() {

    deque<int> deq;
    deq.push_back(7);
    deq.push_back(3);
    deq.push_back(9);
    deq.push_back(1);
    deq.push_back(5);

    printDeque("before sort", deq);
    /* 6-2 使用algo库的sort算法对deque元素进行排序 */
    sort(deq.begin(), deq.end());
    printDeque("after sort", deq);

    return 0;
}
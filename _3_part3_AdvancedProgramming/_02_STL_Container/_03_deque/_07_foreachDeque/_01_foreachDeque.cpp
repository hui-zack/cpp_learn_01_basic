// Create by hui on 2022/12/6 0:51
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <deque>
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

deque<int> getIntDeque(){
    deque<int> deq;
    for (int i = 0; i < 3; i++){
        deq.push_back((i + 1) * 10);
    }
    return deq;
}

/**
    遍历deque的方式
 */


template <class T>
void dequeEleOpera(T ele){
    cout << ele << endl;
}
int main() {
    /* 7-1 增强for循环遍历deque */
    auto deq = getIntDeque();
    for (auto ele : deq){
        cout << ele << " ";
    }
    cout << endl;

    /* 7-2-1 普通for循环下标遍历-不安全 */
    for(int i = 0; i < deq.size(); i++){
        cout << deq.at(i) << " ";
    }
    cout << endl;

    /* 7-2-2 普通for循环迭代器遍历 */
    for(auto it = deq.begin(); it < deq.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    /* 7-2-3 while+迭代器遍历  */
    auto it = deq.begin();
    while (it != deq.end()){
        cout << *it << " ";
        it ++;
    }
    cout << endl;

    /* 7-2-4 foreach算法遍历, 外部实现元素操作函数 */
    for_each(deq.begin(), deq.end(), dequeEleOpera<int>);

    return 0;
}

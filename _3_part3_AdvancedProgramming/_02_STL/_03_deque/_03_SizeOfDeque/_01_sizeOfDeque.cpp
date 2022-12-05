// Create by hui on 2022/12/5 23:07
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


/**
    长度和容量的获取判断方法:
        deque.empty();                              // 判断容器是否为空
    修改size的方法:
        deque.size();                               // 获取容器中元素的个数
        deque.resize(int newLength);                // 重新指定容器的长度, 容器变长, 则以默认值填充新位置, 变短, 超出的元素被删除
        deque.resize(int newLength, T newEle);      // 重新指定容器的长度, 容器变长, 则以newEle填充新位置, 变短, 超出的元素被删除
 */

int main() {
    deque<int> deq;
    /* 3-1 判断容器是否为空 */
    cout << "deq isEmpty? : " << deq.empty() << endl;

    deq.push_back(10086);

    /* 3-2 获取容器中元素的个数 */
    cout << "deq.size = " << deq.size() << endl;

    /* 3-3 重新指定容器的长度, 容器变长, 则以默认值填充新位置, 变短, 超出的元素被删除 */
    deq.resize(10);
    printDeque("deq in after resize as 10: ", deq);


    /* 3-4 重新指定容器的长度, 容器变长, 则以ele填充新位置, 变短, 超出的元素被删除 */
    deq.resize(20, 12315);
    printDeque("deq in after resize as 20: ", deq);

    return 0;
}
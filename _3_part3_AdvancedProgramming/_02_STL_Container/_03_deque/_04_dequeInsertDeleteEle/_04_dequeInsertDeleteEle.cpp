// Create by hui on 2022/12/5 23:32
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

deque<int> getIntDeque(){
    deque<int> deq;
    for (int i = 0; i < 3; i++){
        deq.push_back((i + 1) * 10);
    }
    return deq;
}

/**
    两端插入和删除元素:
        deque.push_back(T ele)                  // 在容器尾部插入元素
        deque.pop_back(T ele)                   // 删除容器尾部的元素

        deque.push_front(T ele)                 // 在容器头部插入元素
        deque.pop_front(T ele)                  // 删除容器头部的元素

    指定位置插入和删除元素:
        int insert(auto pos, T ele)                          // 在迭代器pos位置(相当于下标)插入一个ele元素的拷贝, 返回新元素的配置
        erase(auto pos)                                      // 删除迭代器pos位置(相当于下标)处的元素

        insert(auto pos, auto dep.begin(), auto dep.end())   // 在迭代器pos位置(相当于下标)处拷贝插入deq对象[beg, end)区间的元素到本身对象, 无返回值
        erase(auto selfDep.begin(), auto selfDeq.end())      // 删除自身[beg, end)区间的元素

        insert(auto pos, n , T ele)                          // 在迭代器pos位置(相当于下标)处插入n个ele元素的拷贝, 无返回值

        clear();                                             // 删除所有元素


*/

int main() {

    /* 4-1-1 在容器尾部插入元素 */
    auto deq1 = getIntDeque();
    deq1.push_back(10086);
    printDeque("deq1", deq1);

    /* 4-1-2 删除容器尾部的元素 */
    deq1.pop_back();
    printDeque("deq1", deq1);

    /* 4-1-2 删除容器尾部的元素 */
    auto deq2 = getIntDeque();
    deq2.push_front(10086);
    printDeque("deq2", deq2);

    /* 4-1-4 删除容器头部的元素 */
    deq2.pop_front();
    printDeque("deq2", deq2);

    /** ---- */

    auto deq3 = getIntDeque();
    /* 4-2-1 在迭代器pos位置(相当于下标)插入一个ele元素的拷贝, 返回新元素的配置 */
    int ele = 10086;
    deq3.insert(deq3.begin() + 1, ele);
    printDeque("deq3", deq3);

    /* 4-2-2 删除迭代器pos位置(相当于下标)处的元素 */
    deq3.erase(deq3.begin() + 1);
    printDeque("deq3", deq3);

    /* 4-2-3 在迭代器pos位置(相当于下标)处拷贝插入deq对象[beg, end)区间的元素到本身对象, 无返回值 */
    deque<int> tmpDeq;
    tmpDeq.push_back(10010);
    tmpDeq.push_back(10086);
    auto deq4 = getIntDeque();
    deq4.insert(deq4.begin(), tmpDeq.begin(), tmpDeq.end());
    printDeque("deq4", deq4);

    /* 4-2-4 删除自身[beg, end)区间的元素 */
    deq4.erase(deq4.begin(), deq4.begin() + 2);
    printDeque("deq4", deq4);

    /* 4-2-5 在迭代器pos位置(相当于下标)处插入n个ele元素的拷贝, 无返回值 */
    auto deq5 = getIntDeque();
    deq5.insert(deq5.begin() + 1, 2, ele);
    printDeque("deq5", deq5);

    /* 4-2-6 删除所有元素 */
    deq5.clear();
    printDeque("deq5", deq5);

    return 0;
}
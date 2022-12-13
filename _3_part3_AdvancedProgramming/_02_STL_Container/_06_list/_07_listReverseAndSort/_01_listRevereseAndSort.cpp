// Create by hui on 2022/12/10 1:56
// Code describe: list的反转和排序
// Keyword      : 

#include <iostream>
#include <string>
#include <list>
using namespace std;


template<class T>
void printList(list<T> & lst){
    for (T t : lst){
        cout << t << " ";
    }
}

template<class T>
void printList(const string& listName, list<T> & lst){
    cout << listName << "\t: ";
    for (const T& t : lst){
        cout << t << " ";
    }
    cout << endl;
}

void insertDataToIntList(list<int> & lst){
    for (int i = 0; i < 10; i++){
        lst.push_back((i+1) * 10);
    }
}

/**
    反转:
        reveres();                  // 反转list
    排序:
        sort();                     // list排序, sort默认升序序列
        sort(compareFunc);          // list排序, sort降序需要自己写比较规则
 */

/* 1-7-2-1 编写降序规则函数 */
template<class T>
bool listBigToLittle(T ele1, T ele2){
    return ele1 > ele2;
}

bool listBigToLittle(int ele1, int ele2){
    return ele1 > ele2;
}

int main() {
    list<int> list1;
    insertDataToIntList(list1);

    /* 7-1 反转list */
    list1.reverse();
    printList("reverse, lst", list1);

    list<int> list2;
    list2.push_back(3);
    list2.push_back(7);
    list2.push_back(1);
    list2.push_back(5);

    list<int> list3(list2);

    /* 7-2-1 list排序, sort默认升序序列  */
    list2.sort();
    printList("sort(little -> big) list2 = ", list2);

    /* 7-2-2-2 list排序, sort降序调用自定义降序规则 */
    list3.sort(listBigToLittle<int>);
    printList("sort(big -> little), list3 = ", list3);

    return 0;
}
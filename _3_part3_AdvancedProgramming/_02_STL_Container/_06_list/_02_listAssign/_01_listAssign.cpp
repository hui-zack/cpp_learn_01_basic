// Create by hui on 2022/12/10 0:00
// Code describe: list的整体赋值操作
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
    cout << listName << ": ";
    for (T t : lst){
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
    list.assign(auto lst.begin(), auto lst.end())   // 使用assign将lst对象[beg, end)区间的元素赋值给自身
    list.assign(int n, T ele)                       // 使用assign将n个ele元素赋值给自身对象
    list& operator=(const list& lst);               // 使用=号将lst的所有元素赋值给自身对象

*/


int main() {
    list<int> lst;
    insertDataToIntList(lst);

    /* 2-1 使用assign将lst对象[beg, end)区间的元素赋值给自身 */
    list<int> list1;
    list1.assign(lst.begin(), lst.end());
    printList("list1", list1);

    /* 2-2 使用assign将n个ele元素赋值给自身对象 */
    list<int> list2;
    list2.assign(10, 10086);
    printList("list2", list2);

    /* 2-3 使用=号将lst的所有元素赋值给自身对象 */
    list<int> list3;
    list3 = lst;
    printList("list3", list3);

    return 0;
}
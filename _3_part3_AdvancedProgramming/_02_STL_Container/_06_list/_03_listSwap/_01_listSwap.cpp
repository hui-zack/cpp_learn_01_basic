// Create by hui on 2022/12/10 0:10
// Code describe: 
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
 list.swap(const list<T>& lst);                 // 使用swap方法于lst对象交换所有元素
 * */
int main() {
    list<string> list1(1, "value = list1");
    list<string> list2(1, "value = list2");
    /* 3-1 使用swap方法于lst对象交换所有元素 */
    list1.swap(list2);

    printList("list1", list1);
    printList("list2", list2);

    return 0;
}
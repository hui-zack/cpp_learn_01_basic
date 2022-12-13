// Create by hui on 2022/12/10 1:44
// Code describe: list获取元素
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
    front();        // 获取第一个元素
    back();         // 获取最后一个元素
 * */

int main() {
    list<int> lst;
    insertDataToIntList(lst);
    /* 6-1 获取第一个元素 */
    auto firstEle = lst.front();
    cout << "first ele = " << firstEle << endl;

    /* 6-2 获取最后一个元素 */
    auto lastEle = lst.back();
    cout << "last ele  = " << lastEle << endl;

    return 0;
}
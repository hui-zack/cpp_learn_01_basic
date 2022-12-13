// Create by hui on 2022/12/12 13:42
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <list>
#include <algorithm>
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

void listOpera(int ele){
    cout << ele << " ";
}

int main() {
    list<int> intList;
    insertDataToIntList(intList);
    /* 8-1 增强for循环遍历 */
    for (auto &ele: intList){
        cout << ele << " ";
    }
    cout << endl;

    /* 8-2 普通for循环遍历 */
    for(list<int>::iterator it = intList.begin(); it != intList.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    /* 8-3 while循环遍历 */
    auto it = intList.begin();
    while (it != intList.end()){
        cout << *(it) << " ";
        it ++;
    }
    cout << endl;

    /* 8-4 使用foreach算法遍历list, 需要自定义操作函数 */
    for_each(intList.begin(), intList.end(), listOpera);
    return 0;
}
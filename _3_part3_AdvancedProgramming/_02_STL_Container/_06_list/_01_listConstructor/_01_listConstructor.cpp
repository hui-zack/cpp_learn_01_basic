// Create by hui on 2022/12/9 22:54
// Code describe: list拷贝构造
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

    list<T> lst;                                    // 使用无参构造创建list
    list<T>(auto lst.begin(),auto lst.end());       // 使用区间拷贝将lst对象[beg, end)区间的元素拷贝给新对象
    list<T>(int n, T ele);                          // 使用n个ele元素创建List
    list(const list &lst);                          // 使用拷贝构造赋值lst的所有元素到新list

*/
int main() {
    /* 1-1-1 使用无参构造创建list */
    list<int> lst;
    insertDataToIntList(lst);
    printList("lst", lst);

    /* 1-2 使用区间拷贝将lst对象[beg, end)区间的元素拷贝给新对象 */
    list<int> partList(lst.begin(), lst.end());
    printList("partList", partList);

    /* 1-3 使用n个ele元素创建List */
    list<int> nEleList(10, 10086);
    printList("nEleList", nEleList);

    /* 1-4 使用拷贝构造赋值lst的所有元素到新list */
    list<int> copyList(lst);
    printList("copyList", copyList);

    return 0;
}
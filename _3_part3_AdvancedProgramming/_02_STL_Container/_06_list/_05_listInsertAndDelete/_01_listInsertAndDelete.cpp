// Create by hui on 2022/12/10 1:02
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

     两端插入和删除
        push_back(T ele)                    // 在尾部插入元素
        pop_back(T ele)                     // 删除尾部的元素

        push_front(T ele)                   // 在头部插入元素
        pop_front(T ele)                    // 删除头部的元素

    指定位置插入元素
        insert(auto pos, T ele);            // 在迭代器的pos位置插入ele元素的拷贝, 返回新元素的位置
        insert(auto pos, int n, T ele);     // 在迭代器的pos位置插入n个ele元素的拷贝, 无返回值
        insert(auto pos, auto lst.begin(), auto lst.end());
                                            // 在迭代器的的pos位置插入lst对象[beg, end)区间的元素
    删除元素
        remove(T ele)                       // 删除容器中所有和ele匹配的元素
        erase(auto pos);                    // 删除迭代器的pos位置的元素
        erase(auto auto, selfList.begin(), auto  selfList.end()
                                            // 删除pos位置自身[beg, end)区间的元素
        clear();                            // 删除所有数据

 */
int main() {
    list<int> lst;
    insertDataToIntList(lst);
    /* 5-1-1 在尾部插入元素 */
    lst.push_back(10086);
    printList("push_back, lst", lst);

    /* 5-1-2 删除尾部的元素 */
    lst.pop_back();
    printList("pop_back, lst", lst);

    /* 5-1-3 在头部插入元素 */
    lst.push_front(10086);
    printList("push_front, lst", lst);

    /* 5-1-4 删除头部的元素 */
    lst.pop_front();
    printList("pop_front, lst", lst);


    /** ---- */


    /* 5-2-1 在迭代器的pos位置插入ele元素的拷贝, 返回新元素的位置 */
    lst.insert(++lst.begin(), 10086);
    printList("insert one", lst);

    /* 5-2-2 在迭代器的pos位置插入n个ele元素的拷贝, 无返回值 */
    lst.insert(++lst.begin(), 2, 520);
    printList("insert two 99", lst);

    /* 5-2-3 在迭代器的的pos位置插入lst对象[beg, end)区间的元素 */
    list<int> lst1;
    lst1.push_back(888);
    lst1.push_back(999);
    lst.insert(++lst.begin(), lst1.begin(), lst1.end());
    printList("insert lst1 ele to lst, lst", lst);


    /** ---- */


    /* 5-3-1 删除容器中所有和ele匹配的元素 */
    lst.remove(10086);
    printList("after remove 10086, lst\t", lst);

    /* 5-3-2 删除迭代器的pos位置的元素 */
    lst.erase(++lst.begin());
    printList("after erase second ele, lst", lst);

    /* 5-3-3 删除pos位置自身[beg, end)区间的元素 */
    auto it = ++lst.begin() ;

    auto startIt = it;
    for(int i = 0; i < 3; i++){
         ++it;
    }
    auto endIt = it;
    lst.erase(startIt, endIt);
    printList("after pot[1, 4), lst\t", lst);


    /* 5-3-4 删除所有数据 */
    lst.clear();
    printList("after clear all ele, lst", lst);


    return 0;
}
// Create by hui on 2022/12/10 0:39
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <list>

void lst();

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
    list.empty();                   // 判断list是否为空
    list.size();                    // 获取list的长度
    list.resize(int num);           // 重新指定list长度为num, 若容器边长, 使用默认值填充新位置,
                                    // 若容器变短, 删除超出的元素
    list.resize(int num, T ele);    // 重新指定list长度为num, 若容器边长, 使用ele填充新位置,
                                    // 若容器变短, 删除超出的元素
 */
int main() {
    list<int> lst;
    /* 4-1 判断list是否为空 */
    cout << "lst is empty > " << lst.empty() << endl;

    insertDataToIntList(lst);
    /* 4-2 获取list的长度 */
    cout << "lst length = " << lst.size() << endl;

    /* 4-3 重新指定list长度为num, 若容器边长, 使用默认值填充新位置, 若容器变短, 删除超出的元素 */
    printList("before resize, lst = ", lst);
    lst.resize(11);
    printList("after resize, lst", lst);

    cout << endl;
    /* 4-4 重新指定list长度为num, 若容器边长, 使用ele填充新位置, 若容器变短, 删除超出的元素 */
    printList("before resize, lst = ", lst);
    lst.resize(12, 10086);
    printList("after resize, lst", lst);

    return 0;
}

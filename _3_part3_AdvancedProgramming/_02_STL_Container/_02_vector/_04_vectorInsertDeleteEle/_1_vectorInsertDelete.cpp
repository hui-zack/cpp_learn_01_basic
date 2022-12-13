// Create by hui on 2022/11/25 21:02
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <class T>
void printVector(const vector<T> & vector){
    cout << "vector: ";
    for(T t: vector){
        cout << t << " ";
    }
    cout << endl;
}


void insertIntDataToVector(vector<int>& vec){

    for (int i = 0; i < 10; i++){
        vec.push_back((i + 1)* 10);
    }
}

/**
    插入元素:
        push_back(T element)                            在尾部插入元素
        insert(const_iterator pos, T ele)               迭代器向指定下标pos前插入元素
        insert(const_iterator pos, int count, T ele)    迭代器向指定下标pos前插入count个ele元素
    删除元素
        pop_back()                                      删除最后一个元素
        erase(const_iterator pos)                       删除迭代器指向的元素
        erase(const_iterator start, const_iterator end) 删除迭代器从[start, end)之间的元素
        clear()                                         删除容器中所有元素

*/
int main() {
    vector<int> vec;
    insertIntDataToVector(vec);

    /* 4-1-1 在尾部插入元素 */
    vec.push_back(10086);
    printVector(vec);

    /* 4-1-2 迭代器向指定下标pos前插入元素 */
    vec.insert(vec.end() - 1, 10085);
    printVector(vec);

    /* 4-1-3 迭代器向指定下标pos前插入count个ele元素 */
    vec.insert(vec.end() - 2, 2, 10084);
    printVector(vec);

    /* 4-2-1 删除最后一个元素 */
    vec.pop_back();
    printVector(vec);

    /* 4-2-2 删除迭代器指向的元素 */
    vec.erase(vec.end() - 1);
    printVector(vec);

    /* 4-2-3 删除迭代器从[start, end)之间的元素 */
    vec.erase(vec.end() - 2, vec.end());
    printVector(vec);

    /* 4-2-4 删除容器中所有元素 */
    vec.clear();
    printVector(vec);
    return 0;
}
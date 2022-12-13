// Create by hui on 2022/11/24 22:32
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <vector>

using namespace std;


template <class T>
void printVector(const vector<T> & vector){
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
    vector& operator=(const vector & vec);      使用=号运算符来赋值
    assign(beg, end);                           将[beg, end)区间中的数据拷贝赋值给本身
    assign(n, elem);                            将n个elem拷贝赋值给vector
 */

int main() {
    vector<int> vec;
    insertIntDataToVector(vec);


    vector<int> v1;
    /* 2-1 使用=号运算符赋值给新vector */
    v1 = vec;

    printVector(v1);

    /* 2-2 通过assign(beg, end)方法赋值给新vector */
    vector<int> v2;
    v2.assign(vec.begin(), vec.end());

    printVector(v2);

    /* 2-3 通过assign(int n, T element)方法赋值给vector容器 */
    vector<int> v3;
    v3.assign(2, 10086);

    printVector(v3);

    return 0;
}
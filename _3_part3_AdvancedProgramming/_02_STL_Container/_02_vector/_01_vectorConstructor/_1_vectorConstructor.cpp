// Create by hui on 2022/11/24 20:35
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <class T>
void printVector(const vector<T> & vec){
//    for(T t: vector){
//        cout << t << " ";
//    }
    for(auto it = vec.begin(); it != vec.end(); it ++){
        cout << *it << " ";
    }
    cout << endl;

}


void insertIntDataToVector(vector<int>& vec){
    for (int i = 0; i < 10; i++){
        vec.push_back((i + 1)* 10);
    }
}

int main() {

    /* 1-1 使用无参构造创建vector */
    vector<int> vec;

    insertIntDataToVector(vec);
    printVector(vec);

    /* 1-2 使用区间构造初始化vector */
    vector<int> vec1(vec.begin(), vec.begin() + 5);
    printVector(vec1);

    /* 1-3 使用重复元素构造初始化vector */
    int value = 10086;
    vector<int> vec2(3, value);
    printVector(vec2);

    /* 1-4 使用拷贝构造初始化vector */
    vector<int> vec3(vec);
    printVector(vec3);



    return 0;
}
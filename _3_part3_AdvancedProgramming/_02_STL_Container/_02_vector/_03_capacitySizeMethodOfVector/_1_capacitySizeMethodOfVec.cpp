// Create by hui on 2022/11/24 22:44
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
    尺寸容量的获取判断方法:
        boolean empty();                判断容器是否非空
        int capacity();                 获取容器的容量
        int size();                     获取容器中元素的个数
    修改size的方法:
        .resize(int num);               重新指定容器的长度, 若容器变长, 重新申请地址, 容器变短, 超出的元素被删除
        .resize(int num, T elem);       重新指定容器的长度, 若容器变长, 重新申请地址, elem填充新位置, 容器变短, 超出的元素被删除
    修改capacity的方法:
        .reserve(int capacity);         扩充元素容量(只能用来扩充不能用来缩减, 缩减使用匿名对象+swap()的方式)
        vector<int>(vec).swap(vec);     使用匿名对象+swap(vector<T> vec)的方式缩减容器容量
        .shrink_to_fit();               使用shrink_to_fit()的方式缩减容器容量
*/

int main() {
    vector<int> vec;

    insertIntDataToVector(vec);

    /* 3-1-1 使用isEmpty()方法判断vector是否为空 */
    bool isEmpty = vec.empty();
    cout << "isEmpty? " << isEmpty << endl;

    /* 3-1-2 使用capacity()方法获取容器容量(申请的地址大小) */
    int capacity = vec.capacity();
    cout << "vector capacity = " << capacity << endl;

    /* 3-1-3 使用size()方法获取vector元素长度 */
    int size = vec.size();
    cout << "vector size = " << size << endl;
    cout << endl;

//----------------------------------------------------
    /* 3-2-1 使用resize(int newSize)方法修改容器size */
    vec.resize(5);
    cout << "\nnew size = " << vec.size() << endl;
    cout << "new vector = ";
    printVector(vec);

    /* 3-2-2 使用resize(int newSize, T newValue)修改容器size, 并使用newValue填充空数据 */
    vec.resize(3, 10086);
    cout << "\nnew size = " << vec.size() << endl;

    cout << "new vector = ";
    printVector(vec);

    cout << endl;
//----------------------------------------------------
    /* 3-3-1 使用reserve(int capacity)修改容器容量 */
    vec.reserve(100000);
    cout << "\nnew size = " << vec.size() << endl;
    cout << "new capacity = " << vec.capacity() << endl;
    cout << "new vector = ";
    printVector(vec);


    /* 3-3-2-1 使用shrink_to_fit()的方式缩减容器容量  */
    vec.reserve(9999);
    vec.shrink_to_fit();
    cout << "\nnew size = " << vec.size() << endl;
    cout << "new capacity = " << vec.capacity() << endl;
    cout << "new vector = ";
    printVector(vec);


    /* 3-3-2 使用匿名对象+swap(vector<T> vec)的方式缩减容器容量  */
    vector<int>(vec).swap(vec);
    cout << "\nnew size = " << vec.size() << endl;
    cout << "new capacity = " << vec.capacity() << endl;
    cout << "new vector = ";
    printVector(vec);


    return 0;
}
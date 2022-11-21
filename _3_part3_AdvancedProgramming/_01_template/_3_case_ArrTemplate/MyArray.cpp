// Create by hui on 2022/11/22 1:26
// Code describe: 通用数组类
// Keyword      : 
//#pragma once
#include <iostream>
#include <string>

using namespace std;

template<class T>
class MyArray{
public:
    T * _arrAddr;
    int _capacity;
    int _size;
public:
    explicit MyArray(int capacity): _capacity(capacity){
        _size = 0;
        _arrAddr = new T[_capacity];
    }

    MyArray(const MyArray& myArray){
        _size = myArray._size;
        _capacity = myArray._capacity;
        /** 堆区开辟新空间防止浅拷贝 */
        _arrAddr = new T[myArray._capacity];
        /** 循环复制数据内容 */
        for (int i = 0; i < myArray._size; ++i) {
            this->_arrAddr[i] = myArray._arrAddr[i];
        }
    }

    MyArray& operator=(const MyArray& myArray){
        /** 判断堆区原来是否有数据有需要释放 */
        if (this->_arrAddr != nullptr){
            delete[] this->_arrAddr;
            this->_arrAddr = nullptr;
            this->_capacity = 0;
            this->_size = 0;
        }
        _size = myArray._size;
        _capacity = myArray._capacity;
        /** 堆区开辟新空间防止浅拷贝 */
        _arrAddr = new T[myArray._capacity];
        /** 循环复制数据内容 */
        for (int i = 0; i < myArray._size; ++i) {
            this->_arrAddr[i] = myArray._arrAddr[i];
        }

        return *this;

    }

    ~MyArray(){
//        cout << "[MyArray] destructor used ... " << endl;
        if (_arrAddr != nullptr){
            delete[] _arrAddr;
            _arrAddr = nullptr;
        }
    }
};

void test(){
    /** 测试有参构造 */
    MyArray<int> array1 = MyArray<int>(1);
    /** 测试拷贝构造 */
    MyArray<int> array2 = MyArray<int>(array1);
    /** 测试=运算符  */
    MyArray<int> array3 = MyArray<int>(100);
    array1 = array2 = array3;
    cout << array1._capacity << endl;

}
int main() {

    test();


    return 0;
}
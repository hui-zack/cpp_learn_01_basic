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

    /* 尾插法 */
    void add(const T& t){
        // 判断容量是否超标
        if (_capacity == this->_size){
            return;
        }
        this->_arrAddr[this->_size] = t;
        _size ++;
    }

    /* 尾删法 */
    void deleteOne(){
        if (this->_size == 0){
            return;
        }


        this->_size --;

    }

    /* 通过下标来访问数据 */
    T operator[](int index){
        return this->_arrAddr[index];
    }

    /* 获取数组容量 */
    int getCapacity(){
        return _capacity;
    }
    /* 获取数组大小 */

    int getSize(){
        return _size;
    }
};



class Camera{
public:
    string _name;
    int _id;
    Camera() = default;
    Camera(string name, int id): _name(name), _id(id){};
    void printInfo(){
        cout << "[Camera] _name = " << _name << ", _id = " << _id << endl;
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
/** 测试int类型 */
void testInt(){
    MyArray<string> array = MyArray<string>(10);
    for (int i = 0; i< 10; i++){
        string value = "value";
        value.append(to_string(i));
        array.add(value);
    }
    cout << array[9] << endl;
    cout << array._capacity << endl;
    cout << array._size << endl;

    array.deleteOne();

    cout << array._capacity << endl;
    cout << array._size << endl;

}
int main() {
    Camera camera1("大华枪机", 1);
    Camera camera2("海康枪机", 2);
    Camera camera3("大华全彩", 3);
    Camera camera4("海康全彩", 4);

    MyArray<Camera> cameraArray = MyArray<Camera>(10);
    cameraArray.add(camera1);
    cameraArray.add(camera2);
    cameraArray.add(camera3);
    cameraArray.add(camera4);

    for (int i = 0; i < cameraArray._size; ++i) {
        cameraArray[i].printInfo();

    }
    cout << endl;

    cameraArray.deleteOne();

    for (int i = 0; i < cameraArray._size; ++i) {
        cameraArray[i].printInfo();
    }

}
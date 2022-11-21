// Create by hui on 2022/11/21 22:57
// Code describe: 类模板成员函数的类外实现
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;

template<class nameType, class idType>
class Camera{
public:
    nameType _name;
    idType _id;
    static nameType _staticName;

    Camera();
    Camera(nameType name, idType id);
    ~Camera();
    void printInfo();

    static void staticGetInfo();
};

/* 5-1 模板类无参构造类外实现 */
template<class nameType, class idType>
Camera<nameType, idType>::Camera() = default;


/* 5-2 模板类有参构造类外实现 */
template<class nameType, class idType>
Camera<nameType, idType>::Camera(nameType name, idType id):_name(name), _id(id){};


/* 5-3 模板类析构类外实现 */
template<class nameType, class idType>
Camera<nameType, idType>::~Camera() = default;



/* 5-4 模板类成员函数类外实现 */
template<class nameType, class idType>
void Camera<nameType, idType>::printInfo() {
    cout << "_name = " << _name << ", _id = " << _id << endl;
}


/* 5-5 模板类静态成员变量的类外实现 */
template<class nameType, class idType>
nameType Camera<nameType, idType>::_staticName = "默认海康";



/* 5-6 模板类静态成员函数的类外实现 */
template<class nameType, class idType>
void Camera<nameType, idType>::staticGetInfo() {
    cout << "_staticName = " << Camera<nameType, idType>::_staticName << endl;
}

int main() {
    Camera<string, int> camera("海康枪机", 10011);
    camera.printInfo();
    string &basicString = Camera<string, int>::_staticName;
    cout << "_staticName = " << basicString << endl;

    return 0;
}
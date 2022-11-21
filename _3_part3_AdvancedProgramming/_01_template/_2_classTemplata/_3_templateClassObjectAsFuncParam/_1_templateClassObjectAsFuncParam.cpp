// Create by hui on 2022/11/21 19:23
// Code describe: 模板类的实例对象作为函数参数
// Keyword      : 

#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;


/** 编写一个模板类  */
template<class nameType, class idType>
class Camera{
public:
    nameType _name;
    idType _id;

    Camera(nameType name, idType id): _name(name), _id(id){};

    void printInfo(){
        cout << "[Camera] _name = " << _name << ", _id = " << _id << endl << endl;
    }
};

/** 下面三个函数是模板类实例对象作为函数形参的三种情况 */

/* 3-1-1 创建函数(参数为模板类)-形参模板类对象指定模板类型参数 */
void receiveTempClassObj1(Camera<string, int>& camera){
    camera.printInfo();
}

/* 3-2-1 创建函数(参数为模板类)-形参模板类对象的模板类型参数泛型化 */
template<class T1, class T2>
void receiveTempClassObj2(Camera<T1, T2>& camera){
    cout << "获取推导类型T1 = " << typeid(T1).name() << endl;
    cout << "获取推导类型T2 = " << typeid(T2).name() << endl;
    camera.printInfo();
}

/* 3-3-1 创建函数(参数为模板类)-形参模板类对象泛型化 */
template<class T>
void receiveTempClassObj3(T& camera){
    cout << "获取推导类型T = " << typeid(T).name() << endl;
    camera.printInfo();
}

int main() {
    /**  创建模板类实例对象 */
    Camera<string, int> camera = Camera<string, int>("海康相机", 11011);


    /* 3-1-2 调用具有泛型参数的函数 - 泛型参数接收方式: 形参模板类对象指定模板类型参数 */
    receiveTempClassObj1(camera);

    /* 3-2-2 调用具有泛型参数的函数 - 泛型参数接收方式: 形参模板类对象的模板类型参数泛型化 */
    receiveTempClassObj2(camera);

    /* 3-3-2 调用具有泛型参数的函数 - 泛型参数接收方式: 形参模板类对象泛型化 */
    receiveTempClassObj3(camera);

    return 0;
}
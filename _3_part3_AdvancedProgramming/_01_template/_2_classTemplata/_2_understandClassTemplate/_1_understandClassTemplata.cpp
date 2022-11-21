// Create by hui on 2022/11/21 18:56
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;

class Camera1{
public:
    void printCamera1(){
        cout << "[Camera1] is run" << endl;
    }
};


class Camera2{
public:
    void printCamera2() {
        cout << "[Camera2] is run" << endl;
    }
};

/* 2-1 编写模板类 */
template<class T>
class MyClass{
public:
    /* 2-1-1 编写泛型成员变量 */
    T object;

    /* 2-1-2 编写模板类成员函数 */
    void func1(){
        object.printCamera1();
    }

    void func2(){
        object.printCamera2();
    }

};

int main() {
    /* 2-2 调用模板类, 必须传入模板类型参数的具体类型 */
    MyClass<Camera1> myClass = MyClass<Camera1>();
    /* 2-2-1 调用模版类的成员函数, 该成员函数被调用时生成具体的函数代码 */
    myClass.func1();
//    myClass.func2();

    return 0;
}
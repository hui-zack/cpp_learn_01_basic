// Create by hui on 2022/11/22 0:22
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;



template<class nameType, class idType>
class Camera{
public:
    /* 6-1 友元全局函数在模板类中声明并实现-推荐 */
    friend void globalFuncClassInnerImpl(Camera<nameType, idType> & camera){
        cout << "[globalFunc] _name = " << camera._name << ", _id = " << camera._id << endl;
    }

    /* 6-2-1 友元全局函数在模板类中声明, 在模板类外实现 - 设计两次泛型推导- 不推荐 */
    template<class nameType1, class idType1>
    friend void globalFuncClassOuterImpl(Camera<nameType1, idType1> & camera);

private:
    nameType _name;
    idType _id;
public:
    Camera() = default;
    Camera(nameType name, idType id): _name(name), _id(id){};

    void printInfo(){
        cout << "[Camera] _name = " << _name << ", _id = " << _id << endl;
    }
};


/* 6-2-2 模板类外实现友元全局函数 */
template<class nameType, class idType>
void globalFuncClassOuterImpl(Camera<nameType, idType> & camera){
    cout << "[globalFunc] _name = " << camera._name << ", _id = " << camera._id << endl;
}


int main() {
    Camera<string, int> camera = Camera<string, int>("海康枪机", 10);
    globalFuncClassInnerImpl(camera);

    globalFuncClassOuterImpl(camera);
    return 0;
}
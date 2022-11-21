// Create by hui on 2022/11/21 13:34
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;

/* 1-1 创建Camera的类模板(变量类型需要在template中指定) */
template<class nameType, class idType = int>    /** 类模板的模板参数可以有默认类型 */
class Camera{
public:
    nameType _name;
    idType _id = 1;

    Camera(nameType name, idType id): _name(name), _id(id){};

    void toString(){
        cout << "_name = " << _name << ", _id = " << _id << endl;
    }
};

int main() {
    /* 1-2 根据类模板创建对象(创建时必须通过模板类型参数指定类型) */
    Camera<string, int> camera = Camera<string, int>("海康枪机", 1);     /** 类模板没有自动类型推导 */
    camera.toString();

    /* 1-3 根据类模板创建对象(如果类模板的参数列表已经有默认类型, 使用默认的模板类型参数可以不写该类型 */
    Camera<string> camera1 = Camera<string>("海康枪机", 2);
    camera.toString();
    return 0;
}
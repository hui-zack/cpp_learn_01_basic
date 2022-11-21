// Create by hui on 2022/11/21 21:03
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;
/* 4-1 编写模板类作为父类 */
template<class nameType>
class BashTClass{
public:
    nameType _name;
    string name2;
};


/* 4-2-1 编写模板类的普通子类 */
class SonClass1: public BashTClass<string>{
public:
    void setName(string name){
        _name = move(name);
    }
    void printInfo(){
        cout << "[SonClass1] _name = " << _name << endl;
    }
};

/* 4-3-1 编写模板类的模板子类 */
template<class sonNameType, class valueType>
class SonClass2: public BashTClass<sonNameType>{    /* 4-3-1-1 将一个模板类型参数连接到父类的模板类型参数 */
public:
    valueType _value;

    void setName(sonNameType name){
        this->_name = name;                         /* 4-3-1-2 模板父类的成员变量或成员函数只能通过this访问 */

    }
    void setValue(valueType value){
        _value = value;
    }

    void printInfo(){
        cout << "[SonClass2] name = " << this->_name << ", value = " << _value << endl;
    }

};

int main() {
    /* 4-2-2 创建模板类普通子类的实例对象 */
    SonClass1 sonClass1 = SonClass1();
    sonClass1._name = "hui";
    sonClass1.printInfo();

    /* 4-3-2 创建模板类模板子类的实例对象 */
    SonClass2<string, int> sonClass2 = SonClass2<string, int>();
    sonClass2.setName("张辉");
    sonClass2.setValue(10086);
    sonClass2.printInfo();

    return 0;
}
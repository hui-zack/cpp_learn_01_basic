// Create by hui on 2022/11/6 0:01
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <utility>
using namespace std;

class Phone{
private:
    string m_name;
public:

    Phone() {
        cout << "无参调用" << endl;
    }

    Phone(string name) {
        this->m_name = std::move(name);
        cout << "有参调用" << endl;
    }

    Phone(const Phone & phone){
        cout << "拷贝构造" << endl;
    }
};

class Person{

private:
    string m_name;
    Phone m_phone;

public:

    double weight;
    string home;
    string test;
    /** 普通方式初始化, 调用了一个自定义成员变量的无参来开辟对象空间, 又调用了一次成员变量的有参创建对象后复制给之前开辟的对象 */
//    Person(string name, string phoneName){
//        this->m_name = move(name);
//        this->m_phone =move(phoneName);
//    }
    /* 4-2 初始化列表进行初始化, 只调用了一次自定义成员变量的有参 */
    Person(string name, string phoneName) : m_name(move(name)), m_phone(move(phoneName)) {}
};




int main() {

    Person person = Person("hui", "mi");

    return 0;
}
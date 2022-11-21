// Create by hui on 2022/6/16 13:56
// Code describe: 运算符重载-自定义数据类型不同实例之间的运算符运算
//                  1-1 成员函数重载运算符(+) 函数第0次重载
//                  1-2 成员函数重载运算符(+) 函数第1次重载
//                  2 全局函数重载加号(+)

// Keyword      :


#include <iostream>

using namespace std;

class Person{
public:
    int num1 = 0;
    int num2 = 0;


    /* 1-1-1 类内重载加号运算符 */
    Person operator+(Person &p){
        Person tempPerson = Person();

        tempPerson.num1 = this->num1 + p.num1;
        tempPerson.num2 = this->num2 + p.num2;

        return tempPerson;
    }

    void show(){
        cout << "[show] num1=" << this->num1 << endl;
        cout << "[show] num2=" << this->num2 << endl;
    }
};


/*  1-2-1 全局函数重载减号运算符  */
Person operator-(Person &p1, Person &p2){
    Person tempPerson = Person();
    tempPerson.num1 = p1.num1 - p2.num1;

    tempPerson.num2 = p1.num2 - p2.num2;

    return tempPerson;
}



int main() {
    Person p1;
    p1.num1 = 1024;
    p1.num2 = 1024;

    Person p2;
    p2.num1 = 1024;
    p2.num2 = 1024;

    /* 1-1-2 Person实例对象的加号运算 */
    Person p3 = p1 + p2;  //本质上是: Person p3 = p1.operator+(p2);

    /* 1-2-2 Person实例对象的减号运算 */
    Person p4 = p1 - p2;  //本质上是: Person p4 = operator-(p1, p2);

    p3.show();
    p4.show();
    return 0;
}
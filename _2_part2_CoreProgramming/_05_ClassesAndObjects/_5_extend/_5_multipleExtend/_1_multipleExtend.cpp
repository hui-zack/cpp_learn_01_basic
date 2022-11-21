// Create by hui on 2022/11/14 14:18
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;

/** 父类1 */
class Animal1{
public:
    string name = "Animal1";
};

/** 父类2 */
class Animal2{
public:
    string name = "Animal2";
};

/* 5-1 Cat继承Animal1类和Animal2类 */
class Cat: public Animal1, public Animal2{
    string name = "Cat";
};

int main() {
    Cat cat = Cat();

    /* 5-2 Cat实例对象访问父类Animal1的name成员变量 */
    cout << cat.Animal1::name << endl;

    /* 5-3 Cat实例对象访问父类Animal2的name成员变量 */
    cout << cat.Animal2::name << endl;

    return 0;
}
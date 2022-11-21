// Create by hui on 2022/11/12 12:25
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Animal{
public:
    string name = "Animal";
    string type = "none";

    void eat(){
        cout << "[Animal] eating ... " << endl;
    }

    void eat(string food){
        cout << "[Animal] eating " + move(food) << endl;
    }
};

class Cat: public Animal{
public:
    /** 子类name函数, 父类Animal中也有同名的一个成员变量 */
    string name = "Cat";

    /** 子类eat()函数, 父类Animal中具有同名的eat()函数和eat(string food)函数 */
    void eat(){
        cout << "[Cat] eating... " << endl;
    }
};


int main() {
    Cat cat = Cat();

    /* 3-1 调用重名的父类成员属性 */
    cout << "[main] Animal's name = " << cat.Animal::name << endl;

    /* 3-2 调用不重名的父类成员属性 */
    cout << "[main] Animal's type = " << cat.type << endl;

    /** 调用和父类重名的自身成员属性 */
    cout << "[main] cat't name = " << cat.name << endl;

    /* 3-3 调用重名的父类成员函数 */
    cat.Animal::eat();

    /* 3-4 调用父类重名的成员重载函数 */
    cat.Animal::eat("mouse");

    /** 调用和父类重名的自身成员函数 */
    cat.eat();
    return 0;
}
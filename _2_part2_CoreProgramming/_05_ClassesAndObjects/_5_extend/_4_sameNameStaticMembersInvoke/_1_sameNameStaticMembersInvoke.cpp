// Create by hui on 2022/11/13 3:45
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;

class Animal{
public:
    static int AllWater;
    static int AllWeight;

    static void eat(){
        cout << "[Animal] eating ..." << endl;
    }

    static void eat(string food){
        cout << "[Animal] eating " + move(food) << endl;
    }


};

int Animal::AllWater = 100;
int Animal::AllWeight = 50000;

class Cat: public Animal{
public:
    static int AllWater;

    static void eat(){
        cout << "[Cat] eating ..." << endl;
    }

};

int Cat::AllWater = 200;

int main() {
    /* 4-1-1 类名调用父类重名的静态成员属性  */
    cout << Cat::Animal::AllWater << endl;

    /* 4-1-2 类名调用父类不重名的静态成员属性 */
    cout << Cat::AllWeight << endl;

    /**  类名调用和父类重名的自身静态成员属性 */
    cout << Cat::AllWater << endl;

    /* 4-1-3 类名调用父类重名的静态成员函数 */
    Cat::Animal::eat();

    /* 4-1-4 类名调用父类重名的静态成员重载函数 */
    Cat::Animal::eat("食物");

    /** 调用和父类重名的自身成员函数 */
    Cat::eat();


    cout << "\n----------\n" << endl;


    Cat cat = Cat();

    /* 4-2-1 实例对象调用父类重名的静态成员属性  */
    cout << cat.Animal::AllWater << endl;

    /* 4-2-2 实例对象调用父类不重名的静态成员属性 */
    cout << cat.AllWeight << endl;

    /**  实例对象调用和父类重名的自身静态成员属性 */
    cout << cat.AllWater << endl;

    /* 4-2-3 实例对象调用父类重名的静态成员函数 */
    cat.Animal::eat();

    /* 4-2-4 实例对象调用父类重名的静态成员重载函数 */
    cat.Animal::eat("食物");

    /** 实例对象和父类重名的自身成员函数 */
    cat.eat();

    return 0;
}
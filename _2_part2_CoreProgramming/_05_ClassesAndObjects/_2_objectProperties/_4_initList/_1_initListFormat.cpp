// Create by hui on 2022/5/27 15:24
// Code describe: 构造函数初始化列表
// Keyword      : 

#include <iostream>

using namespace std;

class Camera{
    /* 4-1-1 类中只包含公有属性, c++自动提供一个包含所有公有属性的初始化列表构造方法 */
public:
    string name;
    int id;
//    Camera(string theName, int theId): name(move(theName)), id(theId){};

};

class Person {
private:
    int m1;
    int m2;
    int m3;

public:
    /* 4-2-1 类中包含非公有属性, 自定义初始化列表的构造函数 */
    Person(int a, int b, int c);
//    Person(int a, int b, int c): m1(a), m2(b), m3(c) {};

};

Person::Person(int a, int b, int c): m1(a), m2(b), m3(c) {};
int main() {
    /* 4-1-2 成员属性全公有的类, c++给的默认初始化列表构造方法只有一种方式创建对象(重写后可以两种) */
    Camera camera = {"海康枪机", 10};
    // Camera camera1 = Camera("海康枪机", 10);

    /* 4-2-2 自定义初始化列表的构造方法有两种方式创建对象 */
    Person person = Person(10, 20, 30);
    Person person1 = {10, 20, 30};
    return 0;
}
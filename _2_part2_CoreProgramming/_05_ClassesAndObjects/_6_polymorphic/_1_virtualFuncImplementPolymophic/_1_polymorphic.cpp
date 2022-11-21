// Create by hui on 2022/11/15 21:03
// Code describe: 多态
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;

class Animal{
public:
    /* 1-1-1 父类中使用virtual修饰成员函数, 设置为虚函数(把实例对象里指向函数实现的全常指针修改为常量指针) */
    virtual void speak() {
        cout << "[Animal] animal is speaking ... " << endl;
    }
};

class Dog: public Animal{
public:
    /* 1-1-2 子类中重写父类的虚函数 */
    void speak() override{
        cout << "[Dog] dog is speaking ... " << endl;
    }
};



class Cat: public Animal{
public:
    /* 1-1-2 子类中重写父类的虚函数 */
    void speak() override{
        cout << "[Cat] cat is speaking ... " << endl;
    }

};


/* 1-3-1 父类引用作为形参且子类对象作为实参-函数的多态传参 */
void speakCite(Animal& animal){
    animal.speak();
}

/* 1-3-2 父类指针作为形参且子类对象地址作为实参-函数的多态传参 */
void speakPointer(Animal* animal){
    animal->speak();
}

int main() {
    Cat cat = Cat();
    Dog dog = Dog();

    /* 1-4-1 main中直接使用多态-父类引用指向子类对象 */
    Animal & animal1 = cat;
    animal1.speak();

    /* 1-4-2 main中直接使用多态-父类指针指向子类对象地址 */
    Animal * animal2 = &dog;
    animal2->speak();

    cout << "----" << endl;

    /* 1-4-3 调用多态传参的函数使用多态 */
    speakCite(cat);
    speakPointer(&dog);

    return 0;
}
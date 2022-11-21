// Create by hui on 2022/11/11 21:37
// Code describe: 三种继承方式
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;

class Animal{
private:
    string privateValue = "privateValue";
protected:
    string protectedValue = "protectedValue";
public:
    string publicValue = "publicValue";
};

/* 1-1 public方式继承 */
class Duck: public Animal{
    /** 可继承父类的公有和保护内容, 在子类中被继承的内容保持和父类相同的权限 */

};

/* 1-2 protected方式继承 */
class Dog: protected Animal{
    /** 可继承父类的公有和保护内容, 在子类中被继承的内容均为保护权限 */
public:
    string publicValue ;
    void test(){
        this->protectedValue = "fdsaf";
    }
};

/* 1-3 private方式继承 */
class Cat: private Animal{
    /** 可继承父类的公有和保护内容, 在子类中被继承的内容均为私有权限 */
};

int main() {
    Duck duck = Duck();

    Dog dog = Dog();

    auto cat = Cat();

    cout << duck.publicValue << endl;
     cout << dog.publicValue << endl;  // 保护属性无法访问
    // cout << cat.publicValue << endl;  // 私有属性无法访问
    return 0;
}
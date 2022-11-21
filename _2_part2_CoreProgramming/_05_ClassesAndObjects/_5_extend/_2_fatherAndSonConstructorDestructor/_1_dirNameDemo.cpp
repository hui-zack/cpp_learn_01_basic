// Create by hui on 2022/11/12 0:58
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;

class Animal{
public:
    Animal(){
        cout << "[Animal] constructor init " << endl;
    }

    ~Animal(){
        cout << "[Animal] destructor used" << endl;
    }
};

class Cat: public Animal{
public:
    Cat(){
        cout << "[Dog] constructor init " << endl;
    }

    ~Cat(){
        cout << "[Dog] destructor used" << endl;
    }
};


int main() {
    /* 2-1 子类对象调用时父子构造和析构执行顺序 */
    Cat cat = Cat();

    return 0;
}`
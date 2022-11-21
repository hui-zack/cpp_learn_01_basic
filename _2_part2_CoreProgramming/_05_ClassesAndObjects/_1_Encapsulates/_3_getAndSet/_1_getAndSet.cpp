// Create by hui on 2021/12/28 11:01
// Code describe: 设置成员变量权限
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;

/** 通常将属性设置为私有, 通过公有的get和set方法来控制实例化对象后该属性的读写权限 */

class Person{

private:
    string name;            /** 设置可读可写 */
    int port;               /** 设置只读权限 */
    string LoverName;       /** 设置只写权限 */

/* 3-1 get和Set方法控制私有属性读写权限 */
public:
    void setName(string name){
        this->name = name;
    }

    string getName(){
        return name;
    }

    int getAge(){
        port = 19;
        return port;
    }

    void setLover(const string& name){
        LoverName = name;
    }
};

int main() {

    Person p1;
    p1.setName("张三");
    cout << "class.name: " << p1.getName() << endl;
    cout << "class.port: " << p1.getAge() << endl;
    p1.setLover("her");

    return 0;
}
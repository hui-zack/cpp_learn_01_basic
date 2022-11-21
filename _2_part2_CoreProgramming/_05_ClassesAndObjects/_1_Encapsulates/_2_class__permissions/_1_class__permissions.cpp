// Create by hui on 2021/12/27 16:13
// Code describe: 类-权限
// Keyword      : public protected private

#include <iostream>

using namespace std;

class Person{
/* 2-1 公共权限编写属性或成员函数 */
public:
    string name;

/* 2-2 保护权限编写属性或成员函数 */
protected:
    string car;

/* 2-3 私有权限编写属性或成员函数 */
private:
    void func(){
        this->name = "张三";
        this->car = "比亚迪";
    }
};

int main() {
    Person p1{};
    cout << p1.name << endl;


    return 0;
}
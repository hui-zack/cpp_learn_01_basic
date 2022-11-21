// Create by hui on 2021/12/27 14:05
// Code describe: 设计一个学生类, 属性有姓名和学号, 可以给姓名和学号赋值, 可以现实学生的姓名和学号
// Keyword      : 

#include <iostream>
#include <string>
using namespace std;

/* 1-2-1 简单封装学生类, 编写toString */
class Student{

public:
    string s_name;                    /* 类属性 / 成员属性 / 成员变量 */
    int id;

    void setName(string name){      /* 成员行为 / 成员方法 */
        this->s_name = name;
    }

    void setId(int id){
        this->id = id;
    }

    void toString() {
        cout << "name: " << s_name << "; id: " << id << endl;
    }

};

int main() {
    /* 1-2-2 示例化第一个学生类对象 */
    Student stu1{};

    stu1.s_name = "张三";
    stu1.id = 16001;
    stu1.toString();

    /* 1-2-3 示例化第二个学生类对象 */
    Student stu2{};
    stu2.setName("李四");
    stu2.setId(16002);
    stu2.toString();

    return 0;
}
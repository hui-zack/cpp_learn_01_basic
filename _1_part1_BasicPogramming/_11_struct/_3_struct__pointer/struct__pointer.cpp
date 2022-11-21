// Create by hui on 2021/12/16 13:23
// Code describe: 指针访问结构体元素
// Keyword      : ->

#include <iostream>

using namespace std;

struct Student{
    string s_name;
    int age;
    int score;
};

int main() {
    struct Student s1 = {"zack", 22, 89};
    /* 3-1 获取结构体对象的指针 */
    Student* p = &s1;
    /* 3-2 使用指针访问结构体属性 */
    string name = p->s_name;
    string &sName = p->s_name;

    cout << name << endl;
    cout << sName << endl;
    cout << p->s_name << " " << p->age << " " << p->score << endl;        //* p->name; 指针访问结构体元素 "->"

    return 0;
}
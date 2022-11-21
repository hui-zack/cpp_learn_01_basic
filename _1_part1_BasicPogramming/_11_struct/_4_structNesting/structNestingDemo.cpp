// Create by hui on 2021/12/16 13:39
// Code describe: 结构体嵌套结构体
// Keyword      : null

#include <iostream>
#include <string>
using namespace std;

/* 4-1 编写student结构体 */
struct Student{
    string s_name;
    int age;
    int score;
};

/* 4-2 编写teacher结构体, 其元素包含student类型 */
struct teacher{
    int id;
    string t_name;
    int age;
    struct Student stu;             //* 结构体嵌套结构体
};


int main() {
    /* 4-3 实例一个teacher结构体 */
    teacher t = {001, "魏天行", 49, {"zack", 22, 89}};

    cout << "老师姓名: " << t.t_name << endl;
    cout << "老师编号: " << t.id << endl;
    cout << "老师年龄: " << t.age << endl;
    cout << "辅导学生姓名: " << t.stu.s_name << endl;
    cout << "辅导学生年龄: " << t.stu.age << endl;
    cout << "辅导学生分数: " << t.stu.score << endl;

    return 0;
}
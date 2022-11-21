// Create by hui on 2021/12/16 10:18
// Code describe: struct创建变量的三种方式; 创建学生数据类型{姓名, 年龄, 分数}
// Keyword      : struct

#include <iostream>
#include <string>
using namespace std;

/* 1 创建结构体 */
struct Student{                                            //* 自定义数据类型; struct创建Student数据类型
    string s_name;                                           //* struct student{...}s3; struct 创建方式3
    int age;
    int score;
};

int main() {

    struct Student s1;                                                 /* 1-2-1 实例化结构体 方式一 */
    s1.s_name = "Zack";
    s1.age = 18;
    s1.score = 100;
    cout << s1.s_name << " " << s1.score << " " << s1.age << endl;


    struct Student s2 = {"Tom", 25, 20};            /* 1-2-2 实例化结构体 方式二 */
    cout << s2.s_name << " " << s2.score << " " << s2.age << endl;

    int i = 34;

    return 0;
}
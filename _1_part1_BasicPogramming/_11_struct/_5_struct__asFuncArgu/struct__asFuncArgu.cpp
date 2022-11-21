// Create by hui on 2021/12/16 14:39
// Code describe: 结构体作为函数参数, 函数内打印结构体所有元素(如果虚线修改住函数中的数据, 用值传递, 反之用地址传递)
// Keyword      : 

#include <iostream>

using namespace std;

struct Student{
    string s_name;
    int age;
    int score;
};
/* 5-1 结构体作为参数值传递 */
void func1(struct Student student){                                         //* 值传递
    cout << student.s_name << " " << student.score << " " << student.age << endl;
}
/* 5-2 结构体的指针作为形参 */
void func1(struct Student* studentPointer){                                          //* 指针传递, 如果对元素修改, 则main中s1也会改变
    studentPointer->s_name = "hui";
    cout << studentPointer->s_name << " " << studentPointer->score << " " << studentPointer->age << endl;
}

int main() {
    struct Student s1 ={"zack", 22, 89};

    func1(s1);
    Student* p = & s1;
    func1(p);

    func1(s1);

    return 0;
}
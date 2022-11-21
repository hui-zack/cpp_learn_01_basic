// Create by hui on 2021/12/16 15:06
// Code describe:  函数使用指针传递时, 可以减少内存消耗, 而且不会复制新的副本出来
// Keyword      : const struct
/*
 * 使用场景:
 *
 *
 * */
#include <iostream>

using namespace std;

struct Student {
    string s_name;
    int age;
    int score;
};


void printStudent(struct Student s) {
    cout << s.s_name << " " << s.age << " " << s.score << endl;

}
/* 5-3 结构体指针形参设置为常量指针防止误操作 */
void printStudent(const struct Student* p){                        //* (const struct student* p) 常量指针形参; 修改传入的指针为常量指针, 防止内容误操作
    cout << p->s_name << " " << p->score << " " << p->age << endl;
}

int main() {
    struct Student s1 = {"zack", 22, 89};
    struct Student* p = &s1;
    printStudent(p);

    return 0;
}
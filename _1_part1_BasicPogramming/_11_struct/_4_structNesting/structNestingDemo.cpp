// Create by hui on 2021/12/16 13:39
// Code describe: �ṹ��Ƕ�׽ṹ��
// Keyword      : null

#include <iostream>
#include <string>
using namespace std;

/* 4-1 ��дstudent�ṹ�� */
struct Student{
    string s_name;
    int age;
    int score;
};

/* 4-2 ��дteacher�ṹ��, ��Ԫ�ذ���student���� */
struct teacher{
    int id;
    string t_name;
    int age;
    struct Student stu;             //* �ṹ��Ƕ�׽ṹ��
};


int main() {
    /* 4-3 ʵ��һ��teacher�ṹ�� */
    teacher t = {001, "κ����", 49, {"zack", 22, 89}};

    cout << "��ʦ����: " << t.t_name << endl;
    cout << "��ʦ���: " << t.id << endl;
    cout << "��ʦ����: " << t.age << endl;
    cout << "����ѧ������: " << t.stu.s_name << endl;
    cout << "����ѧ������: " << t.stu.age << endl;
    cout << "����ѧ������: " << t.stu.score << endl;

    return 0;
}
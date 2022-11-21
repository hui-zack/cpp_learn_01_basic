// Create by hui on 2021/12/16 15:45
// Code describe: 案例-结构体
// Keyword      : 

#include <iostream>

using namespace std;

/*
 * 案例描述:
 *  学校在做毕设项目, 每名老师要带5个学生, 总共有3名老师, 需求如下:
 *      设计学生和老师的结构体:
 *      学生结构体有:
 *          姓名
 *          考试分数
 *      其中在老师的结构体有:
 *          老师姓名,
 *          存放5名学生的数组作为结构体元素
 *  main
 *      创建数组存放三名老师
 *      通过函数给每个老师及所带的学生赋值,
 *      创建函数最终打印出老师数据, 以及老师带的学生数据
 * */

struct Student {
    string s_name;
    int score;
};

struct teacher{
    string t_name;
    struct Student sArray[5];
};

void teacher_assign(teacher tArray[], int arr_len){
    string nameSeed = "ABCDE";
    for (int i = 0; i < arr_len; i++){
        string name_str = "teacher_";
        name_str += nameSeed[i];

        tArray[i].t_name = name_str;                        //* t_name赋值

        for (int j = 0; j < 5; j++){
            tArray[i].sArray[j].s_name = "student_";
            tArray[i].sArray[j].s_name += to_string(j);
            tArray[i].sArray[j].score = 88;

        }
    }
}

void teacher_print(const teacher tArray[], int arr_len){
    for (int i = 0; i < arr_len; i++){
        cout << "t-name: " << tArray[i].t_name << endl;

        for (int j = 0; j < 5; j++){
            cout << "    " << tArray[i].sArray[j].s_name << " ";
            cout << "    " << tArray[i].sArray[j].score << endl;
        }
    }
    cout << "----" << endl;
}

int main() {
    // 1. 创建三名老师的数组
    struct teacher tArr[3];
    int len = sizeof(tArr)/sizeof(tArr[0]);
    // 2. 通过函数给3名老师的信息赋值, 并给来时候带的学生赋值
    teacher_assign(tArr, len);
    // 3. 打印所有老师及所带的学生信息
    teacher_print(tArr, len);

    return 0;
}
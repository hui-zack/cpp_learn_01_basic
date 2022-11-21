// Create by hui on 2021/12/16 11:28
// Code describe: 数组存储结构体
// Keyword      : struct student stuArr{2] = {{"zack", 18, 90}, {"tom", 20, 93}};

#include <iostream>
#include <string>

using namespace std;

struct Student{
    string s_name;
    int age;
    int score;
};

int main() {
    /* 2-1 实例化一个结构体数组 */
    struct Student stuArr[3] = {
            {"zack", 18, 90},
            {"tom", 20, 93},
            {"clerk", 24, 87}
    };

    /* 2-2 遍历结构体数组 */
    int arr_length = sizeof(stuArr)/sizeof(stuArr[0]);
    for (int i = 0; i < arr_length; i++){
        cout << "   ";
        cout << stuArr[i].s_name << " " << stuArr[i].age << " " << stuArr[i].score << endl;
    }

    return 0;
}
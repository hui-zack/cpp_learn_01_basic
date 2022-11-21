// Create by hui on 2021/11/1 15:58
// Code describe: 根据考试分数判断考上的学校(if嵌套实现)
// Keyword      : if...else...

#include <iostream>

using namespace std;

/*
 * 需求:
 *      提示用户输入一个高考考试分数, 根据分数做出如下判断
 *      分数如果大于600则考上一本, 大于500考上二本, 大于400考上三本, 其余未考上
 *      在一本分数中, 如果大于700考上北大, 大于650考上清华, 大于600考上人大
 * */

int main() {
    int score = 0;
    cout << "输入你的高考成绩: ";
    cin >> score;
    cout << endl;
    cout << "你输入的成绩为" << score << "分" << endl;

    if (score >= 600) {
        cout << "你考上了一本, ";
        if (score >= 700) {
            cout << "上北大" << endl;
        } else if (score >= 650) {
            cout << "上清华" << endl;
        } else {
            cout << "上人大" << endl;
        }
    } else if (score > 500) {
        cout << "你考上二本了" << endl;
    } else if (score > 400) {
        cout << "你考上三本了" << endl;
    } else{
        cout << "你惨了, 没考上大学" << endl;
    }

    cout << score << endl;

    return 0;
}
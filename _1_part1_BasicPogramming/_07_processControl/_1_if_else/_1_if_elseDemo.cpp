// Create by hui on 2021/11/1 15:18
// Code describe: 键盘输入分数, 判断是否考上清华(cin + if实现)
// Keyword      : if

#include <iostream>

using namespace std;

int main() {

    int score = 0;
    cout << "请输入您的考试成绩: " << endl;
    cin >> score;
    cout << "您输入的分数为" << score << "分" << endl;

    if (score >= 600){
        cout << "恭喜你, 成功考上了一本!" << endl;
    }
    else if (score >= 500){
        cout << "恭喜你, 成功考上二本"<<  endl;
    }
    else if (score >= 300) {
        cout << "你成功考上三本" << endl;
    }
    else if (score >= 200){
        cout << "你考上专科了" << endl;
    } else {
        cout << "你的分数太低了, 没有被任何学校录取" << endl;
    }

    return 0;
}
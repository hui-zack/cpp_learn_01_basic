// Create by hui on 2021/11/2 10:32
// Code describe: switch结构 默认case穿透
// Keyword      : switch break

#include <iostream>

using namespace std;

int main() {
    int movie_score = 0;
    cout << "请输入电影的分数:" << endl;
    cin >> movie_score;

    switch (movie_score) {
        case 5:
            cout << "您认为是非常优秀的电影" << endl;
            break;
        case 4:
            cout << "您认为是十分不错的电影" << endl;
            break;
        case 3:
            cout << "您认为是比较好看的电影" << endl;
            break;
        case 2:
            cout << "您认为这是很一般的电影" << endl;
            break;
        case 1:
            cout << "您认为这是个烂片" << endl;
            break;
        case 0:
            cout << "您认为是垃圾电影" << endl;
            break;
    }

    return 0;
}
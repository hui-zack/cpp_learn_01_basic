// Create by hui on 2021/11/2 14:43
// Code describe: do while循环, 无论条件是否成立都执行一次code;
// Keyword      : do while

#include <iostream>
#include <ctime>
using namespace std;

int main() {
    cout << "猜数字游戏开始\n";
    srand((unsigned int)time(NULL));
    int num = rand() % 100 + 1;
    int val;
    do {

        cout << "输入你猜测的数字" << endl;
        cin >> val;

        if (num == val){
            cout << "你猜对了\n";
            break;
        } else if (val < num) {
            cout << "你猜的小了\n";
        } else {
            cout << "你猜的大了\n";
        }

    }
    while (true);

    return 0;
}
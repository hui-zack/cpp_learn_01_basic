// Create by hui on 2021/11/2 13:07
// Code describe: 猜数字游戏
// Keyword      : while 生成随机数
/*
 * 需求:
 *      1. 系统生成随机数
 *      2. 玩家进行猜测
 *      3. 判断玩家的猜测, 错了回到第二布
 * */

#include <ctime>
#include <iostream>

using namespace std;

int main() {
    srand((unsigned int)time(NULL));            //* 生成随机数-使用当前事件来添加随机数种子
    int num = rand() % 100 + 1;
    string a = "123";
    cout << "猜数字游戏开始" << endl;
//    cout << num << endl;
    int val = 0;
    cout << "输入你猜的数字: " << endl;
    cin >> val;

    while (true) {
        if (num == val){
            cout << "你猜对了\n";
            break;
        } else if (val < num) {
            cout << "你猜的小了\n";
        } else {
            cout << "你猜的大了\n";
        }

        cout << "输入你猜的数字: " << endl;
        cin >> val;
    }

    return 0;
}
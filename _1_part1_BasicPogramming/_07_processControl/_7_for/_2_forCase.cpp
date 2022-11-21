// Create by hui on 2021/11/3 13:37
// Code describe: 案例-for循环
// Keyword      : for
/*
 * 需求:
 *  1-100的组织, 如果个位或十位含有7, 或则该数字是7的倍数, 打印敲桌子, 否则打印数字本身
 * */
#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 100; i++){
        if (i % 10 == 7 or (i / 10 % 10) == 7 or i % 7 == 0) {
            cout << "敲桌子 " << i << endl;
        } else {
            cout << i << endl;
        }

    }

    return 0;
}
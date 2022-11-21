// Create by hui on 2021/11/2 17:05
// Code describe: 找出所有的三位水仙花数
// Keyword      : 

#include <iostream>

using namespace std;

int main() {
    int num = 99;
    while (num < 999) {
        num++;
        int a = num % 10;
        int b = num / 10 % 10;
        int c = num / 100;

        if ((a * a * a + b * b * b + c * c * c) == num) {
            cout << num << endl << endl;
        }
    }

    return 0;
}
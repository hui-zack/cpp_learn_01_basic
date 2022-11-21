// Create by hui on 2021/11/1 16:45
// Code describe: 三目运算符
// Keyword      : 1 ? 2 : 3;

#include <iostream>

using namespace std;

int main() {
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    cout << "输入三只小猪的体重" << endl;
    cout << "A小猪体重:" << endl;
    cin >> num1;
    cout << "B小猪体重:" << endl;
    cin >> num2;
cout << "C小猪体重:" << endl;
    cin >> num3;

    //* 三目运算符嵌套实现比三只小猪体重
    num1 > num2 ? (num1>num3 ? cout << "小猪A最重\n": cout << "小猪C最重\n") << endl : (num2>num3 ? cout << "小猪B最重\n": cout << "小猪C最重\n");
    return 0;
}
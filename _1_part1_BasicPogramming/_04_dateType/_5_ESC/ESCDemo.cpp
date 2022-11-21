// Create by hui on 2021/10/30 22:48
// Code describe: 转义字符
// Keyword: /n;  /t;  //

#include <iostream>

using namespace std;

int main() {
    cout << "hello   world\n";          //* \n 换行符
    cout << "123\tworld" << endl;       //* \t 补全字符(补全8个)
    cout << "\\" << endl;               //* \\ 转义字符

    return 0;
}
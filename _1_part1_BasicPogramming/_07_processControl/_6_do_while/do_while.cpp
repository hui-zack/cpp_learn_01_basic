// Create by hui on 2021/11/2 14:43
// Code describe: do whileѭ��, ���������Ƿ������ִ��һ��code;
// Keyword      : do while

#include <iostream>
#include <ctime>
using namespace std;

int main() {
    cout << "��������Ϸ��ʼ\n";
    srand((unsigned int)time(NULL));
    int num = rand() % 100 + 1;
    int val;
    do {

        cout << "������²������" << endl;
        cin >> val;

        if (num == val){
            cout << "��¶���\n";
            break;
        } else if (val < num) {
            cout << "��µ�С��\n";
        } else {
            cout << "��µĴ���\n";
        }

    }
    while (true);

    return 0;
}
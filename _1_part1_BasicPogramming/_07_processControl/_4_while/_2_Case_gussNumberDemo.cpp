// Create by hui on 2021/11/2 13:07
// Code describe: ��������Ϸ
// Keyword      : while ���������
/*
 * ����:
 *      1. ϵͳ���������
 *      2. ��ҽ��в²�
 *      3. �ж���ҵĲ²�, ���˻ص��ڶ���
 * */

#include <ctime>
#include <iostream>

using namespace std;

int main() {
    srand((unsigned int)time(NULL));            //* ���������-ʹ�õ�ǰ�¼���������������
    int num = rand() % 100 + 1;
    string a = "123";
    cout << "��������Ϸ��ʼ" << endl;
//    cout << num << endl;
    int val = 0;
    cout << "������µ�����: " << endl;
    cin >> val;

    while (true) {
        if (num == val){
            cout << "��¶���\n";
            break;
        } else if (val < num) {
            cout << "��µ�С��\n";
        } else {
            cout << "��µĴ���\n";
        }

        cout << "������µ�����: " << endl;
        cin >> val;
    }

    return 0;
}
// Create by hui on 2021/11/3 13:37
// Code describe: ����-forѭ��
// Keyword      : for
/*
 * ����:
 *  1-100����֯, �����λ��ʮλ����7, �����������7�ı���, ��ӡ������, �����ӡ���ֱ���
 * */
#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 100; i++){
        if (i % 10 == 7 or (i / 10 % 10) == 7 or i % 7 == 0) {
            cout << "������ " << i << endl;
        } else {
            cout << i << endl;
        }

    }

    return 0;
}
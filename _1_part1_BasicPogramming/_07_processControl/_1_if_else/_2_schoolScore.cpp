// Create by hui on 2021/11/1 15:58
// Code describe: ���ݿ��Է����жϿ��ϵ�ѧУ(ifǶ��ʵ��)
// Keyword      : if...else...

#include <iostream>

using namespace std;

/*
 * ����:
 *      ��ʾ�û�����һ���߿����Է���, ���ݷ������������ж�
 *      �����������600����һ��, ����500���϶���, ����400��������, ����δ����
 *      ��һ��������, �������700���ϱ���, ����650�����廪, ����600�����˴�
 * */

int main() {
    int score = 0;
    cout << "������ĸ߿��ɼ�: ";
    cin >> score;
    cout << endl;
    cout << "������ĳɼ�Ϊ" << score << "��" << endl;

    if (score >= 600) {
        cout << "�㿼����һ��, ";
        if (score >= 700) {
            cout << "�ϱ���" << endl;
        } else if (score >= 650) {
            cout << "���廪" << endl;
        } else {
            cout << "���˴�" << endl;
        }
    } else if (score > 500) {
        cout << "�㿼�϶�����" << endl;
    } else if (score > 400) {
        cout << "�㿼��������" << endl;
    } else{
        cout << "�����, û���ϴ�ѧ" << endl;
    }

    cout << score << endl;

    return 0;
}
// Create by hui on 2021/11/1 15:18
// Code describe: �����������, �ж��Ƿ����廪(cin + ifʵ��)
// Keyword      : if

#include <iostream>

using namespace std;

int main() {

    int score = 0;
    cout << "���������Ŀ��Գɼ�: " << endl;
    cin >> score;
    cout << "������ķ���Ϊ" << score << "��" << endl;

    if (score >= 600){
        cout << "��ϲ��, �ɹ�������һ��!" << endl;
    }
    else if (score >= 500){
        cout << "��ϲ��, �ɹ����϶���"<<  endl;
    }
    else if (score >= 300) {
        cout << "��ɹ���������" << endl;
    }
    else if (score >= 200){
        cout << "�㿼��ר����" << endl;
    } else {
        cout << "��ķ���̫����, û�б��κ�ѧУ¼ȡ" << endl;
    }

    return 0;
}
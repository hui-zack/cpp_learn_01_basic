// Create by hui on 2021/11/1 16:45
// Code describe: ��Ŀ�����
// Keyword      : 1 ? 2 : 3;

#include <iostream>

using namespace std;

int main() {
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    cout << "������ֻС�������" << endl;
    cout << "AС������:" << endl;
    cin >> num1;
    cout << "BС������:" << endl;
    cin >> num2;
cout << "CС������:" << endl;
    cin >> num3;

    //* ��Ŀ�����Ƕ��ʵ�ֱ���ֻС������
    num1 > num2 ? (num1>num3 ? cout << "С��A����\n": cout << "С��C����\n") << endl : (num2>num3 ? cout << "С��B����\n": cout << "С��C����\n");
    return 0;
}
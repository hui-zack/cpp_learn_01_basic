// Create by hui on 2021/11/1 12:37
// Code describe: cin����ʵ�ּ�������
// Keyword      : cin

#include <iostream>
#include <string>

using namespace std;

int main() {
    int i = 0;
    cout << "����������i��ֵ: " << endl;
    cin >> i;                               //* cin����ʵ�ּ�������
    cout << i << endl;


    float f = 1.0f;
    cout << "�����븡����f��ֵ: " << endl;
    cin >> f;
    cout << f << endl;

    char ch = '0';
    cout << "�������ַ�ch��ֵ: " << endl;
    cin >> ch;
    cout << ch << endl;

    string str = "0";
    cout << "�������ַ���str��ֵ" << endl;
    cin >> str;
    cout << str << endl;

    bool flag = false;
    cout << "�����벼����flag��ֵ" << endl;
    cin >> flag;
    cout << flag << endl;

    return 0;
}
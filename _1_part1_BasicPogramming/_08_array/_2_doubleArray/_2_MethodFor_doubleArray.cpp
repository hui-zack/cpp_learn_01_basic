// Create by hui on 2021/11/12 22:05
// Code describe: ���÷��� for ��ά����
// Keyword      : sizeof(Array arrayName)
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int intArr[2][3] =                                                      // ���巽ʽ2: �������� ������[����][����] = {{value1, value2}, {value3, value4}};
            {
                    {1, 2, 3},
                    {4, 5, 6}
            };
    double doubleArr[3][3] =
            {
                    {1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}

            };
    cout << "��ά����(int)�ڴ�ռ��: " << sizeof(intArr) << endl;                //* sizeof(Array arrayName)����, �鿴ռ���ڴ��С
    cout << "��ά����(��һ��)�ڴ�ռ��: " << sizeof(intArr[0]) << endl;
    cout << "��ά����(double)�ڴ�ռ��: " << sizeof(doubleArr) << endl;

    cout << "��ά��������: " << sizeof(intArr) / sizeof(intArr[0]) << endl;
    cout << "��ά��������: " << sizeof(intArr[0]) / sizeof(intArr[0][0]) << endl;

    cout << "��ά�����׵�ַ(ʮ������): " << intArr << endl;
    cout << "��ά�����׵�ַ(ʮ����): " << (long long)intArr << endl;
    cout << "��ά��һ���׵�ַ(ʮ����): " << (long long)intArr[0] << endl;
    cout << "��ά��һ�е�һ��Ԫ���׵�ַ(ʮ����): " << (long long)&intArr[0][0] << endl;
    cout << "��ά��һ�еڶ���Ԫ���׵�ַ(ʮ����): " << (long long)&intArr[0][1] << endl;
    cout << "��ά�ڶ����׵�ַ(ʮ����): " << (long long)intArr[1] << endl;


    return 0;
}
// Create by hui on 2021/11/1 16:23
// Code describe: ���� ��ֻС�������(��Ԫ�����ʵ��)
// Keyword      : if else
/*
 * ����:
 *      ����ֻС��ABC, ��ֱ�������ֻС�������, �����ж���һֻ����
 * */
#include <iostream>
#include <math.h>


using namespace std;

int main() {
    int A = 0;
    int B = 0;
    int C = 0;

    cout << "��ֱ�������ֻУ��������" << endl;
    cout << "С��A����: " << endl;
    cin >>  A ;
    cout << "\nС��B����: " << endl;
    cin >>  B;

    cout << "\nС��C����: " << endl;
    cin >>  C;


    if (A > B){
        if (A > C){
            cout << "С��A����" << endl;
        } else {
            cout << "С��C����" << endl;
        }

    } else{
        if (B > C){
            cout << "С��B����" << endl;
        } else {
            cout << "С��C����" << endl;
        }
    }

    return 0;
}
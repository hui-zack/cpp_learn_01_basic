// Create by hui on 2021/11/2 10:32
// Code describe: switch�ṹ Ĭ��case��͸
// Keyword      : switch break

#include <iostream>

using namespace std;

int main() {
    int movie_score = 0;
    cout << "�������Ӱ�ķ���:" << endl;
    cin >> movie_score;

    switch (movie_score) {
        case 5:
            cout << "����Ϊ�Ƿǳ�����ĵ�Ӱ" << endl;
            break;
        case 4:
            cout << "����Ϊ��ʮ�ֲ���ĵ�Ӱ" << endl;
            break;
        case 3:
            cout << "����Ϊ�ǱȽϺÿ��ĵ�Ӱ" << endl;
            break;
        case 2:
            cout << "����Ϊ���Ǻ�һ��ĵ�Ӱ" << endl;
            break;
        case 1:
            cout << "����Ϊ���Ǹ���Ƭ" << endl;
            break;
        case 0:
            cout << "����Ϊ��������Ӱ" << endl;
            break;
    }

    return 0;
}
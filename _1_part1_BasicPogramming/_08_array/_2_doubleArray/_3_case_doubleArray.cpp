// Create by hui on 2021/12/8 15:24
// Code describe: ��ά���鰸��, ��������, ����, ������˵ķ����ܺ�
// Keyword      : 

#include <iostream>
#include <string>
using namespace std;

int main() {
    int arr[3][3] = {
            {100, 100, 100},
            {90, 50, 100},
            {60, 70, 80}
    };

    string names[3] = {"����", "����", "����"};

    for(int i =0; i < 3; i++){          // ��
        int sum = 0;
        for(int j=0; j < 3; j++){       // ��
            sum += arr[i][j];
            // cout << arr[i][j] << " ";
        }
        cout << names[i] << "���˵��ܷ�Ϊ: " << sum << endl;
    }

    return 0;
}
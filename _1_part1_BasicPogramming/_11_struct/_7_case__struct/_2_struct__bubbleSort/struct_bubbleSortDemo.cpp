// Create by hui on 2021/12/17 10:11
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <typeinfo>
/* ����:
 *  ���һ��Ӣ�۵Ľṹ��, ��������, ����, �Ա�; �����ṹ������, �����д��5��Ӣ��, ͨ��ð��������㷨,
 *  �������е�Ӣ�۰������������������, ���մ�ӡ�����Ľ��
 *      {"����", 23, "��"},
 *      {"����", 22, "��"},
 *      {"�ŷ�", 20, "��"},
 *      {"����", 20, "��"},
 *      {"����", 19, "Ů"}
 * */
using namespace std;

struct hero{
    string name;
    int age;
    string gender;
};


void bubbleSort_arrAge(struct hero arrName[], int len){
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len - i - 1; j++){
            if(arrName[j].age > arrName[j+1].age) {
                int temp = arrName[j].age;
                arrName[j].age = arrName[j+1].age;
                arrName[j+1].age = temp;
            }
        }
    }
}

void printArr(struct hero arrName[], int len){
    for (int i = 0; i < len; i++){
        cout << "    name:" << arrName[i].name << " port:" << arrName[i].age << " gender:" << arrName[i].gender << endl;
    }
}


int main() {
    struct hero arr[5] = {
        {"����", 23, "��"},
        {"����", 22, "��"},
        {"�ŷ�", 20, "��"},
        {"����", 20, "��"},
        {"����", 19, "Ů"}
    };
    int len = sizeof(arr) / sizeof(arr[0]);
    bubbleSort_arrAge(arr, len);
    cout << "�������: " << endl;
    printArr(arr, len);

    return 0;
}
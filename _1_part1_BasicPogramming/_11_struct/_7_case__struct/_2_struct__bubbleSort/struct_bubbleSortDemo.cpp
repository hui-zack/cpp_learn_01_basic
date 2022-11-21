// Create by hui on 2021/12/17 10:11
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <typeinfo>
/* 需求:
 *  设计一个英雄的结构体, 包括姓名, 年龄, 性别; 创建结构体数组, 数组中存放5名英雄, 通过冒泡排序的算法,
 *  将数组中的英雄按照年龄进行升序排序, 最终打印排序后的结果
 *      {"刘备", 23, "男"},
 *      {"关羽", 22, "男"},
 *      {"张飞", 20, "男"},
 *      {"赵云", 20, "男"},
 *      {"貂蝉", 19, "女"}
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
        {"刘备", 23, "男"},
        {"关羽", 22, "男"},
        {"张飞", 20, "男"},
        {"赵云", 20, "男"},
        {"貂蝉", 19, "女"}
    };
    int len = sizeof(arr) / sizeof(arr[0]);
    bubbleSort_arrAge(arr, len);
    cout << "排序后结果: " << endl;
    printArr(arr, len);

    return 0;
}
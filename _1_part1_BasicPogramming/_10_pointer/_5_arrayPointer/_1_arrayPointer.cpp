// Create by hui on 2021/12/15 11:21
// Code describe: 使用指针访问数组元素
// Keyword      : 

#include <iostream>

using namespace std;

int main() {
    int arr[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};
    int* arrPointer = arr;                                                   //* 数组名称属于指针类型, 存储数组首地址

    cout << "数组: 下标访问第一个元素 " << arr[0] << endl;              //下标访问

    /* 5-1 使用指针访问数组第一个元素 */
    cout << "数组: 指针访问第一个元素 " << *arrPointer << endl;

    /* 5-2 使用指针访问数组第二个元素 */
    cout << "数组: 指针访问第二个元素 " << *(arrPointer + 1) << endl;

    /* 5-3 使用指针遍历数组 */
    int* p1 = arr;
    for(int i = 1; i <= sizeof(arr)/sizeof(arr[0]); i++){
        cout << "    第"<< i << "个: ";
        cout << *(p1++) << endl;
    }

    return 0;
}
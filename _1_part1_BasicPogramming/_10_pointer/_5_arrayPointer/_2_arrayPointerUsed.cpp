// Create by hui on 2021/12/15 16:21
// Code describe: 封装一个函数, 利用冒泡排序, 实现对整形数组的升序排列
// Keyword      : 
/*
 * 步骤:
 *      1. 创建一个数组
 *      2. 创建数组, 实现冒泡排序
 *      3. 打印排序后的数组
 *
 * */
#include <iostream>

using namespace std;


/* 5-2 冒泡排序通过传指针对原数组排序 */
void bubbleSort(int* arr, int arr_length){
    for (int i = 0; i < arr_length - 1; i++){               //* 排序轮数 = arr_length - 1;
        for (int j = 0; j < arr_length - i - 1; j++) {      //* 对比次数 = arr_length - 当前轮数 - 1;
            if (arr[j] > arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
        cout << "排序中: (第" << i << "次)" << endl;
        for (int m = 0; m < arr_length; m++){
            cout << arr[m] << " ";
        }
        cout << endl;
    }
}


int main() {
    int arr[10] = {11, 22, 44, 77, 99, 100, 33, 66, 55, 88};
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    cout << "len: " << arr_len << endl;

     bubbleSort(arr, arr_len);
    cout << arr << endl;
    cout << &arr[0] << endl;

    return 0;
}


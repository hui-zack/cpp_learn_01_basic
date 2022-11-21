// Create by hui on 2021/11/4 16:50
// Code describe: 冒泡排序
// Keyword      : 

#include <iostream>

using namespace std;

int main() {
    int arr[] = {4, 2, 7, 1, 9, 0, 8, 5, 3};
    int arr_length = sizeof(arr) / sizeof(arr[0]);
    cout << arr_length << endl;
    cout << "排序前: ";
    for (int i = 0; i < arr_length; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    /*
     * 冒泡排序开始
     * */
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

    cout << "排序后: ";
    for (int i = 0; i < arr_length; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
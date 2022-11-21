// Create by hui on 2021/11/4 13:35
// Code describe: 数组的创建方式(3种)
// Keyword      : array

#include <iostream>

using namespace std;

int main() {
    /*
     * 数组的创建方式1
     * */
    int arr1[5];                                        //* 数组的创建方式1
    arr1[0] = 10;
    arr1[1] = 20;
    arr1[2] = 30;
    arr1[3] = 40;
    arr1[4] = 50;
    for (int i = 0; i < 5; i++){                        // 遍历arr1
        cout << "arr1: " << arr1[i] << endl;
    }

    /*
     * 数组的创建方式2
     * */
    int arr2[5] = {10, 20, 30, 40, 50};                 //* 数组的创建方式2

    for (int i = 0; i < 5; i++){                        // 遍历arr2
        cout << "arr2: " << arr2[i] << endl;
    }


    /*
     * 数组的创建方式3
     * */
    int arr3[] = {10, 20, 30, 40, 50};                  //* 数组的创建方式3
    for (int i : arr3){
        cout << "arr3: " << i << endl;                  // 遍历arr3
    }


    return 0;
}


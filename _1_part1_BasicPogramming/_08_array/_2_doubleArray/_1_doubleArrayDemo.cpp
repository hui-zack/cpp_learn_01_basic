// Create by hui on 2021/11/12 21:00
// Code describe: 二维数组的定义方式(4种)
// Keyword      : array[2][3] = {{1, 2, 3}, {3, 4, 5}}

#include <iostream>

using namespace std;

int main() {
    /* 定义方式1 */
    int arr1[2][3];
    arr1[0][0] = 11;
    arr1[0][1] = 12;
    arr1[0][2] = 13;
    arr1[1][0] = 14;
    arr1[1][1] = 15;
    arr1[1][2] = 16;

    /* 定义方式2 */
    int arr2[2][3] =
    {
        {2, 2, 3},
        {4, 5, 6}
    };

    /* 定义方式3 */
    int arr3[2][3] = {3, 2, 3, 4, 5, 6};

    /* 定义方式4 */
    int arr4[][3] = {4, 2, 3, 4, 5, 6};

    /* 遍历二维数组 */
    int allEleNum = sizeof(arr2) / sizeof(arr2[0][0]);        //获取所有元素个数
    int rowNum = sizeof(arr2) / sizeof(arr2[0]);               // 行数
    int colNum = allEleNum / rowNum;                        // 列数
    for (int i = 0; i < rowNum; ++i) {
        for (int j = 0; j < colNum; j++){
            cout << arr4[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}


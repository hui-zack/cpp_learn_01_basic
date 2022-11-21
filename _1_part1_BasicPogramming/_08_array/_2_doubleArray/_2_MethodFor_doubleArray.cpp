// Create by hui on 2021/11/12 22:05
// Code describe: 常用方法 for 二维数组
// Keyword      : sizeof(Array arrayName)
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int intArr[2][3] =                                                      // 定义方式2: 数据类型 数组名[行数][列数] = {{value1, value2}, {value3, value4}};
            {
                    {1, 2, 3},
                    {4, 5, 6}
            };
    double doubleArr[3][3] =
            {
                    {1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}

            };
    cout << "二维数组(int)内存占用: " << sizeof(intArr) << endl;                //* sizeof(Array arrayName)方法, 查看占用内存大小
    cout << "二维数组(第一行)内存占用: " << sizeof(intArr[0]) << endl;
    cout << "二维数组(double)内存占用: " << sizeof(doubleArr) << endl;

    cout << "二维数组行数: " << sizeof(intArr) / sizeof(intArr[0]) << endl;
    cout << "二维数组列数: " << sizeof(intArr[0]) / sizeof(intArr[0][0]) << endl;

    cout << "二维数组首地址(十六进制): " << intArr << endl;
    cout << "二维数组首地址(十进制): " << (long long)intArr << endl;
    cout << "二维第一行首地址(十进制): " << (long long)intArr[0] << endl;
    cout << "二维第一行第一个元素首地址(十进制): " << (long long)&intArr[0][0] << endl;
    cout << "二维第一行第二个元素首地址(十进制): " << (long long)&intArr[0][1] << endl;
    cout << "二维第二行首地址(十进制): " << (long long)intArr[1] << endl;


    return 0;
}
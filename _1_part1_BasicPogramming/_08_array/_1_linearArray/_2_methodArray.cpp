// Create by hui on 2021/11/4 14:08
// Code describe: 使用数组时经常使用的方法
// Keyword      : sizeof(array arrayName)

#include <iostream>

using namespace std;

int main() {
    int arr1[] = {10, 20, 30, 40, 50};
    cout << "数组总的内存空间占用: " << sizeof(arr1) << endl;                                                 //* sizeof(varType varName)方法, 统计数组内存空间占用
    cout << "数组单个元素内存占用: " << sizeof(arr1[0]) << endl;
    cout << "数组的元素个数为   : " << sizeof(arr1) / sizeof(arr1[0]) << endl;
    cout << "数组的首地址为     : " << arr1 << "(十六进制),  " << (long long)arr1 << "(十进制)" << endl;
    cout << "数组第一个元素地址为: " << &arr1[0] << "(十六进制),  " << (long long)&arr1[0] << "(十进制)" << endl;  //* &:取地址符

    return 0;
}
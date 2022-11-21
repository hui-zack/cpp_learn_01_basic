// Create by hui on 2021/12/20 20:34
// Code describe: new关键字
// Keyword      : 

#include <iostream>

using namespace std;

int * func(){                                               //* 堆区开辟整形数据
    int* p  = new int(99);
//    double* p1 = new double(20.1);
    return p;
}



int main() {

    int * pInt1 = new int(12345);           /* 1-1-1 堆区开辟整型 */   //* int *p = new int(88); 堆区开辟int

    cout << "释放前: " << endl;
    cout << "    " << * pInt1 << endl;

    delete pInt1;                           /* 1-1-2 堆区释放整型 */

    cout << "释放后: " << endl;
    cout << "    " << * pInt1 << endl;


    /* 1-2-1 堆区创建数组 */
    int *arr = new int[10];                             //* int *arr = new int[10]; 堆区创建数组
    for (int i = 0; i < 10; ++i) {
        arr[i] = i + 100;
    }
    /* 1-2-1 堆区释放数组 */
    delete [] arr;                                      //* delete [] arr; 堆区释放数组

    /* 1-3-1 堆区创建字符串 */
    string * pStr = new string("123");

    cout << * pStr << endl;
    /* 1-3-2 堆区释放字符串 */
    delete pStr;
    cout << * pStr << endl;
    return 0;
}
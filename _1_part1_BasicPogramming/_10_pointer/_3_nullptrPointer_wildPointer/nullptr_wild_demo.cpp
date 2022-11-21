// Create by hui on 2021/12/15 10:31
// Code describe: 空指针和野指针
// Keyword      : nullptr/NULL

#include <iostream>

using namespace std;

int main() {
    int* nullPointer = nullptr;                 /* 2-1 定义一个空指针 */

    int* wildPointer = (int*) 0x1100;           /* 2-2 定义一个野指针 */
    *wildPointer = 0x1102;
    cout << wildPointer << endl;
    return 0;
}
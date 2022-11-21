// Create by hui on 2021/12/21 10:39
// Code describe: 引用(起别名)
// Keyword      : int &b = a;
// describe: 变量名到内存去执行时, 会变成一个地址, 这个变量名的引用当内存中去执行时, 也会变成一个地址
#include <iostream>

using namespace std;

/** 注意:
 * 引用只能获取对栈区或堆区的地址, 直接使用int & citeNum = 10会出错, 因为无法获取全局-常量区的地址:
 *      因为10在全局区(常量区), 无法申请栈堆地址, 因此无法创建
 * 创建常量引用的话, 编译器自动在堆/栈区为我们申请新地址, 并复制常量数据过来, 因此创建全常引用可写为
 *      const int & citeNum = 10
 **/

static int staticNum = 100;

int main(){
    int num = 10086;

    /* 1 创建一个普通引用 */
    int & citeNum = num;

    // 引用修改数据, 原变量名的数据也会修改(他们编译后是相同的地址, 然后在内存中去执行)
    citeNum = 12315;

    cout << citeNum << endl;
    cout << num << endl;

    /* 1-3 创建一个常引用 */
    const int & citeNum2 = 199;

    /* 1-4 打印常引用地址发现其内存地址在堆栈区 */
    cout << "常引用的内存地址: " << (long long) &citeNum2 <<"(堆栈区)" << endl;
    cout << "静态变量的内存地址: " << (long long) &staticNum << endl;

    return 0;
}

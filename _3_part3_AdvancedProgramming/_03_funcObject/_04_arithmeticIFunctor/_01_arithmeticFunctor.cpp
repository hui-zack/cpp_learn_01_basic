// Create by hui on 2022/12/13 22:11
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>


using namespace std;
/**
    template<class T> T plus<T>(){}                   // 加法仿函数, 二元谓词
    template<class T> T minus<T>(){}                  // 减法仿函数, 二元谓词
    template<class T> T multiplies<T>(){}             // 乘法仿函数, 二元谓词
    template<class T> T divides<T>(){}                // 除法仿函数, 二元谓词
    template<class T> T modulus<T>(){}                // 取余仿函数, 二元谓词
    template<class T> T negate<T>(){}                 // 取反仿函数, 一元谓词
 */
int main() {
    /* 4-1 使用加法仿函数, 二元谓词 */
    plus<> plu;
    cout << "use plus\t: 5 + 4 = " << plu(5, 4) << endl;

    /* 4-2 使用减法仿函数, 二元谓词 */
    minus<> min;
    cout << "use minus\t: 5 -4 = " << min(5, 4) << endl;

    /* 4-3 使用乘法仿函数, 二元谓词 */
    multiplies<> mul;
    cout << "use multiplies\t: 5 * 4 = " << mul(5, 4) << endl;

    /* 4-4 使用除法仿函数, 二元谓词 */
    divides<> div;
    cout << "use divides\t: 20 / 5 = " << div(20, 5) << endl;

    /* 4-5 使用取模仿函数, 二元谓词 */
    modulus<> mod;
    cout << "use modulus\t: 5 % 4 = " << mod(12, 4) << endl;

    /* 4-6 使用取反仿函数, 一元谓词 */
    negate<> neg;
    cout << "use negate\t: 43 : " << neg(43) << endl;

    return 0;
}
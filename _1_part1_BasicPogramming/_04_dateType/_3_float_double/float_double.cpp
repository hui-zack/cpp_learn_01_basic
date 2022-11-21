//
// Created by admin on 2021/10/30.
//

# include "iostream"
using namespace std;

int main(){

    float f1 = 3.14f;                       //* float类型
    double d1 = 3.14;                       //* double类型

    cout << "float输出:  " << f1 << endl;
    cout << "double输出: " << d1 << endl;

    float f2 = 3e2f;                         //* 科学计数法
    double d2 = 3e-2f;

    cout << "float输出:  " << f2 << endl;
    cout << "double输出: " << d2 << endl;

    return 0;
}
// Create by hui on 2021/11/1 16:23
// Code describe: 案例 三只小猪比体重(三元运算符实现)
// Keyword      : if else
/*
 * 需求:
 *      有三只小猪ABC, 请分别输入三只小组的体重, 并且判断那一只最重
 * */
#include <iostream>
#include <math.h>


using namespace std;

int main() {
    int A = 0;
    int B = 0;
    int C = 0;

    cout << "请分别输入三只校长的体重" << endl;
    cout << "小猪A体重: " << endl;
    cin >>  A ;
    cout << "\n小猪B体重: " << endl;
    cin >>  B;

    cout << "\n小猪C体重: " << endl;
    cin >>  C;


    if (A > B){
        if (A > C){
            cout << "小猪A最重" << endl;
        } else {
            cout << "小猪C最重" << endl;
        }

    } else{
        if (B > C){
            cout << "小猪B最重" << endl;
        } else {
            cout << "小猪C最重" << endl;
        }
    }

    return 0;
}
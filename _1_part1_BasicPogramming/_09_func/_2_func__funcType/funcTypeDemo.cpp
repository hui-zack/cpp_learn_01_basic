// Create by hui on 2021/12/9 11:25
// Code describe: 函数的类型
// Keyword      : 无参无返 无参有返 有参有返 有参无返

#include <iostream>

using namespace std;

void method1(){
    cout << "无参无返" << endl;
}

int method(){
    cout << "无参有返" << endl;

    return 0;
}

int method3(int i){
    cout << "参数:" << i << "  有参有返" << endl;

    return 0;
}

void method4(int i){

    cout  << "参数:" << i << "  有参无返" << endl;
}
int main() {
    method1();
    method();
    method3(1);
    method4(2);

    return 0;
}
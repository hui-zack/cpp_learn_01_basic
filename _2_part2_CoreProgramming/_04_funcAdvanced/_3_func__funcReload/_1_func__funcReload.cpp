// Create by hui on 2021/12/26 21:04
// Code describe: 函数重载, 提高复用性
// Keyword      : 参数类型不同 or 参数个数不同 or 参数顺序不同(和参数数据类型有关, 和参数名无关)
/*
 * 注意: 返回值类型不能作为函数重载的条件
 * */
#include <iostream>
#include <string>
using namespace std;

/* 3-1 print函数第一次重载 */
void print(){
    cout << "--- 打印参数: print ---" << endl;
}

/* 3-2 print函数第二次重载 */
void print(int num){
    cout << num << endl;
}

/* 3-3 print函数第三次重载 */
void print(string str) {
    cout << str << endl;
}

/* 3-4 print函数第四次重载 */
void print(int num1 , int num2){
    cout << num1 << " " << num2 << endl;
}


/* 3-5 print函数第五次重载 */
void print(int num, string str){
    cout << num <<  " " << str << endl;
}

/* 3-6 错误的重载, 使用默认值导致与3-5产生二义性 */
//void print(int num, string str, double dou = 10086.00){
//    cout << num << str << endl;
//}


int main() {
    print();
    print(9090);
    print("无敌于天下");
    print(10086, 12315);
    print(100, "无敌于天下");

    return 0;
}
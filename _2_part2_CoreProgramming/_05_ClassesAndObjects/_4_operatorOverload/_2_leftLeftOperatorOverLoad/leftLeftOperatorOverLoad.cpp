// Create by hui on 2022/6/22 17:35
// Code describe: 左移运算符重载(toString)
// Keyword      : 
/**
 * 注意: 通常不会使用成员函数来重载左移运算符
 * */
#include <iostream>
//#include <ostream>
# include <string>

#define OBJECT_NAME(value) (#value)
using namespace std;

class Camera{
public:
    int money;

    string name;
};

/* 2-1 左移运算符重载-只能通过全局函数实现 */
ostream & operator << (ostream& cout, Camera & camera){
    cout << "[Person] name = " << camera.name << ", money = " << camera.money;
    return cout;
}



int main() {
    Camera camera = Camera();
    camera.money = 300;
    camera.name = "海康枪机";
    /* 2-2 使用cout直接输出camera */
    cout << camera << endl;

    return 0;
}
// Create by hui on 2022/11/6 19:31
// Code describe: 
// Keyword      : 
#ifndef C___ttt_H
#define C___ttt_H


#include <iostream>

using namespace std;

#endif

class Camera1{};


class Camera2{

public:
    explicit Camera2(){

    }
    int age = 10;

    int getAge(){
        return this->age;
    }
};

void test(){
    for (int i = 0; i < 100; ++i) {
        cout << i << endl;
    }
}

int main() {
    /* 5-1-1 空类的内存占用1字节(编译器可用来标记空对象) */
    Camera1 camera1 = Camera1();
    cout << "[main] empty object use RAM byte = " << sizeof (camera1) << endl;

    /* 5-1-2 非空对象占用的内存空间为成员变量的内存占用之和(成员函数则存储在代码区) */
    Camera2 camera2 = Camera2();
    cout << "[main] no-empty object(only have an int) use RAM byte = " << sizeof(camera2) << endl;


    return 0;
}

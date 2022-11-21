// Create by hui on 2022/6/9 22:24
// Code describe: 
// Keyword      : 

#include <iostream>

using namespace std;

class Camera{

public:
    mutable string location;
    string name;


    /* 9-1 定义一个成员常函数 */
    string getName() const {
        // this->name = "海康";       // 常函数内不允许修改未使用mutable修饰的成员变量
        this->location = "local";    // 常函数中只能修改使用mutable修饰的成员变量
                                     // 常函数中只能调用常函数
        return this->name;
    }

    /** 成员常函数 */
    void constFunc() const {}

    /** 普通成员函数 */
    void normalFunc() {}

};

int main() {
    /* 9-2 定义一个常对象 */
    const Camera camera = Camera(); // 常对象只能调用常函数, 但可以访问所有共有的成员变量,

    return 0;
}
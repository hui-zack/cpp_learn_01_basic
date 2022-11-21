// Create by hui on 2022/6/13 16:34
// Code describe: 设置外部全局函数作为友元
// Keyword      : 

#include <iostream>
#include <string>
using namespace std;

class Camera{
    /* 1-1 Camera中设置外部全局函数作为友元(友元声明写在Camera的任意位置都有效) */
    friend void globalFunc(Camera & camera);

private:
    string privateVar = "private value";
    void privateFunc(){
        cout << "[Camera] privateFunc invoked\n" << endl;
    }

protected:
    string protectedVar = "protected value";
    void protectedFunc(){
        cout << "[Camera] protectedFunc invoked\n" << endl;
    }

public:
    string publicVar = "public value";
    void publicFunc(){
        cout << "[Camera] publicFunc invoked\n" << endl;
    }

};



/** 全局函数-Camera的友元 */
void globalFunc(Camera & camera){
    /* 1-2 被定义为友元的外部全局函数使用Camera对象的私有和保护成员 */
    cout << "[globalFunc] invoke camera-object private MemberVar,  privateVar = " << camera.privateVar << endl;
    camera.privateFunc();

    cout << "[globalFunc] invoke camera-object protected MemberVar, protectedVar  = " << camera.protectedVar << endl;
    camera.protectedFunc();

    // 调用Camera对象的公有成员对象
    cout << "[globalFunc] invoke camera-object public MemberVar, publicVar = " << camera.publicVar << endl;
    camera.publicFunc();

}


int main() {
    Camera camera = Camera();
    globalFunc(camera);
    return 0;
}
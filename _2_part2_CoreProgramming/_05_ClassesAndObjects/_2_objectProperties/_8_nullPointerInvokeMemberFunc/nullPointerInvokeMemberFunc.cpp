// Create by hui on 2022/5/30 23:37
// Code describe: 空指针调用对象的成员函数
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;

class Camera {
private:
    string name;
public:
    string location = "local";
    string getName(){
        return this->name;
    }

    void printDesc(){
        cout << "[camera object]" << endl;
    }


};

int main() {
    // 定义一个对象的空指针
    Camera * cameraPointer = nullptr;
    /* 8-1 和对象相同类型的空指针可正常访问内部不使用this的成员函数 */
    cameraPointer->printDesc();

    /* 8-2-1 和对象相同类型的空指针访问成员变量程序会崩 */
    cout << cameraPointer->location << endl;

    /* 8-3-2 和对象相同类型的空指针访问内部有使用this的成员函数程序会崩 */
//    cameraPointer->getName();

    return 0;
}
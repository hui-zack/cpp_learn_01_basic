// Create by hui on 2022/11/8 0:29
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;

class Camera{
private:
    string name = "default";

public:
    Camera();                       /* 5-2-1-1 Camera内部定义构造函数 */

    string getName();               /* 5-2-2-1 Camera内部定义成员函数 */

    ~Camera();                      /* 5-2-3-1 Camera内部定义析构函数 */
};


Camera::Camera() {              /* 5-2-1-2 Camera外部实现构造函数 */
    cout << "[Camera] constructor init" << endl;
}

string Camera::getName() {      /* 5-2-2-2 Camera外部实现成员函数 */
    return this->name;
}

Camera::~Camera() {             /* 5-2-3-2 Camera外部实现析构函数 */
    cout << "[Camera] destructor used" << endl;
}

int main() {
    Camera camera = Camera();
    cout << "[main] get camera.name = " << camera.getName() << endl;

    return 0;
}
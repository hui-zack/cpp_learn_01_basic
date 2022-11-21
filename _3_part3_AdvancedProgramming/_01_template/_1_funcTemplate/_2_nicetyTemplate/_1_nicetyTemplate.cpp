// Create by hui on 2022/11/21 1:08
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;

class Camera{
public:
    string name;
    int id;
};



/* 2-1 编写普通模板(无法解决自定义类型比较的问题)  */
template<class T>
bool isSame(T& a, T& b){
    if (a == b){
        return true;
    }
    return false;
}

/* 2-1 针对Camera类型编写精确模板(参数为Camera时, 将优先调用Camera类型的精确模板) */
template<> bool isSame(Camera& cameraA, Camera& cameraB){
    if (cameraA.name == cameraB.name && cameraA.id == cameraB.id){
        return true;
    }
    return false;
}




int main() {
    int a = 10;
    int b = 10;

    cout << "a == b ? " << isSame(a, b) << endl << endl;

    Camera cameraA = Camera();
    Camera cameraB = Camera();
    cout << "cameraA == CameraB ? " << isSame(cameraA, cameraB) << endl;

    return 0;
}
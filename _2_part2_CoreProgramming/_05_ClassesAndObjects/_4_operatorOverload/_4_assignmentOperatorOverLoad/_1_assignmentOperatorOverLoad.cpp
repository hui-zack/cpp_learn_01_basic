// Create by hui on 2022/11/11 17:57
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;

class Camera{
public:
    int *money;
    Camera(int money){
        this->money = new int(money);
    }


    ~Camera(){
        if (this->money != nullptr){
            cout << "[Camera] destructor used" << endl;
            delete money;
        }
    }
    /* 4-1 重载赋值运算符 */
    Camera& operator=(const Camera& camera){
        if (this->money != nullptr){
            delete money;
        }

        this->money = new int(*camera.money);

        return *this;
    }


};

int main() {
    Camera camera1 = Camera(200);
    Camera camera2 = Camera(300);
    Camera camera3 = Camera(400);
    camera3 = camera2 = camera1;
    cout << *camera3.money << endl;
    cout << *camera2.money << endl;
    cout << *camera1.money << endl;

    int pInt =123;
    delete &pInt;
// -1073740940 (0xC0000374)
    return 0;
}
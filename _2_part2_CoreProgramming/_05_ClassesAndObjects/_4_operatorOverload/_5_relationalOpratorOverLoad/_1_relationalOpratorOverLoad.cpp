// Create by hui on 2022/11/11 20:15
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;

class Camera{
public:
    string name;
    int type;
    Camera(string name, int type){
        this->name = move(name);
        this->type = type;
    }

    /* 5-1 重载==运算符 */
    bool operator==(Camera& camera){
        if (this->name == camera.name && this->type == camera.type){
            return true;
        }
        return false;
    }
};

int main() {
    Camera camera1 = Camera("海康相机", 2);
    Camera camera2 = Camera("海康相机", 1);

    cout << (camera1 == camera2) << endl;


    return 0;
}
// Create by hui on 2022/5/30 14:01
// Code describe: this指针
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;

class Camera {
private:
    string name;
public:
    /* 7-1 this指针区分同名的成员函数形参和成员变量名 */
    void setAge(string name) {
        this->name = move(name);
    }

    string getName() const {
        return this->name;
    }


    /* 7-2-1 成员函数返回*this, 返回类型为本类类型的左值引用, 实现链式编程 */
    Camera& nameAdd(const string& nameNewPart){
        this->name += nameNewPart;
        return *this;
    }

};

int main() {
    Camera camera = Camera();
    camera.setAge("海康相机");

    cout << camera.getName() << endl;

    /* 7-2-2 使用对象的链式编程函数 */
    camera.nameAdd("_枪机").nameAdd("_M777").nameAdd("_2022");
    cout << camera.getName() << endl;

    return 0;
}
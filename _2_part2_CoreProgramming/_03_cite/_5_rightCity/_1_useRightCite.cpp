// Create by hui on 2022/11/7 1:16
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;



class Camera{
public:
    int id;
    string name;
};

int main() {
    Camera camera = Camera();
    camera.name = "123";
    /* 5-1 通过左值(地址值)获取右值引用, 转移资源到新对象, 节省复制开销 */
    Camera camera1 = move(camera);


    cout << "camera数据被转移: camera.name = " << camera.name << endl;      //资源被转移了
    cout << "camera1通过右值引用获取了数据, camera1.name = " << camera1.name << endl;

    /* 5-2 使用is_rvalue_reference<decltype(move(camera))>::value判断是否为右值引用 */
    cout << "是右值引用返回true: " << is_rvalue_reference<decltype(move(camera1))>::value << endl;
    return 0;
}
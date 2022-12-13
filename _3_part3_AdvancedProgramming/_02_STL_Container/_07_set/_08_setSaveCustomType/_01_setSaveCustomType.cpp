// Create by hui on 2022/12/12 20:23
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <set>

using namespace std;



/* 8-1 编写自定义数据类型Camera */
class Camera
{
public:
    string _name;
    int _id;

    Camera(string name, int id): _name(move(name)), _id(id){};
    ostream& operator<<(ostream& cout) const{
        cout << "Camera{_id=" << this->_id << ",_name=" << this->_name << "}";
        return cout;
    }
};

/** 重载Camera的<<运算符 */
ostream& operator<<(ostream& cout, const Camera& camera){
    cout << "Camera{_id=" << camera._id << ",_name=" << camera._name << "}";
    return cout;
}

/* 8-2 编写Camera的set仿函数设置排序规则 */
class CameraCompare
{
public:
    bool operator()(const Camera& camera1, const Camera& camera2){
        return camera1._id < camera2._id;
    }
};



int main() {
    /* 8-3 创建Camera的set容器 */
    set<Camera, CameraCompare> st;


    Camera camera1("海康相机", 1);
    Camera camera2("大华相机", 2);

    st.insert(camera1);
    st.insert(camera2);

    for (const Camera& camera: st){
        cout << camera << " ";
    }
    cout << endl;

    return 0;
}
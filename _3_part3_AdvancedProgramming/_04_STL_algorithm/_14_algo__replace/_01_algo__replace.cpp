// Create by hui on 2022/12/15 0:07
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <algorithm>
#include "../_00_util/containerUtil.cpp"

using namespace std;
/**
    void replace(iterator beg, itetator end, T oldEle, T newEle);
        // -- 替换区间内的指定元素 --
        // beg 开始迭代器
        // end 结束迭代器
        // oldEle 被替换的元素
        // newEle 新元素
 */


class Camera{
public:
    string _name;
    int _id;
    Camera(string name, int id): _name(move(name)), _id(id){};

    /* 14-2-1 重载自定义元素对象的==操作符供replace算法使用 */
    bool operator==(const Camera& camera){
        return _name == camera._name && _id == camera._id;
    }
};

ostream& operator<<(ostream& cout, Camera& camera){
    cout << "camera{_name=" << camera._name << ",_id=" << camera._id << "}";
    return cout;
}

int main() {
    vector<int> intVec;
    insertIntDataToVector(intVec);
    /* 14-1 使用replace替换vector<int>中的元素 */
    replace(intVec.begin(), intVec.end(), 100, 10086);
    printVector("intVec", intVec);

    Camera camera1 = Camera("海康", 1);
    Camera camera2 = Camera("大华", 2);
    Camera camera3 = Camera("莱卡", 3);
    vector<Camera> cameraVec;
    cameraVec.push_back(camera1);
    cameraVec.push_back(camera2);
    cameraVec.push_back(camera3);

    /* 14-2-2 使用replace替换vector<Camera>中的元素 */
    Camera newCamera = Camera("水星", 4);
    replace(cameraVec.begin(), cameraVec.end(), camera3, newCamera);
    printVector(cameraVec);

    return 0;
}
// Create by hui on 2022/12/14 21:34
// Code describe: count
// Keyword      : 

#include <iostream>
#include <string>
#include <algorithm>
#include "../_00_util/containerUtil.cpp"

using namespace std;
/**
    int count(iterator beg, iterator end, T ele);
        // -- 统计ele元素出现的次数 --
        // beg 开始迭代器
        // end 结束迭代器
        // ele 需要统计的元素
 */

class Camera{
public:
    string _name;
    int _id;
    Camera(string name, int id): _name(move(name)), _id(id){};

    /* 7-2-1 自定义数据类型重载==操作符供count算法统计使用 */
    bool operator==(const Camera & camera){
        return camera._name == _name && camera._id == _id;
    }
};

int main() {
    vector<int> vec;
    insertIntDataToVector(vec);
    vec.push_back(90);
    vec.push_back(90);

    /* 7-1 使用count统计vector<int>中的元素 */
    int eleCount = count(vec.begin(), vec.end(), 90);
    cout << "count ele appear time = " << eleCount << endl;


    Camera camera1 = Camera("海康相机", 1);
    Camera camera2 = Camera("海康相机", 1);
    Camera camera3 = Camera("大华相机", 2);
    vector<Camera> cameraVec;
    cameraVec.push_back(camera1);
    cameraVec.push_back(camera2);
    cameraVec.push_back(camera3);

    /* 7-2-2 使用count统计vector<Camera>中的元素 */
    Camera haiKangCamera = Camera("海康相机", 1);
    int haiKangCount = count(cameraVec.begin(), cameraVec.end(), haiKangCamera);

    cout << "count haiKang Camera appear time = " << haiKangCount << endl;

    return 0;
}
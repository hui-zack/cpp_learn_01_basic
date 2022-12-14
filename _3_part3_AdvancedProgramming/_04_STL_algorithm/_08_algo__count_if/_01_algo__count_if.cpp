// Create by hui on 2022/12/14 22:03
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <algorithm>
#include "../_00_util/containerUtil.cpp"

using namespace std;


/**
    int count_if(iterator beg, iterator end, _pred);
        // -- 按条件统计元素出现个数 --
        // beg 开始迭代器
        // end 结束迭代器
        // _pred 谓词(函数对象, 伪函数)
 */

class CountIfIntFunctor{
public:
    bool operator()(int ele){
        return ele > 30;
    }
};

class Camera{
public:
    string _name;
    int _id;
    Camera(string name, int id): _name(move(name)), _id(id){};
};

class CountIfCameraFunctor{
public:
    bool operator()(const Camera& ele){
        return ele._name == "海康相机" && ele._id == 1;
    }
};

int main() {
    vector<int> vec;
    insertIntDataToVector(vec);

    /* 8-1 使用count_if统计vector<int>中的元素 */
    int greater30Count = count_if(vec.begin(), vec.end(), CountIfIntFunctor());
    cout << "intVec > 30 ele num = " << greater30Count << endl;


    Camera camera1 = Camera("海康相机", 1);
    Camera camera2 = Camera("海康相机", 1);
    Camera camera3 = Camera("大华相机", 2);
    vector<Camera> cameraVec;
    cameraVec.push_back(camera1);
    cameraVec.push_back(camera2);
    cameraVec.push_back(camera3);

    /* 8-2 使用count_if统计vector<Camera>中的元素 */
    int haiKangCameraCount = count_if(cameraVec.begin(), cameraVec.end(), CountIfCameraFunctor());
    cout << "haiKang camera num = " << haiKangCameraCount << endl;

    return 0;
}
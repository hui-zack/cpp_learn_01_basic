// Create by hui on 2022/12/14 22:43
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <algorithm>
#include "../_00_util/containerUtil.cpp"

using namespace std;

/**
    void sort(iterator beg, iterator end, bool _pred = less);
        // -- 对元素进行排序, 默认为less(内建函数-小于号的关系仿函数) --
        // beg 开始迭代器
        // end 结束迭代器
        // _pred 谓词(函数对象/伪函数)
 */


class Camera{
public:
    string _name;
    int _id;
    Camera(string name, int id): _name(move(name)), _id(id){};
};

ostream& operator<<(ostream& cout, Camera& camera){
    cout << "camera{_name=" << camera._name << ",_id=" << camera._id << "}";
    return cout;
}

class SortIntPred{
public:
    bool operator()(int ele1, int ele2){
        return ele1 > ele2;
    }
};


class SortCameraPred{
public:
    bool operator()(Camera& ele1, Camera& ele2){
        return ele1._id > ele2._id;
    }
};

int main() {
    vector<int> intVec;
    insertIntDataToVector(intVec);
    /* 9-1 使用sort算法对vector<int>进行排序 */
    sort(intVec.begin(), intVec.end(), SortIntPred());
    printVector("intVec", intVec);

    Camera camera1 = Camera("海康", 1);
    Camera camera2 = Camera("大华", 2);
    Camera camera3 = Camera("莱卡", 3);
    vector<Camera> cameraVec;
    cameraVec.push_back(camera1);
    cameraVec.push_back(camera2);
    cameraVec.push_back(camera3);

    /* 9-2 使用sort算法对vector<Camera>进行排序 */
    sort(cameraVec.begin(), cameraVec.end(), SortCameraPred());
    printVector("cameraVec", cameraVec);


    return 0;
}
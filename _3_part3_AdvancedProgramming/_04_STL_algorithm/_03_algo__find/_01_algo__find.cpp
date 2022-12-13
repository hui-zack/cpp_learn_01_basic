// Create by hui on 2022/12/14 1:31
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include "../_00_util/containerUtil.cpp"
#include <algorithm>
using namespace std;
/**
    iterator find(iterator beg, iterator end, value)
        // -- 按值查找算法, 找到返回迭代器位置, 找不到返回end位置 --
        // beg 开启迭代器
        // end 结束迭代器
        // value 查找的元素
 */

class Camera{
public:
    int _uuid;
    string _name;
    Camera(int uuid, string name): _uuid(uuid), _name(move(name)){};

    /* 3-2-1 自定义数据类型必须重载==操作符 */
    bool operator==(const Camera& camera){
        if (camera._uuid == _uuid && camera._name == _name){
            return true;
        }
        return false;
    }
};

int main() {
    list<int> intList;
    insertDataToIntList(intList);
    /* 3-1 find查找intList元素 */
    auto it1 = find(intList.begin(), intList.end(), 10);
    it1 != intList.end() ? cout << "find 10 in intList = " << *(it1) << endl : cout << "don't find in intList" << endl;


    list<Camera> cameraList;
    Camera camera = Camera(1, "海康相机");
    cameraList.push_back(camera);

    /* 3-2-2 find查找list中的自定义类型Camera */
    auto it2 = find(cameraList.begin(), cameraList.end(), camera);
    it2 != cameraList.end() ? cout << "find 10 in intList = " << (*it2)._name << endl : cout << "don't find in cameraList" << endl;

    return 0;
}
// Create by hui on 2022/12/13 14:29
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <map>

using namespace std;
/* 9-1 编写自定义数据类型Camera */
class Camera{
public:
    int _id;
    string _name;
    Camera(int id, string name): _id(id), _name(move(name)){};
};



int main() {
    Camera camera1(1, "海康相机");
    Camera camera2(2, "大华相机");

    /* 9-2 map保存自定义数据类型创建对象 */
    map<int, Camera> mp;


    mp.insert(make_pair(1, camera1));
    mp.insert(make_pair(2, camera2));

    for(pair<int, Camera> ele: mp){
        cout << ele.first << "=" << ele.second._name << endl;
    }


    return 0;
}
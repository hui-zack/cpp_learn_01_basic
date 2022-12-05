// Create by hui on 2022/11/23 17:29
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Camera{
public:
    string _name;
    int _id;

    Camera(string name, int id): _name(name), _id(id){};
    void printInfo(){
        cout << "[Camera] _name = " << _name << ", _id = " << _id << " ";
    }
};

/* 2-1 vector存放自定义数据类型对象 */
void vectorSaveCamera(){
    vector<Camera> cameraVec;
    Camera camera1 = Camera("camera1", 10);
    Camera camera2 = Camera("camera2", 11);
    Camera camera3 = Camera("camera3", 12);
    Camera camera4 = Camera("camera4", 13);
    Camera camera5 = Camera("camera5", 14);

    cameraVec.push_back(camera1);
    cameraVec.push_back(camera2);
    cameraVec.push_back(camera3);
    cameraVec.push_back(camera4);
    cameraVec.push_back(camera5);

    /** 打印vector长度 */
    cout << cameraVec.size() << endl;

    for(Camera & camera: cameraVec){
        camera.printInfo();
    }
    cout << endl;

    for(auto it = cameraVec.begin(); it != cameraVec.end(); it ++){
        // it->printInfo();
        (*it).printInfo();
    }

    cout << endl;
}

/* 2-2 vector存放自定义数据类型指针 */
void vectorSaveCameraPointer(){
    vector<Camera*> cameraVec;
    Camera camera1 = Camera("camera1", 10);
    Camera camera2 = Camera("camera2", 11);
    Camera camera3 = Camera("camera3", 12);
    Camera camera4 = Camera("camera4", 13);
    Camera camera5 = Camera("camera5", 14);

    cameraVec.push_back(&camera1);
    cameraVec.push_back(&camera2);
    cameraVec.push_back(&camera3);
    cameraVec.push_back(&camera4);
    cameraVec.push_back(&camera5);

    for (Camera* cameraPointer : cameraVec){
        cameraPointer->printInfo();
    }
    cout << endl;
    
    for(auto it = cameraVec.begin(); it != cameraVec.end(); it++){
        (*it)->printInfo();
    }
}


/* vector嵌套 */
void vectorSaveVector(){
    vector<vector<int>> vec;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;
    vector<int> v5;

    for (int i = 0; i< 5; i++){
        v1.push_back(i+1);
        v2.push_back(i+1);
        v3.push_back(i+1);
        v4.push_back(i+1);
        v5.push_back(i+1);
    }

    vec.push_back(v1);
    vec.push_back(v2);
    vec.push_back(v3);
    vec.push_back(v4);
    vec.push_back(v5);
    int count = 1;

    /** 方式一遍历 */
    for (vector<int> &it: vec){
        for (int value: it){
            cout << value << " ";
        }
        cout << "----"<< count <<"----" << endl;
        count ++;
    }

    /** 方式二遍历 */
    count = 1;
    for (auto it = vec.begin(); it != vec.end(); it ++){
        for (auto it2 = (*it).begin(); it2 != (*it).end(); it2++){
            cout << *it2 << " ";
            cout << "----"<< count <<"----" << endl;
        }
        count ++;
    }

}

int main() {
    /** vector存放自定义数据类型 */
    vectorSaveCamera();

    /** vector存放自定义数据类型指针 */
    vectorSaveCameraPointer();

    vectorSaveVector();

    return 0;
}
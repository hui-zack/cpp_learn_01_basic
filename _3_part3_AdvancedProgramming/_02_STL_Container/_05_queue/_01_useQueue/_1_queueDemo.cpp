// Create by hui on 2022/12/9 21:42
// Code describe: 队列(queue)基本操作
// Keyword      : 

#include <iostream>
#include <string>
#include <queue>

using namespace std;
/**

    构造函数:
        queue<T> que;                       // 使用无参构造创建对象
        queue<const queue &que);            // 使用拷贝构造创建对象

    整体赋值操作:
        queue& operator=(const queue &que)  // 使用=将que数据整体赋值给新对象
    数据存取:
        push(T ele);                        // 队尾添加元素
        pop();                              // 队头移除元素
        front();                            // 获取队头元素
        back();                             // 获取队尾最后一个元素

    大小操作:
        empty();                            // 判断队列是否为空
        size();                             // 获取队列长度

 */

class Camera
{
private:
    string _name;
    int _id = -1;

public:
    Camera() = default;
    Camera(string name, int id):  _name(move(name)), _id(id){};
    string toString(){
        string info;
        string idStr;
        _id == -1? idStr = "None" : idStr = to_string(_id);
        string nameStr;
        _name.empty() ? nameStr = "Null" : nameStr = _name;
        info += "[Camera] _name=" + nameStr + ", _id=" + idStr;
        return info;
    }
};



int main() {
    /* 1-1-1 使用无参构造创建对象 */
    Camera camera1 = Camera("海康相机", 1);
    Camera camera2 = Camera("大华相机", 2);
    Camera camera3 = Camera("水星相机", 3);

    queue<Camera> que;
    que.push(camera1);


    /* 1-1-2 使用拷贝构造创建对象 */
    queue<Camera> copyQue(que);

    /* 1-2-1 使用=将que数据整体赋值给新对象 */
    queue<Camera> copy2Que(que);

    /* 1-3-1 队尾添加元素 */
    que.push(camera2);
    que.push(camera3);

    /* 1-3-2 队头移除元素 */
    que.pop();

    /* 1-3-3 获取队头元素 */
    Camera& cameraTopEle = que.front();
    cout << cameraTopEle.toString() << endl;

    /* 1-3-4 获取队尾元素 */
    Camera& cameraBackEle = que.back();
    cout << cameraBackEle.toString() << endl;

    /* 1-4-1 判断队列是否为空 */
    cout << "queue is empty ? " << que.empty() << endl;

    /* 1-4-2 获取队列长度 */
    cout << "queue size = " << que.size() << endl;
    return 0;
}
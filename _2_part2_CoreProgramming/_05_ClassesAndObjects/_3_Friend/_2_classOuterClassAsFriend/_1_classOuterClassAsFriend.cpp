// Create by hui on 2022/6/14 15:57
// Code describe:
//      1. 类作为另一个类的友元
//      2-1, 类外定义构造函数
//      2-2, 类外定义成员函数
// Keyword      : 

#include <iostream>
#include <string>
using namespace std;

class House;
class master;


class House{
    /* 2-1 House中设置Master类作为友元 */
    friend class Master;

private:
    int price = 840000;
    string masterName;
public:
    string location;
};


class Master{
public:
    string name;

    void printHousePMessage() {
        auto  housePointer = House();
        /* 2-2 被定义为友元的Master类访问House实例对象的私有属性 */
        housePointer.masterName = this->name;


        cout << "[Master] mater name = " << housePointer.masterName << endl;
        cout << "[Master] house price = " << housePointer.price << endl;

    }
};


int main() {
    auto masterPointer = Master();
    masterPointer.name = "张辉";
    masterPointer.printHousePMessage();
    
    return 0;
}
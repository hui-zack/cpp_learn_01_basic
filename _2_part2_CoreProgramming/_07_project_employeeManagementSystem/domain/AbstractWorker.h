#pragma once
#include <iostream>
#include <string>

using namespace std;
class AbstractWorker {
public:
    int _id;
    string _name;
    int _deptId;

    AbstractWorker(int id, string name, int deptId): _id(id), _name(move(name)), _deptId(deptId){}

    /** 显示个人信息 */
    virtual void showInfo() = 0;

    /** 获取岗位名称 */
    virtual string getDepName() = 0;

    virtual ~AbstractWorker();
};
AbstractWorker::~AbstractWorker() = default;;
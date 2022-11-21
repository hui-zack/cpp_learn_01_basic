#pragma once
#include "AbstractWorker.h"
#include <iostream>
#include <string>

using namespace std;
class Manager: public AbstractWorker {
private:
    string _deptName_ = "经理";
    string _deptJob_ = "完成老板下发的任务";
public:
    Manager(int id, string name, int deptId);

    /** 显示个人信息 */
    void showInfo() override;

    /** 显示个人信息 */
    string getDepName() override;

};


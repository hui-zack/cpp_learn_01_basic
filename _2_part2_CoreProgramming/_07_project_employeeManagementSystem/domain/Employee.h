#pragma once
#include "AbstractWorker.h"
#include <iostream>
#include <string>

using namespace std;
class Employee: public AbstractWorker {
private:
    string _deptName_ = "员工";
    string _deptJob_ = "完成经理下发的任务";
public:
    Employee(int id, string name, int deptId);

    /** 显示个人信息 */
    void showInfo() override;

    /** 显示个人信息 */
    string getDepName() override;

};


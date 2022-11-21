//
// Created by admin on 2022/11/18.
//
#pragma once
#include "AbstractWorker.h"
#include <iostream>
#include <string>

using namespace std;
class Boss: public AbstractWorker {
private:
    string _deptName_ = "老板";
    string _deptJob_ = "管理公司的所有事务";
public:
    Boss(int id, string name, int deptId);

    /** 显示个人信息 */
    void showInfo() override;

    /** 显示个人信息 */
    string getDepName() override;

};

//
// Created by admin on 2022/11/18.
//

#include "Boss.h"
using namespace std;
Boss::Boss(int id, string name, int deptId) : AbstractWorker(id, move(name), deptId) {}


void Boss::showInfo() {
    cout << "职工编号: " << this->_id << "\t"
         << "职工姓名: " << this->_name << "\t"
         << "岗位: " << this->_deptName_<< "\t"
         << "岗位职责: " << this->_deptJob_ << "" << endl;
}

string Boss::getDepName() {
    return this->_deptJob_;
}

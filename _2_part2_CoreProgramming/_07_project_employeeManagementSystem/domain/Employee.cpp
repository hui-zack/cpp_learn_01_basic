//
// Created by admin on 2022/11/18.
//

#include "Employee.h"
using namespace std;
Employee::Employee(int id, string name, int deptId) : AbstractWorker(id, move(name), deptId) {}


void Employee::showInfo() {
    cout << "职工编号: " << this->_id << "\t"
         << "职工姓名: " << this->_name << "\t"
         << "岗位: " << this->_deptName_<< "\t"
         << "岗位职责: " << this->_deptJob_ << "" << endl;
}

string Employee::getDepName() {
    return this->_deptJob_;
}


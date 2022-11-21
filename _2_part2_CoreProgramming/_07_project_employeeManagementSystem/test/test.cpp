// Create by hui on 2022/11/18 23:31
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include "../domain/AbstractWorker.h"
#include "../domain/Employee.h"
#include "../domain/Employee.cpp"
#include "../domain/Manager.h"
#include "../domain/Manager.cpp"
#include "../domain/Boss.h"
#include "../domain/Boss.cpp"
#include <fstream>
#define __SAVE_FILE_NAME "empFile.txt"
using namespace std;

class util{
public:
    static ifstream ifs;
};

ifstream util::ifs = ifstream();

int main() {
    AbstractWorker* worker = nullptr;

    worker = new Employee(1,"张辉", 1);
    worker->showInfo();
    delete worker;


    worker = new Manager(2, "陈轶", 1);
    worker->showInfo();
    delete worker;

    worker = new Boss(3, "未知", 1);
    worker->showInfo();
    delete worker;

    util::ifs.open(__SAVE_FILE_NAME, ios::in);
    util::ifs.close();

    cout << "第一次读取完毕" << endl;
    util::ifs.open(__SAVE_FILE_NAME, ios::in);
    util::ifs.close();
    cout << "第二次读取完毕" << endl;
    return 0;
}
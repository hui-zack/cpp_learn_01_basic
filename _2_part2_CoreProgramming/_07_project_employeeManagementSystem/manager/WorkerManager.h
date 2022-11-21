#pragma once
#include <iostream>
#include "../domain/AbstractWorker.h"
#include "../domain/Employee.h"
#include "../domain/Employee.cpp"
#include "../domain/Manager.h"
#include "../domain/Manager.cpp"
#include "../domain/Boss.h"
#include "../domain/Boss.cpp"
#include "../service/FileService.h"
#include "../service/FileService.cpp"
#include <fstream>
using namespace std;

#include <fstream>
#define __SAVE_FILE_NAME "empFile.txt"

class WorkerManager{
public:
    int _employeeNumber;

    AbstractWorker** _AbsWorkerPointerArray;

    bool _fileIsExist;

    WorkerManager();
    ~WorkerManager();

    /* 显示菜单界面 */
    void _showMenu();

    /* 退出系统函数 */
    void _exitSystem();

    /* 添加职工 */
    void _addEmployee();

    /* 展示职工信息 */
    void _showEmployee(bool usePause);

    /* 删除职工 */
    void _deleteEmployee();

    /* 修改职工 */
    void _modifyEmployee();

    /* 查找职工 */
    void _selectEmployee();

    /* 清空数据 */
    void _deleteAllData();

private:
    int _getMaxId_();

    int _findEmployeeById_(int id);

    int _findEmployeeByName_(const string & name);

    /* 保存数据 */
    void _saveToFile_();

    /* 读取数据 */
    void _readFromFile_();

};
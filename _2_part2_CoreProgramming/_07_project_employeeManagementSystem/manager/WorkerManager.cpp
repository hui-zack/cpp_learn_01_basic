//
// Created by admin on 2022/11/18.
//
#pragma once

#include "WorkerManager.h"


WorkerManager::WorkerManager() {
    if ((FileService::fileIsEmpty(__SAVE_FILE_NAME))) {
        this->_employeeNumber = 0;
        this->_AbsWorkerPointerArray = nullptr;
        this->_fileIsExist = false;
        // cout << "save file don't exist or empty" << endl;
        return;
    } else {
        this->_readFromFile_();
    }

}

WorkerManager::~WorkerManager() {
    if (this->_AbsWorkerPointerArray != nullptr) {
        delete[] this->_AbsWorkerPointerArray;
        this->_AbsWorkerPointerArray = nullptr;
    }
}

void WorkerManager::_showMenu() {
    cout << "***********************************************" << endl;
    cout << "************** 欢迎使用职工管理系统 ***************" << endl;
    cout << "***************  0. 退出管理系统  ***************" << endl;
    cout << "***************  1. 增加职工信息  ***************" << endl;
    cout << "***************  2. 显示职工信息  ***************" << endl;
    cout << "***************  3. 删除离职职工  ***************" << endl;
    cout << "***************  4. 修改职工信息  ***************" << endl;
    cout << "***************  5. 查找编号排序  ***************" << endl;
    cout << "***************  6. 清空所有数据  ***************" << endl;
    cout << "***********************************************" << endl;

}

void WorkerManager::_exitSystem() {
    cout << "---- 系统正常退出, 欢迎下次使用 ----" << endl;
    system("pause");
    exit(0);
}

void WorkerManager::_addEmployee() {
    int inputNum = -1;
    cout << "请输入要添加的人数: " << endl;

    cin.clear();
    cin.ignore();

    cin >> inputNum;
    while (cin.fail()) {
        cin.clear();
        cin.ignore();
        cin >> inputNum;
    }

    if (inputNum > 0) {
        // 计算新空间大小
        int newSize = this->_employeeNumber + inputNum;

        // 开辟一个新的数组用于存储数据
        auto **newPointerArray = new AbstractWorker *[newSize];

        // 原先的数组不为空, 将就数组的数据复制到新数组中
        if (this->_AbsWorkerPointerArray != nullptr) {
            for (int i = 0; i < this->_employeeNumber; i++) {
                newPointerArray[i] = this->_AbsWorkerPointerArray[i];
            }
        }

        // 循环添加新数据
        int maxId = this->_getMaxId_();
        for (int i = 0; i < inputNum; ++i) {
            int id = 0;
            int index = 0;
            string name;

            cout << "请输入第" << i + 1 << "个新职工的姓名: " << endl;
            cin >> name;
            while (cin.fail()) {
                cin.clear();
                cin.ignore();
                cin >> name;
            }


            int deptId;
            cout << "请选择第" << i + 1 << "个新职工的部门编号" << endl;
            cout << "普通职工\t-> 输入数字1" << endl;
            cout << "经理   \t-> 输入数字2" << endl;
            cout << "老板   \t-> 输入数字3" << endl;
            cout << "按提示输入部门编号: " << endl;

            cin >> deptId;

            while (cin.fail()) {
                cin.clear();
                cin.ignore();
                cin >> deptId;
            }


            id = maxId + i + 1;
            index = this->_employeeNumber + i;
            AbstractWorker *worker = nullptr;
            switch (deptId) {
                case 1:
                    worker = new Employee(id, name, 1);
                    break;
                case 2:
                    worker = new Manager(id, name, 2);
                    break;
                case 3:
                    worker = new Boss(id, name, 3);
                    break;
                default:
                    cout << "错误的部门id" << endl;
                    system("pause");
                    system("cls");
                    return;
            }

            if (worker != nullptr) {
                newPointerArray[index] = worker;
            }
        }

        delete[] this->_AbsWorkerPointerArray;
        this->_AbsWorkerPointerArray = newPointerArray;
        this->_employeeNumber = newSize;
        cout << "-- 添加新职工成功 --" << endl;
        this->_saveToFile_();
    } else {
        cout << "-- 输入有误 --" << endl;
    }

    system("pause");
    system("clear");
}

void WorkerManager::_showEmployee(bool usePause) {
    this->_saveToFile_();
    cout << "-----------------------------------------------------------------" << endl;
    if (this->_employeeNumber != 0 ) {
        for (int i = 0; i < this->_employeeNumber; i++) {
            this->_AbsWorkerPointerArray[i]->showInfo();
        }
    } else{
        cout << "                           表数据为空 " << endl;
    }
    cout << "-----------------------------------------------------------------" << endl;
    if (usePause){
        system("pause");
        system("cls");
    }


}

void WorkerManager::_deleteEmployee() {
    if ( FileService::fileIsEmpty(__SAVE_FILE_NAME)){
        cout << "表数据为空, 无需删除" << endl;
        system("pause");
        system("cls");
        return;
    }

    int id;
    cout << "请输入你要删除的职工id: " << endl;
    cin >> id;
    while (cin.fail()){
        cin.clear();
        cin.ignore();
        cin >> id;
    }

    int deleteIndex = this->_findEmployeeById_(id);

    AbstractWorker *pWorker = _AbsWorkerPointerArray[deleteIndex];
    if (deleteIndex > -1){
        for (int index = deleteIndex; index < this->_employeeNumber - 1; index++) {

            this->_AbsWorkerPointerArray[index] = this->_AbsWorkerPointerArray[index + 1];

        }
        this->_employeeNumber --;
        delete pWorker;
        this->_saveToFile_();
        cout << "-- 删除成功 --" << endl;
    } else{
        cout << "-- 没有职工编号为" << id << "的员工 --" << endl;
    }


    system("pause");
    system("cls");
}



void WorkerManager::_modifyEmployee() {
    if (FileService::fileIsEmpty(__SAVE_FILE_NAME)){
        cout << "表数据为空, 无法修改" << endl;
        system("pause");
        system("cls");
        return;
    }

    int modifyId = -1;
    cout << "请输入要修改员工的职工编号:" << endl;
    cin >> modifyId;
    while (cin.fail()){
        cin.clear();
        cin.ignore();
        cin >> modifyId;
    }

    if (modifyId > 0){
        int index = _findEmployeeById_(modifyId);
        if (index < 0){
            cout << "职工编号为"<< modifyId << "的职工并不存在" << endl;
            system("pause");
            system("cls");
            return;
        }

        string name;
        int deptId;
        cout << "请重新输入该员工的姓名: " << endl;
        cin >> name;
        while (cin.fail()){
            cin.clear();
            cin.ignore();
            cin >> name;
        }


        cout << "请根据提示重新选择该员工的部门编号: " << endl;
        cout << "普通职工\t-> 输入数字1" << endl;
        cout << "经理   \t-> 输入数字2" << endl;
        cout << "老板   \t-> 输入数字3" << endl;
        cin >> deptId;
        while (cin.fail()){
            cin.clear();
            cin.ignore();
            cin >> deptId;
        }
        int id = this->_AbsWorkerPointerArray[index]->_id;
        AbstractWorker* worker = nullptr;
        switch (deptId) {
            case 1:
                worker = new Employee(id, name, 1);
                break;
            case 2:
                worker = new Manager(id, name, 2);
                break;
            case 3:
                worker = new Boss(id, name, 3);
                break;
            default:
                cout << "错误的部门编号" << endl;

        }
        if (worker != nullptr){
            delete this->_AbsWorkerPointerArray[index];
            this->_AbsWorkerPointerArray[index] = worker;
        }

        system("pause");
        system("cls");
    }

}



void WorkerManager::_selectEmployee() {
    cout << "请选择查找方式:" << endl;
    cout << "根据职工编号查找\t -> 1" << endl;
    cout << "根据职工名称查找\t -> 2" << endl;
    int selectType = 1;
    cin >> selectType;
    while (cin.fail()){
        cin.clear();
        cin.ignore();
        cin >> selectType;
    }
    int indexResult = -1;
    switch (selectType) {
        case 1:
        {
            int selectId = -1;
            cout << "输入要查查找的职工编号:" << endl;
            cin >> selectId;
            while (cin.fail()){
                cin.clear();
                cin.ignore();
                cin >> selectId;
            }
            indexResult = _findEmployeeById_(selectId);
            break;
        }

        case 2:
        {
            string selectName;
            cout << "输入要查查找的职工姓名:" << endl;
            cin >> selectName;
            while (cin.fail()){
                cin.clear();
                cin.ignore();
                cin >> selectName;
            }
            indexResult = _findEmployeeByName_(selectName);
            break;
        }

        default:
        {
            cout << "没有该选项" << endl;
            system("pause");
            system("cls");
            return;
        }
    }

    if (indexResult < 0){
        cout << "未查询到数据" << endl;
        system("pause");
        system("cls");
        return;
    }

    this->_AbsWorkerPointerArray[indexResult]->showInfo();
    system("pause");
    system("cls");
}

void WorkerManager::_deleteAllData() {
    cout << "请输入\"确认清除\"来清除所有数据:" << endl;
    string inputValue;
    cin >> inputValue;
    if (cin.fail()){
        cin.clear();
        cin.ignore();
    }

    if (inputValue != "确认清除"){
        cout << "验证失败, 清除所有数据失败" << endl;
        system("pause");
        system("cls");
        return;
    }

    FileService::clearFile(__SAVE_FILE_NAME);
    delete [] this->_AbsWorkerPointerArray;
    this->_employeeNumber = 0;
    cout << "验证通过, 清除所有数据成功" << endl;
    system("pause");
    system("cls");
}

/* ------ private ------- */
void WorkerManager::_saveToFile_() {
    ofstream &ofs = FileService::_ofs;
    ofs.open(__SAVE_FILE_NAME, ios::out);
//    cout << "数据保存到->" << __SAVE_FILE_NAME << endl;
    for (int i = 0; i < WorkerManager::_employeeNumber; ++i) {
        ofs << WorkerManager::_AbsWorkerPointerArray[i]->_id << " "
            << WorkerManager::_AbsWorkerPointerArray[i]->_name << " "
            << WorkerManager::_AbsWorkerPointerArray[i]->_deptId << endl;
    }
    ofs.close();
}


void WorkerManager::_readFromFile_() {
    ifstream &ifs = FileService::_ifs;

    ifs.open(__SAVE_FILE_NAME, ios::in);
    int id;
    string name;
    int deptId;
    int fileLineNum = 0;
    /* 获取有效的数据条数 */
    while (ifs >> id && ifs >> name && ifs >> deptId){
        fileLineNum ++;
    }
    this->_employeeNumber = fileLineNum;
    this->_AbsWorkerPointerArray = new AbstractWorker *[fileLineNum];


    int count = 0;
    ifs.close();
    ifstream &ifs1 = FileService::_ifs;
    ifs1.open(__SAVE_FILE_NAME, ios::in);
    while (ifs1 >> id && ifs1 >> name && ifs1 >> deptId){

        AbstractWorker* worker = nullptr;
        if (deptId  == 1){
            worker= new Employee(id, name, deptId);
        } else if(deptId == 2){
            worker= new Manager(id, name, deptId);
        } else if(deptId == 3){
            worker = new Boss(id, name, deptId);
        }
        if (worker != nullptr){
//            worker->showInfo();
            this->_AbsWorkerPointerArray[count] = worker;
        }
        
        count ++;
    }

    ifs1.close();

}


int WorkerManager::_getMaxId_() {
    int maxId = -1;
    for (int i = 0; i < this->_employeeNumber; ++i) {
        maxId = this->_AbsWorkerPointerArray[i]->_id;
    }
    return maxId;
}

int WorkerManager::_findEmployeeById_(int id) {
    int index = -1;
    for (int i = 0; i < this->_employeeNumber; ++i) {
        if (this->_AbsWorkerPointerArray[i]->_id == id){
            index = i;
            break;
        }
    }
    return index;
}

int WorkerManager::_findEmployeeByName_(const string & name) {
    int index = -1;
    for (int i = 0; i < this->_employeeNumber; i ++){
        if (this->_AbsWorkerPointerArray[i]->_name == name){
            index = i;
            break;
        }
    }

    return index;
}



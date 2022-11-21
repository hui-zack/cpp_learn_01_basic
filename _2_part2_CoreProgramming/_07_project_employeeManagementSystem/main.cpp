// Create by hui on 2022/11/18 0:25
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include "manager/WorkerManager.h"
#include "manager/WorkerManager.cpp"

using namespace std;

int main() {
//    cout << __SAVE_FILE_NAME << endl;
    WorkerManager workerManger = WorkerManager();

    int choice = -1;

    while (true) {
        workerManger._showMenu();
        workerManger._showEmployee(false);
        cout << "根据界面提示输入操作:  " << endl;

        cin >> choice;
        while (cin.fail()) {
            cin.clear();
            cin.ignore();
            cin >> choice;
        }

        switch (choice) {
            case 0:             // 退出系统
                workerManger._exitSystem();
                break;
            case 1:             // 添加职工
                workerManger._addEmployee();
                break;
            case 2:             // 显示职工
                workerManger._showEmployee(true);
                break;
            case 3:             // 删除职工
                workerManger._deleteEmployee();
                break;
            case 4:             // 修改职工
                workerManger._modifyEmployee();
                break;
            case 5:             // 查找职工
                workerManger._selectEmployee();
                break;
            case 6:              // 清除数据
                workerManger._deleteAllData();
                break;

            default:
                system("cls");
                break;
        }

        if (choice == 100) {
            exit(0);
        }

    }
}
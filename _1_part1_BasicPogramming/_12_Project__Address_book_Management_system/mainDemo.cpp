// Create by hui on 2021/12/17 11:19
// Code describe: 通讯录管理系统
// Keyword      : 

#include <iostream>
#include <string>
#define MAX 1000
using namespace std;
/*
 * 系统需求 --> 系统中需要实现的功能如下:
 *  1. 添加联系人: 向通讯录中添加新人, 信息包括(姓名, 性别, 年龄, 联系电话, 家庭住址) 最多记录1000人
 *  2. 显示联系人: 显示通讯录中所有联系人信息
 *  3. 删除联系人: 按照姓名删除指定联系人
 *  4. 查找联系人: 按照姓名查看指定联系人信息
 *  5. 修改联系人: 按照信息重新修改指定联系人
 *  6. 清空联系人: 清空通讯录中所有信息
 *  0. 退出通讯录: 退出当前使用的通讯录
 * */

struct person{
    string name;
    string gender;
    int age;
    string phone;
    string address;
};

struct addressBooks{
    // 通讯录中保存联系人的数组
    struct person conArray[MAX];
    // 通讯录中当前记录的人员个数
    int con_size;
};

void showMenu();
void addPerson(addressBooks *abs);
void showPerson(addressBooks *abs);
int isExist(addressBooks *abs, string name);
void delPerson(addressBooks *abs);
void findPerson(addressBooks *abs);
void changePerson(addressBooks *abs);
void clearPerson(addressBooks *abs);

int main() {
    int select;
    addressBooks abs;
    abs.con_size = 0;
    while (true) {
        showMenu();
        cin >> select;
        switch (select) {
            case 1:                     // 1. 添加联系人: 向通讯录中添加新人, 信息包括(姓名, 性别, 年龄, 联系电话, 家庭住址) 最多记录1000人
            {
                addPerson(&abs);
                break;
            }
            case 2:                     // 2. 显示联系人: 显示通讯录中所有联系人信息
            {
                showPerson(&abs);
                break;
            }
            case 3:                     // 3. 删除联系人: 按照姓名删除指定联系人
            {
                delPerson(&abs);
                break;
            }
            case 4:                     // 4. 查找联系人: 按照姓名查看指定联系人信息
            {
                findPerson(&abs);
                break;
            }
            case 5:                     // 5. 修改联系人: 按照信息重新修改指定联系人
                changePerson(&abs);
                break;
            case 6:                     // 6. 清空联系人: 清空通讯录中所有信息
                clearPerson(&abs);
                break;
            case 0:                     // 0. 退出通讯录: 退出当前使用的通讯录
                cout << "通讯录已关闭" << endl;
                return 0;
        }
    }
}




// 菜单
void showMenu(){

    cout << "*************************" << endl;
    cout << "*****  1. 添加联系人  *****" << endl;
    cout << "*****  2. 显示联系人  *****" << endl;
    cout << "*****  3. 删除联系人  *****" << endl;
    cout << "*****  4. 查找联系人  *****" << endl;
    cout << "*****  5. 修改联系人  *****" << endl;
    cout << "*****  6. 清空联系人  *****" << endl;
    cout << "*****  0. 退出通讯录  *****" << endl;
    cout << "*************************" << endl;
    cout << "请选择:" << endl;
}


//添加联系人
void addPerson(addressBooks *abs){
    if (abs->con_size == MAX){
        cout << "通讯录已满, 无法添加" << endl;
        return;
    } else{
        // 添加姓名
        cout << "请输入联系人姓名:" << endl;
        string name;
        cin >> name;
        abs->conArray[abs->con_size].name = name;

        //添加性别
        cout << "请输入联系人性别(1:男 2:女):" << endl;
        int i;
        string gender;
        while (true) {
            cin >> i;
            if (i == 1) {
                gender = "男";
                break;
            } else if (i == 2){
                gender = "女";
                break;
            } else {
                cout << "输入错误, 重新输入";
            }
        }
        abs->conArray[abs->con_size].gender = gender;

        // 添加年龄

        cout << "请输入年龄:" << endl;
        int age;
        cin >> age;
        abs->conArray[abs->con_size].age = age;
        // 添加手机号码

        cout << "请输入手机号码:" << endl;
        string phone;
        cin >> phone;
        abs->conArray[abs->con_size].phone = phone;
        // 添加手机号码

        cout << "请输入家庭住址:" << endl;
        string address;
        cin >> address;
        abs->conArray[abs->con_size].address = address;

        abs->con_size++;
        cout << "con_size:" << abs->con_size << endl;
        // system("cls");
        cout << endl << "输入完成" << endl;

    }
};

void showPerson(addressBooks *abs) {
    /*
     * 参数: struct类addressBooks的地址
     * 显示所有联系人
     * */
    // 判断通讯录中人数是否为0, 如果记录为0, 提示记录为空
    if (abs->con_size == 0) {
        cout << "当前记录为空" << endl;
    } else {
        for (int i = 0; i < abs->con_size; i++){
            cout << "姓名: " << abs->conArray[i].name;
            cout << " 性别: " << abs->conArray[i].gender;
            cout << " 年龄: " << abs->conArray[i].age;
            cout << " 手机: " << abs->conArray[i].phone;
            cout << " 住址: " << abs->conArray[i].address << endl;
        }
    }
}

//* 检测联系人是否存在, 如果存在返回联系人在数组中的位置, 不存在返回-1
int isExist(addressBooks *abs, string name){
    for(int i = 0; i < abs->con_size; i++){
        if (abs->conArray[i].name == name) {
            return i;
        }
    }
    return -1;
}



/* *
 *
 *
 * */
//* 查找联系人
void findPerson(addressBooks *abs){
    cout << "请输入您要查找的联系人姓名:" << endl;
    string name;
    cin >> name;
    int result = isExist(abs, name);
    if (result == -1) {
        cout << "查无此人" << endl;
    } else {
        for (int i = 0; i < abs->con_size; ++i) {
            if (result == i) {
                cout << "姓名: " << abs->conArray[i].name;
                cout << " 性别: " << abs->conArray[i].gender;
                cout << " 年龄: " << abs->conArray[i].age;
                cout << " 手机: " << abs->conArray[i].phone;
                cout << " 住址: " << abs->conArray[i].address << endl;
            }
        }
    }
}

//* 修改联系人
void changePerson(addressBooks *abs) {
    cout << "请输入您要修改的联系人姓名: " << endl;
    string name;
    cin >> name;
    int result = isExist(abs, name);
    if (result == -1){
        cout << "查无此人" << endl;
    } else {
        for (int i = 0; i < abs->con_size; ++i) {
            if (result == i) {
                cout << "请输入联系人姓名:" << endl;
                string new_name;
                cin >> new_name;
                abs->conArray[i].name = new_name;

                //添加性别
                cout << "请输入联系人性别(1:男 2:女):" << endl;
                int j;
                string gender;
                while (true) {
                    cin >> j;
                    if (j == 1) {
                        gender = "男";
                        break;
                    } else if (j == 2){
                        gender = "女";
                        break;
                    } else {
                        cout << "输入错误, 重新输入";
                    }
                }
                abs->conArray[i].gender = gender;

                // 添加年龄

                cout << "请输入年龄:" << endl;
                int age;
                cin >> age;
                abs->conArray[i].age = age;
                // 添加手机号码

                cout << "请输入手机号码:" << endl;
                string phone;
                cin >> phone;
                abs->conArray[i].phone = phone;
                // 添加手机号码

                cout << "请输入家庭住址:" << endl;
                string address;
                cin >> address;
                abs->conArray[i].address = address;

                abs->con_size++;
                cout << "con_size:" << abs->con_size << endl;
                // system("cls");
                cout << endl << "输入完成" << endl;
            }

        }
    }
}

//* 删除指定联系人
void delPerson(addressBooks *abs){
    cout << "输入要删除的联系人姓名" << endl;
    string name;
    cin >> name;
    int result = isExist(abs, name);
    if (result == -1){
        cout << "查无此人" << endl;
    } else {
        for (int i = 0; i < abs->con_size; i++){
            if (i == result){
                abs->conArray[i] = abs->conArray[i+1];
            }
            abs->con_size--;
        }
    }
    cout << "此人已删除" << endl;
}

void clearPerson(addressBooks *abs) {
    abs->con_size = 0;
    cout << "通讯录已情空" << endl;
}
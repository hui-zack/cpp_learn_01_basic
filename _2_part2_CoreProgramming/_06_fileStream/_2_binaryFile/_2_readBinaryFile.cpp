// Create by hui on 2022/11/17 23:45
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
/* 4-1 导入<fstream>头文件 */
#include <fstream>
using namespace std;


class Camera{
public:
    /** c++里string是一个对象, 二进制写入时会把类内的指针也写进去, 导致读取异常, 一般使用char varName[len]来代替字符串 */
    char name[64];
    int id;
};


int main() {
    /* 4-2 创建文件输入流 */
    ifstream ifs = ifstream();

    string filePath = R"(D:\user\learn\c++\code\_2_part2_CoreProgramming\_6_fileStream\_2_binaryFile\binaryText.txt)";

    /* 4-3 打开文件并指定操作方式为 ios::in | ios::binary */
    ifs.open(filePath, ios::in | ios::binary);

    if (!ifs.is_open()){
        cout << "[-- open file failed, system exit --]" << endl;
        return -1;
    }

    Camera camera = Camera();
    /* 4-4 使用ifstream的r ead(char * buffer, int len)方法读取数据 */
    ifs.read((char *)&camera, sizeof(camera));

    cout << "camera.name = " << camera.name << ", camera.id = " << camera.id << endl;


    /* 4-5 关闭输入流 */
    ifs.close();

    return 0;
}
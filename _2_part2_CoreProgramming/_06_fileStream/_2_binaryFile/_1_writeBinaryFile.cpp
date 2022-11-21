// Create by hui on 2022/11/17 22:28
// Code describe: 二进制文件的写入
// Keyword      : 

#include <iostream>
#include <string>
/* 3-1 导入<fstream>头文件 */
#include <fstream>
using namespace std;

class Camera{
public:
    /** c++里string是一个对象, 二进制写入时会把类内的指针也写进去, 导致读取异常, 一般使用char varName[len]来代替字符串 */
    char name[64];
    int id;
};

int main() {
    /* 3-2 创建文件输出流对象 */
    ofstream ofs = ofstream();


    string filePath = R"(D:\user\learn\c++\code\_2_part2_CoreProgramming\_6_fileStream\_2_binaryFile\binaryText.txt)";

    /* 3-3 打开文件并指定操作方式为 ios::out | ios::binary */
    ofs.open(filePath, ios::out | ios::binary);


    Camera camera = {"张辉", 11};                  // 只有公有属性的类可用c++默认提供的初始化列表方式来初始化

    /* 3-4 使用ofstream的write(const char * buffer, int len)方法写入二进制数据 */
    ofs.write((const char *) &camera, sizeof(camera));

    /* 3-5 关闭输出流对象 */
    ofs.close();


    return 0;
}
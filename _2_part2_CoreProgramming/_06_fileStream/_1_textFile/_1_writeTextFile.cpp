// Create by hui on 2022/11/17 10:51
// Code describe: 文本文件的写入
// Keyword      : 

#include <iostream>
#include <string>
/* 1-1 导入<fstream>头文件 */
#include <fstream>

using namespace std;

int main() {
    /* 1-2 创建文件流对象ofstream */
    ofstream ofs = ofstream();

    /* 1-3 打开文件并指定文件操作方式为ios::out */
    string filePath = R"(D:\user\learn\c++\code\_2_part2_CoreProgramming\_6_fileStream\_1_textFile\test.txt)";
    ofs.open(filePath, ios::out);

    /* 1-4 写入内容 */
    ofs << "电脑名称: 联想拯救者R9000P" << endl;

    /* 1-5 关闭文件流 */
    ofs.close();

    return 0;
}
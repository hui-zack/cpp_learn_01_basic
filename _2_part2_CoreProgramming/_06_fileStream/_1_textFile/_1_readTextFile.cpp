// Create by hui on 2022/11/17 21:01
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

/* 2-1 导入fstream库 */
#include <fstream>


using namespace std;

ifstream getIfstream(const string& filePath){
    /* 2-2 创建文件流对象 ifstream */
    ifstream ifs = ifstream();

    /* 2-3 打开文件并指定文件操作方式为ios::in */
    ifs.open(filePath, ios::in);


    /* 2-4 判断文件是否打开成功 */
    string openStatus = ifs.is_open() ? "successful" : "failed";

    cout << "[open file status = " + openStatus << "]" << endl;

    return ifs;
}

int main() {


    string filePath = R"(D:\user\learn\c++\code\_2_part2_CoreProgramming\_6_fileStream\_1_textFile\jsonData.txt)";


    cout << "-------------方式1 string逐行读取------------" << endl;

    /* 2-5-1 方式1 string逐行读取, 包括空格不包括换行 */
    auto ifs1 = getIfstream(filePath);

    string stringBuffer;
    while (getline(ifs1,stringBuffer)){
        cout << stringBuffer << endl;
    }


    cout << "\n-------------方式2 字符数组逐行读取------------" << endl;

    /* 2-5-2 方式2 字符数组逐行读取, 包括空格不包括换行 */
    auto ifs2 = getIfstream(filePath);
    char buf2[1024] = {};
    while (ifs2.getline(buf2, sizeof buf2)){
        cout << buf2 << endl;
    }


    cout << "\n-------------方式3 单个字符逐个读取------------" << endl;
    /* 2-5-3 方式3 单个字符逐个读取, 包括空格和换行 */
    auto ifs4 = getIfstream(filePath);

    char c;
    while ((c=ifs4.get()) != EOF){
        cout << c;
    }

    cout << "\n-------------方式4 字符数组忽略空格换行读取------------" << endl;
    /* 2-5-4 方式4 字符数组忽略空格和回车读取 */
    auto ifs3 = getIfstream(filePath);
    char buf3[1024] = {};
    while (ifs3 >> buf3){
        cout << buf3;
    }


    /* 2-6 关闭输入流 */
    ifs1.close();
    ifs2.close();
    ifs3.close();
    ifs4.close();

    return 0;
}
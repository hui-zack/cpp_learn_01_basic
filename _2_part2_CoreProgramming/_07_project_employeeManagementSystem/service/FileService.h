//
// Created by admin on 2022/11/19.
//

#pragma once
#include <iostream>
#include <string>
#include <fstream>



using namespace std;

class WorkerManager;

class FileService{
public:


    /* 判断文件是否存在 */
    static bool fileIsExist(const string & filePath);

    /* 判断文件是否为空 */
    static bool fileIsEmpty(const string & filePath);

    /* 重新创建文件 */
    static void clearFile(const string & filePath);

    static ifstream  _ifs;
    static ofstream  _ofs;

};
ifstream FileService::_ifs = ifstream ();
ofstream FileService::_ofs = ofstream ();



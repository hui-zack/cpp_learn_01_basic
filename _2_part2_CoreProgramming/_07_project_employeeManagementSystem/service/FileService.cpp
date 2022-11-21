//
// Created by admin on 2022/11/19.
//

#include "FileService.h"


bool FileService::fileIsExist(const string &filePath) {
    _ifs = ifstream();
    _ifs.open(filePath, ios::in);
    bool status = false;
    if (_ifs.is_open()) {
        status = true;
    } else {
        status = false;
    }
    _ifs.close();
    return status;

}

bool FileService::fileIsEmpty(const string &filePath) {
    char ch;
    bool status = true;
    _ifs = ifstream();
    if (fileIsExist(filePath)) {
        _ifs.open(filePath, ios::in);
        _ifs >> ch;
        if (_ifs.eof()) {
            status = true;
        } else {
            status = false;
        }

    }
    _ifs.close();
    return status;
}

void FileService::clearFile(const string &filePath) {
    _ofs.open(filePath, ios::trunc);
    _ofs.close();
}
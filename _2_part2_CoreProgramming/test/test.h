//
// Created by admin on 2022/11/9.
//

#ifndef C___TEST_H
#define C___TEST_H
#include <string>
//#include "test.cpp"
#include "Camera.h"
#include "Camera.cpp"
using namespace std;

class Test {
private:
    string name;
public:
    string getName();
    void setName(string name);
    void setCamera();
};


#endif //C___TEST_H

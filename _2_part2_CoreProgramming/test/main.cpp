// Create by hui on 2022/11/9 0:30
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include "test.h"
#include "test.cpp"
//#include "Camera.h"
using namespace std;

int main() {
    Test test = Test();
    test.setName("default");
    cout << test.getName() << endl;

    return 0;
}
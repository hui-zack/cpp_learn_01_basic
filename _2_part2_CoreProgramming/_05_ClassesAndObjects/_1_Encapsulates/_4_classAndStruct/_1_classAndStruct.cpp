// Create by hui on 2022/11/5 0:54
// Code describe: 类和结构体的区别
// Keyword      : 

#include <iostream>
#include <utility>

using namespace std;

/* 4-1-1 类属性默认权限私有 */
class TestClass{
    string classElement;
};

/* 4-2-1 结构体属性默认权限共有 */
struct TestStruct{
    string structElement;
};
int main() {
    TestClass testClass{};
    /* 4-1-2 类属性默认私有无法访问 */
//    testClass.classElement = "123";

    TestStruct testStruct{};
    /* 4-2-4 结构体属性默认共有可以访问 */
    testStruct.structElement = "123";
    return 0;
}
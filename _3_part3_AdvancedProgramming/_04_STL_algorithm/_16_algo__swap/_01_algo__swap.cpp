// Create by hui on 2022/12/15 0:36
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <algorithm>
#include "../_00_util/containerUtil.cpp"

using namespace std;
/**
    void swap(container con1, container con2);
        // -- 互换两个容器 --
        // 要交换的容器必须是同种类型
        // con1 容器1
        // con2 容器2
 */
int main() {
    vector<int> vec1;
    insertIntDataToVector(vec1, 1);
    vector<int> vec2;
    insertIntDataToVector(vec2, 2);

    /* 16-1 使用swap互换vector<int>类型的两个容器 */
    swap(vec1, vec2);

    printVector(vec1);
    printVector(vec2);

    return 0;
}
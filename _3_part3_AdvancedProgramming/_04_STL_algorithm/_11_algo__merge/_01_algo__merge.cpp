// Create by hui on 2022/12/14 23:33
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <algorithm>
#include "../_00_util/containerUtil.cpp"

using namespace std;
/**
    void merge(it.. src1.beg, it.. src1.end, it.. src2.beg, it.. src2.end, it.. dst.pos);
        // -- 拷贝两个容器的元素到新容器中 --
        // 两个源容器必须是有序的
        // src1.beg 源容器1的开始迭代器
        // src1.end 源容器1的结束迭代器
        // src2.beg 源容器2的开始迭代器
        // src1.end 源容器2的结束迭代器
        // dst.pos  目标容器迭代器开始存储位置
 */
int main() {
    vector<int> intVec1;
    vector<int> intVec2;
    insertIntDataToVector(intVec1);
    insertIntDataToVector(intVec2, 1);


    vector<int> dstVec;
    /* 11-1 使用merge复制两个容器的元素到新容器 */
    dstVec.resize(intVec1.size() + intVec2.size());
    merge(intVec1.begin(), intVec1.end(), intVec2.begin(), intVec2.end(), dstVec.begin());

    printVector(intVec1);
    printVector("dstVec", dstVec);

    return 0;
}
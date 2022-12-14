// Create by hui on 2022/12/14 23:58
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <algorithm>
#include "../_00_util/containerUtil.cpp"

using namespace std;
/**
    void copy(iterator src.beg, iterator src.end, iterator dst.pos)
        // -- 复制元素到新容器 --
        // src.beg 源容器开始迭代器
        // src.end 源容器结束迭代器
        // dst.pos 目标容器迭代器开始存储位置
 */
int main() {
    vector<int> srcVec;
    insertIntDataToVector(srcVec);

    vector<int> dstVec;
    dstVec.resize(srcVec.size());

    /* 13-1 使用copy复制srcVec元素到新容器dstVec */
    copy(srcVec.begin(), srcVec.end(), dstVec.begin());

    printVector("dstVec", dstVec);

    return 0;
}
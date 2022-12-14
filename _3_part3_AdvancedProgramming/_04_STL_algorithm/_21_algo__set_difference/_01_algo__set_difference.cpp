// Create by hui on 2022/12/15 1:43
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <algorithm>
#include "../_00_util/containerUtil.cpp"
using namespace std;
/**
    iterator set_difference(iterator srcCon1.beg, iterator srcCon1.end,
                     iterator srcCon2.beg, iterator srcCon2.end,
                     iterator dstCon.beg)
        // -- 两个容器的差集保存到新容器, 返回目标容器的截至迭代器位置(截至位置后的为无效数据) --
        // srcCon1.beg 源容器1的开始迭代器
        // srcCon1.end 源容器1的结束迭代器
        // srcCon2.beg 源容器2的开始迭代器
        // srcCon2.end 源容器2的结束迭代器
        // dstCon.beg 目标容器的开始迭代器
 */
int main() {
    vector<int> srcVec1;
    vector<int> srcVec2;
    insertIntDataToVector(srcVec1);
    insertIntDataToVector(srcVec2, 10);

    vector<int> dstVec;
    /* 20-1 使用set_difference取srcVec1-srcVec2的元素差集 */
    dstVec.resize(max(srcVec1.size(), srcVec2.size()));
    const vector<int>::iterator & itEnd = set_difference(srcVec1.begin(), srcVec1.end(),
                                                    srcVec2.begin(), srcVec2.end(),
                                                    dstVec.begin());
    vector<int> resultVec;
    for(auto it = dstVec.begin(); it != itEnd; it ++){
        resultVec.push_back(*it);
    }

    printVector("resultVec(srcVec1-srcVec2的差集)", resultVec);

    return 0;
}
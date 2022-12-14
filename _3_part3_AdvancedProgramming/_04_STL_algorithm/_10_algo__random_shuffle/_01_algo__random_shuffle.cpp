// Create by hui on 2022/12/14 23:06
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <random>
#include <algorithm>
#include "../_00_util/containerUtil.cpp"

#include <ctime>
using namespace std;

/**
    void random_shuffle(iterator beg, iterator end);
        // -- 随机调整元素顺序, 洗牌算法 --
        // beg 开始迭代器
        // end 结束迭代器
 */


int main() {
    vector<int> intVec;
    insertIntDataToVector(intVec);
    /* 10-1 根据系统时间生成随机数种子 */
    srand((unsigned int)time(nullptr));

    /* 10-2 使用random_shuffle打乱vector<int>顺序 */
    random_shuffle(intVec.begin(), intVec.end());


    printVector("intVec", intVec);

    return 0;
}
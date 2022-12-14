// Create by hui on 2022/12/15 0:22
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <algorithm>
#include "../_00_util/containerUtil.cpp"

using namespace std;
/**
    void replace_if(iterator beg, iterator end, _pred, T newEle);
        // -- 按条件替换区间内的指定元素 --
        // beg 开始迭代器
        // end 结束迭代器
        // _pred 一元谓词(函数对象/仿函数), 元素为T
        // newEle 新元素
 */

class ReplaceIntPred{
public:
    bool operator()(int ele){
        return ele > 50;
    }
};
int main() {
    vector<int> vec;
    insertIntDataToVector(vec);
    /* 15-1 使用replace_if替换vector<int>中的元素 */
    replace_if(vec.begin(), vec.end(), ReplaceIntPred(), 10086);

    printVector("vec", vec);

    return 0;
}
// Create by hui on 2022/12/14 23:51
// Code describe:
// Keyword      : 

#include <iostream>
#include <string>
#include <algorithm>
#include "../_00_util/containerUtil.cpp"

using namespace std;
/**
    void reverse(iterator beg, iterator end);
        // -- 反转容器中的元素 --
        // beg 开始迭代器
        // end 结束迭代器
 */
int main() {
    vector<int> vec;
    insertIntDataToVector(vec);

    /* 12-1 使用reverse反转vector<int>中的元素 */
    reverse(vec.begin(), vec.end());

    printVector("vec", vec);

    return 0;
}
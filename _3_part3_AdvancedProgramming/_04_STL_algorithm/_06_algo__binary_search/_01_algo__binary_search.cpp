// Create by hui on 2022/12/14 21:24
// Code describe: 二分查找法
// Keyword      : 

#include <iostream>
#include <string>
#include <algorithm>
#include "../_00_util/containerUtil.cpp"

using namespace std;
/**
    bool binary_search(iterator beg, iterator end, T ele);
        // -- 判断元素在容器是否存在, 存在返回true, 否则返回false
        // binary_search在无序序列中不能使用
        // beg 开始迭代器
        // end 结束迭代器
        // ele 需要判断的元素
 */
int main() {
    vector<int> intVec;
    insertIntDataToVector(intVec);

    /* 6-1 使用binary_search(二分查找)查找有序vector元素 */
    bool result = binary_search(intVec.begin(), intVec.end(), 90);
    if (result){
        cout << "algo-binary_search find ele " << endl;
    } else{
        cout << "algo-binary_search don't find ele " << endl;
    }
    return 0;
}
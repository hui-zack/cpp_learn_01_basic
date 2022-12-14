// Create by hui on 2022/12/15 1:02
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include "../_00_util/containerUtil.cpp"

using namespace std;
/**
    void fill(iterator beg, iterator end, T ele);
        // -- 填充/替换区间内所有元素为指定元素 --
        // beg 开始迭代器
        // end 结束迭代器
        // ele 要填充的值
 */
int main() {
    vector<int> intVec;
    insertIntDataToVector(intVec);

    /* 18-1 使用fill将vector容器中的所有元素替换为10086 */
    fill(intVec.begin(), intVec.end(), 10086);

    printVector("intVec", intVec);


    return 0;
}
// Create by hui on 2022/12/15 0:47
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <numeric>
#include "../_00_util/containerUtil.cpp"
using namespace std;
/**
    long long int accumulate(iterator beg, iterator end, T ele);
        // -- 计算容器中所有原奶的累加总和 --
        // beg 开始迭代器
        // end 结束迭代器
 */
int main() {
    vector<int> vec;
    insertIntDataToVector(vec);
    /* 17-1 使用accumulate计算vector<int>中所有元素的累加总和 */
    int sum = accumulate(vec.begin(), vec.end(), 0);
    cout << "10 + 20 + 30 + 40 + 50 + 60 + 70 + 80 + 90 + 100 = " << sum << endl;


    return 0;
}
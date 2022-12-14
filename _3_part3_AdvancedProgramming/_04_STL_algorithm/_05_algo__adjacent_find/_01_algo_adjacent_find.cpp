// Create by hui on 2022/12/14 21:06
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <algorithm>
#include "../_00_util/containerUtil.cpp"
#include <list>
using namespace std;

/**
    iterator adjacent_find(iterator beg, iterator end);
        // -- 查找相邻重复元素, 找到返回相邻元素的第一个元素迭代器位置, 找不到返回迭代器end位置 --
        // beg 开始迭代器
        // end 结束迭代器
 */
int main() {
    list<int> lst;
    insertIntDataToList(lst);
    lst.push_back(100);

    /* 5-1 使用adjacent_find查找list中相邻元素 */
    const list<int>::iterator& it = adjacent_find(lst.begin(), lst.end());
    if (it != lst.end()){
        cout << "adjacent_find same ele = " << *it << endl;
    }


    return 0;
}
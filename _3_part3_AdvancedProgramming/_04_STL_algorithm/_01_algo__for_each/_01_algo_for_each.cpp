// Create by hui on 2022/12/13 23:44
// Code describe: algo for_each算法, 用于容器的遍历
// Keyword      : 

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include "../_00_util/containerUtil.cpp"

using namespace std;

/**
    void for_each(iterator beg, iterator end, funcObject)
        // -- 遍历容器算法 --
        // beg: 开始迭代器
        // end: 结束迭代器
        // funcObject: 函数对象(仿函数, 无返回值)
 */

/* 普通函数 for_each算法的遍历规则函数 */
template<class T>
void foreachFunc(T t){
    cout << t << " ";
}

/* 函数对象 for_each算法的遍历规则函数 */
template<class T>
class ForeachFuncObject{
public:
    void operator()(T t){
        cout << t << " ";
    }
};

int main() {
    vector<int> vec;
    insertIntDataToVector(vec);
    cout << "use normal func foreach vector\t: ";

    /* 1-1 for_each遍历容器-使用普通函数定义遍历规则 */
    for_each(vec.begin(), vec.end(), foreachFunc<int>);
    cout << endl;


    cout << "use functor foreach vector\t: ";
    /* 1-1 for_each遍历容器-使用函数对象(伪函数)定义遍历规则 */
    ForeachFuncObject<int> foreachFuncObject;
    for_each(vec.begin(), vec.end(), foreachFuncObject);
    cout << endl;

    return 0;
}
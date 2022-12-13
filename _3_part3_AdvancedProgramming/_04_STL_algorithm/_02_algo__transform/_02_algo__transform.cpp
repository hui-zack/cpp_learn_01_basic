// Create by hui on 2022/12/14 0:05
// Code describe: 
// Keyword      : 


#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include "../_00_util/containerUtil.cpp"

using namespace std;


/**
    void transform<iterator srcCon.beg, iterator srcCon.end, iterator dstCon.beg, funcObject)
        // -- 元素拷贝算法 --
        // srcCon.beg - 源容器beg
        // srcCon.end - 源容器end
        // dstCon.beg - 目标容器beg
        // funcObject - 函数对象(仿函数, 一元谓词返回元素修改值)
 */

class TransformFunctor{
public:
    int operator()(int val){
        return val + 1;
    }
};

int main() {
    vector<int> vec;                           // 源容器
    insertIntDataToVector(vec);
    vector<int> dstVec;                      // 目标容器

    /* 2-1 使用transform 拷贝vector元素到新vector */
    dstVec.resize(vec.size());                      /** 使用transform时必须resize输出容器的size */
    transform(vec.begin(), vec.end(), dstVec.begin(), TransformFunctor());

    printVector("srcVec", vec);
    printVector("dstVec", dstVec);

    /** ---- */

    list<int> lst;
    insertDataToIntList(lst);
    list<int> dstList;

    /* 2-2 使用transform拷贝list元素到新list */
    dstList.resize(lst.size());                     /** 使用transform时必须resize输出容器的size */
    transform(lst.begin(), lst.end(), dstList.begin(), TransformFunctor());

    printList("srcList", lst);
    printList("dstList", dstList);

    return 0;
}
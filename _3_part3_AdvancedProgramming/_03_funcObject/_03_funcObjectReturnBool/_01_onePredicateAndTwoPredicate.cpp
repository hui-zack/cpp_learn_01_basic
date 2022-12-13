// Create by hui on 2022/12/13 21:26
// Code describe: 一元谓词和二元谓词
// Keyword      : 


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


/**
    函数对象返回bool类型称为谓词
        如果仿函数有一个参数, 叫做一元谓词
        如果仿函数有两个参数, 叫做二元谓词
 */

class BiggerFive{
public:
    /* 3-1-1 编写一元谓词, 函数对象(仿函数)只有一个参数, 用于algo find_if算法 */
    bool operator()(int val){
        return val > 5;
    }
};

class sortVector{
public:
    /* 3-2-1 编写二元谓词, 函数对象(仿函数)有两个参数, 用于algo sort算法 */
    bool operator()(int val1, int val2){
        return val1 > val2;                     // 从大到小排
    }
};


int main() {

    vector<int> vec;
    vec.push_back(1);
    vec.push_back(5);
    vec.push_back(3);
    vec.push_back(9);
    vec.push_back(7);


    /* 3-1-2 使用algo find_if算法查询第一个>5的数字迭代器位置 */
    const vector<int>::iterator &it = find_if(vec.begin(), vec.end(), BiggerFive());
    if (it != vec.end()){
        cout << "find > 5 num = " << *(it) << endl;
    } else{
        cout << "don't find num where num > 5 in vec" << endl;
    }



    /* 3-2-2 使用algo sort算法对vector进行从大到小排序 */
    sort(vec.begin(), vec.end(), sortVector());

    for(int val: vec){
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}
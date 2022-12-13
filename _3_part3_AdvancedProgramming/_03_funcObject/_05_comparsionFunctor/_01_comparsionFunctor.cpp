// Create by hui on 2022/12/13 22:44
// Code describe: 比较仿函数
// Keyword      : 

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
    template<class T> bool equal_to<T>(){}                  // =的关系仿函数
    template<class T> bool not_equal_to<T>(){}              // !=的关系仿函数
    template<class T> bool greater<T>(){}                   // >的关系仿函数
    template<class T> bool greater_equal<T>(){}             // >=的关系仿函数
    template<class T> bool less<T>(){}                      // <的关系仿函数
    template<class T> bool less_equal<T>(){}                // <=的关系仿函数
 */
int main() {
    /* 5-1-1 使用=的关系仿函数 */
    equal_to<> equalTo;
    cout << "2 = 1\t ? " << equalTo(2, 1) << endl;

    /* 5-1-2 使用!=的关系仿函数 */
    not_equal_to<> notEqualTo;
    cout << "2 != 1\t ? " << notEqualTo(2, 1) << endl;

    /* 5-1-3 使用>的关系仿函数 */
    greater<> greater;
    cout << "2 > 1\t ? " << greater(2, 1) << endl;

    /* 5-1-4 使用>=的关系仿函数 */
    greater_equal<> greaterEqual;
    cout << "2 >= 1\t ? " << greaterEqual(2, 1) << endl;

    /* 5-1-5 使用<的关系仿函数 */
    less<> les;
    cout << "2 < 1\t ? " << les(2, 1) << endl;

    /* 5-1-6 使用<=的关系仿函数 */
    less_equal<> lessEqual;
    cout << "2 <= 1\t ? " <<lessEqual(2, 1) << endl;




    vector<int> vec;
    vec.push_back(1);
    vec.push_back(5);
    vec.push_back(3);
    vec.push_back(9);
    vec.push_back(7);

    /* 5-2-1 sort算法使用内建仿函数greater对vector排序 */
    sort(vec.begin(), vec.end(), greaterEqual);

    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;



    return 0;
}
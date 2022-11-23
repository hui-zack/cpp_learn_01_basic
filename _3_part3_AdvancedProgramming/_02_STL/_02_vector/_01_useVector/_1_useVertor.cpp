// Create by hui on 2022/11/22 23:40
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
/* 1-1-1 声明vector头文件 */
#include <vector>
#include <algorithm>
using namespace std;

void myPrint(int val){
    cout << val << endl;
}

int main() {
    /* 1-1-2 创建vector容器时指定元素类型 */
    vector<int> vec;

    /* 1-2-1 vector尾插法 */
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

    /* 1-2-2 vector尾删法 */
    vec.pop_back();

    /* 1-3-1 vec.begin()返回第一个元素的指针 */
    vector<int>::iterator itBegin = vec.begin();
    /* 1-3-2 vec.end()返回最后一个元素下一个位置的指针 */
    vector<int>::iterator itEnd = vec.end();



    /* 1-5-1 增强for循环遍历 */
    cout << "增强for循环遍历: " << endl;
    for(int & it : vec){
        cout << it << endl;
    }

    /* 1-5-2 普通for循环遍历 */
    cout << "普通for循环遍历: " << endl;
    for(auto it = vec.begin(); it != vec.end(); it ++){
        cout << *it << endl;
    }

    /* 1-5-3 while循环遍历 */
    cout << "while 遍历: " << endl;
    auto it = vec.begin();
    while(it != vec.end()){
        cout << *it << endl;
        it ++;
    }

    /* 1-5-4 for_each遍历, 需要声明算法头文件, 自定义元素操作函数 */
    cout << "for_each()遍历" << endl;
    for_each(vec.begin(), vec.end(), myPrint);


    return 0;
}
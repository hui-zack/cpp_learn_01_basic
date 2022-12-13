// Create by hui on 2022/11/25 21:25
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <vector>

using namespace std;


template <class T>
void printVector(const vector<T> & vector){
    cout << "vector: ";
    for(T t: vector){
        cout << t << " ";
    }
    cout << endl;
}


void insertIntDataToVector(vector<int>& vec){

    for (int i = 0; i < 10; i++){
        vec.push_back((i + 1)* 10);
    }
}

/**
    at(int index);                  返回下标index处的元素
    operator[index];                返回下标index处的元素
    front();                        返回第一个元素
    back();                         返回最后一个元素
 */

int main() {
    vector<int> vec;
    insertIntDataToVector(vec);
    
    /* 5-1 返回下标index处的元素 */
    int &ele1 = vec.at(0);
    cout << ele1 << endl;
    
    /* 5-2 返回下标index处的元素 */
    int &ele2 = vec[0];
    cout << ele2 << endl;
    
    /* 5-3 返回第一个元素 */
    int &firstEle = vec.front();
    cout << firstEle << endl;
    
    /* 5-4 返回最后一个元素 */
    int &lastEle = vec.back();
    cout << lastEle << endl;
    
    return 0;
}
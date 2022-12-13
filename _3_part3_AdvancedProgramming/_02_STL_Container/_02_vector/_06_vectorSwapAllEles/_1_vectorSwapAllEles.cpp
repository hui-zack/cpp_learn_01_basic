// Create by hui on 2022/11/25 21:33
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

template<class T>
void swap(vector<T>& vec1, vector<T>& vec2){
    vector<T> tmpVec;
    tmpVec = vec1;
    vec1 = vec2;
    vec2 = tmpVec;
}


void insertIntDataToVector1(vector<int>& vec){

    for (int i = 0; i < 10; i++){
        vec.push_back((i + 1)* 10);
    }
}

void insertIntDataToVector2(vector<int>& vec){

    for (int i = 10; i > 0; i--){
        vec.push_back(i* 10);
    }
}


int main() {
    vector<int> vec1;
    vector<int> vec2;
    insertIntDataToVector1(vec1);
    insertIntDataToVector2(vec2);

    cout << "交换前: " << endl;
    printVector(vec1);
    printVector(vec2);
    /* 6-1 使用swap()交换元素 */
    vec1.swap(vec2);
    cout << "交换后: " << endl;
    printVector(vec1);
    printVector(vec2);


    return 0;
}
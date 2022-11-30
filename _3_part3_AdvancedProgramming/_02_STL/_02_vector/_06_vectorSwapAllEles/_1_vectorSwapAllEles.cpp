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
    /* 1-1 使用swap()交换元素 */
    vec1.swap(vec2);
    cout << "交换后: " << endl;
    printVector(vec1);
    printVector(vec2);
//-----------------------------------------------------------

    /* 1-2 通过匿名对象+swap()来清除vec的无效容量 */

    vector<int> vec;
    vec.reserve(10000);
    for (int i = 0; i < 10000; i++){
        vec.push_back(i);
    }
    vec.resize(3);
    cout << "vec size = " << vec.size() << endl;
    cout << "vec capacity = " << vec.capacity() << endl;


    return 0;
}
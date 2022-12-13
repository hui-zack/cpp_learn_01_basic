// Create by hui on 2021/12/14 17:03
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <vector>

using namespace std;

template<class T>
void printVector(vector<T>& vec){
    for (T t: vec){
        cout << t << endl;
    }
}

template<class T>
void swap(vector<T>& vec1, vector<T>& vec2){
    vector<T> tmpVec;
    tmpVec = vec1;
    vec1 = vec2;
    vec2 = tmpVec;
}


class Camera{
public:
    int id = -1;
    string name;
};


int main() {
//    Camera camera = Camera();
//    cout << typeid(camera).name() << endl;
//
//    char* s = "12\0a3";
//
//    cout << s << endl;
    vector<int> vec1;
    vec1.push_back(11);

    vector<int> vec2;
    vec2.push_back(22);
    swap(vec1, vec2);
    cout << "result" << endl;
    printVector(vec1);


}
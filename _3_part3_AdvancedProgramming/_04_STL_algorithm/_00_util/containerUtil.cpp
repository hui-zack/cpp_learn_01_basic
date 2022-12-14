// Create by hui on 2022/12/14 0:53
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;
/* vector util */
template <class T>
void printVector(const vector<T> & vec){
    for(T t: vec){
        cout << t << " ";
    }
    cout << endl;
}

template <class T>
void printVector(const string& name, const vector<T> & vec){
    cout << name << "\t: ";
    for(T t: vec){
        cout << t << " ";
    }
    cout << endl;
}

void insertIntDataToVector(vector<int>& vec, int offset = 0){
    for (int i = 0; i < 10; i++){
        vec.push_back((i + 1)* 10 + offset);
    }
}


/* list util */

template<class T>
void printList(list<T> & lst){
    for (T t : lst){
        cout << t << " ";
    }
}

template<class T>
void printList(const string& listName, list<T> & lst){
    cout << listName << ": ";
    for (T t : lst){
        cout << t << " ";
    }
    cout << endl;
}

void insertIntDataToList(list<int> & lst){
    for (int i = 0; i < 10; i++){
        lst.push_back((i+1) * 10);
    }
}

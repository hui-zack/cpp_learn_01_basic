// Create by hui on 2022/12/12 17:29
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

template<class T>
void printSet(set<T> st){
    for(const T &t : st){
        cout << t << " ";
    }
    cout << endl;
}

template<class T>
void printSet(const string& setName, set<T> st){
    cout << setName << "\t: ";
    for(const T &t : st){
        cout << t << " ";
    }
    cout << endl;
}

void insertDataToIntSet(set<int>& st){
    for (int i = 5; i > 0; i--){
        st.insert((i) * 10);
    }
}


void foreachSetFunc(int t){
    cout << t << " ";
}



int main() {
    set<int> intSet;
    insertDataToIntSet(intSet);

    /* 9-1 增强for循环遍历set */
    for(auto ele: intSet){
        cout << ele << " ";
    }
    cout << endl;

    /* 9-2 普通for循环遍历set */
    for(set<int>::iterator it = intSet.begin(); it != intSet.end(); it ++){
        cout << *(it) << " ";
    }
    cout << endl;

    /* 9-3 while循环遍历set */
    set<int>::iterator it = intSet.begin();
    while(it != intSet.end()){
        cout << *it << " ";
        it ++;
    }
    cout << endl;

    /* 9-4 使用for_each(beg, end, operaFunc)遍历set, 自定义操作函数foreachSetFunc */
    for_each(intSet.begin(), intSet.end(), foreachSetFunc);
    cout << endl;



    return 0;
}
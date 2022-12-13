// Create by hui on 2022/12/12 14:26
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <set>

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

/**
    size();                 // 获取set中元素的数量
    empty();                // 判断容器是否为空
 */

int main() {
    set<int> st;
    insertDataToIntSet(st);
    /* 4-1 获取set中元素的数量 */
    cout << "set is empty ? : " << st.empty() << endl;

    /* 4-2 判断容器是否为空 */
    cout << "set's length   = " << st.size() << endl;

    return 0;
}
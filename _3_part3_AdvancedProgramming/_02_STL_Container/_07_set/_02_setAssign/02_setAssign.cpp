// Create by hui on 2022/12/12 14:13
// Code describe: set的整体赋值
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
    for (int i = 10; i > 0; i--){
        st.insert((i) * 10);
    }
}

/**
  set没有assign方法, 整体赋值只能通过=
 */

int main() {
    set<int> st;
    insertDataToIntSet(st);


    set<int> st2;
    /* 2-1 使用=对set整体赋值 */
    st2 = st;

    printSet(st2);

    return 0;
}
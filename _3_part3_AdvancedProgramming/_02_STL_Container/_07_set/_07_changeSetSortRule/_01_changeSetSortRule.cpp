// Create by hui on 2022/12/12 19:53
// Code describe: 修改set的排序规则
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

template<class T1, class T2>
void printSet(const string& setName, set<T1, T2> st){
    cout << setName << "\t: ";
    for(const T1 &t : st){
        cout << t << " ";
    }
    cout << endl;
}


/* 7-1 编写仿函数设置set的排序规则 */
class MyCompare
{
public:
    bool operator()(int value1, int value2){
        return value1 > value2;
    }
};

int main() {
    /* 7-2 使用仿函数创建set, 修改其排序规则 */
    set<int, MyCompare> st;
    st.insert(10);
    st.insert(50);
    st.insert(40);
    st.insert(20);
    st.insert(30);

    printSet("st", st);
    return 0;
}
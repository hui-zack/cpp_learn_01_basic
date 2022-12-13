// Create by hui on 2022/12/12 13:40
// Code describe: set的构造方法
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
    set<T> st;              // 使用无参构造创建set对象
    set(const set &st);     // 使用拷贝构造创建set对象
 * */
int main() {
    /* 1-1 使用无参构造创建set对象 */
    set<int> st;
    insertDataToIntSet(st);
    printSet("st", st);

    /* 1-2 使用拷贝构造创建set对象 */
    set<int> copySet(st);
    printSet("copySet", copySet);


    return 0;
}
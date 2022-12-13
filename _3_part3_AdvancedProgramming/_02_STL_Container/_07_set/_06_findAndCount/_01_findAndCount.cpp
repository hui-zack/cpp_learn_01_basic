// Create by hui on 2022/12/12 15:58
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
    set<T>::iterator find(T t)                      // 判断t是否存在, 若存在, 返回该元素的迭代器, 若不存在, 返回set.end()
    int count(T t)                                  // 统计t的元素个数
 */
int main() {
    set<int> st;
    insertDataToIntSet(st);
    /* 6-1 判断t是否存在, 若存在, 返回该元素的迭代器, 若不存在, 返回set.end() */
    const set<int>::iterator &it40 = st.find(40);
    cout << "find 40 in set   : " << *(it40) << endl;


    /* 6-2 统计t的元素个数 */
    int count40 = st.count(40);
    cout << "40 ele count num = " << count40 << endl;

    return 0;
}
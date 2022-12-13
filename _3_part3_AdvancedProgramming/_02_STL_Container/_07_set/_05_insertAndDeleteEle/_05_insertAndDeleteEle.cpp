// Create by hui on 2022/12/12 15:27
// Code describe: 插入和删除元素
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
    插入元素:
        insert(T ele);                                              // 往set中插入元素

    删除元素:
        erase(T ele)                                                // 删除值为ele的元素
        erase(pos);                                                 // 删除迭代器pos位置的元素, 返回下一个元素的迭代器
        erase(auto selfSt.begin(); auto selfSt.end());              // 清除迭代器[begin, end)位置的元素, 无返回值
        clear();                                                    // 删除所有元素
 */
int main() {

    set<int> st;
    insertDataToIntSet(st);
    /* 5-1-1 在set中插入元素,  往set中插入元素, 返回一个对组(multiset无返回值) */
    const pair<set<int>::iterator, bool> &result = st.insert(10086);
    cout << "insert 10086 to set, result : "<< result.second << endl;
    /* 5-2-1 删除值为10086的元素 */
    st.erase(10086);

    /* 5-2-2 删除迭代器pos位置的元素, 返回下一个元素的迭代器 */
    st.erase(st.begin());

    /* 5-2-3 清除迭代器[begin, end)位置的元素, 无返回值 */
    st.erase(st.begin(), st.end());
    insertDataToIntSet(st);

    /* 5-2-4 删除所有元素 */
    st.clear();


    return 0;
}
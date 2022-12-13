// Create by hui on 2022/12/12 14:19
// Code describe: set容器之间的元素交换
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


int main() {
    set<string> st1;
    set<string> st2;

    st1.insert("this is st1");
    st2.insert("this is st2");
    /* 3-1 使用set的swap方法交换两个set的所有元素 */
    st1.swap(st2);

    printSet("st1", st1);
    printSet("st2", st2);



    return 0;
}
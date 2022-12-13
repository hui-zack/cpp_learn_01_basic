// Create by hui on 2022/12/12 22:39
// Code describe: map的整体赋值操作
// Keyword      :

#include <iostream>
#include <string>
#include <map>
using namespace std;

template<class T1, class T2>
void printMap(const map<T1, T2> & mp){
    for (pair<T1, T2> key: mp){
        cout << key.first << "=" << key.second << " ";
    }
    cout << endl;
}

template<class T1, class T2>
void printMap(const string& mapName, const map<T1, T2> & mp){
    cout << mapName << "\t: ";
    for (pair<T1, T2> key: mp){
        cout << key.first << "=" << key.second << " ";
    }
    cout << endl;
}

void insertDateToStringIntMap(map<string, int> & mp){
    mp.insert(make_pair("中国移动", 10086));
    mp.insert(make_pair("中国联通", 10010));
    mp.insert(pair<string, int>("中国电信", 10000));
    mp.insert(pair<string, int>("中国铁路", 12306));
}

/**
    map& operator=(const map& mp);                  // 使用=将mp的元素赋值给新map对象
 */
int main() {
    map<string, int> mp;
    insertDateToStringIntMap(mp);


    map<string, int> assignMap;
    /* 2-1 使用=将map1的所有元素赋值给新map对象 */
    assignMap = mp;

    printMap("assign", assignMap);

    return 0;
}
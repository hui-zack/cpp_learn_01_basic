// Create by hui on 2022/12/12 22:45
// Code describe: 
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
    empty();                                        // 判断map是否为空
    size();                                         // 获取map中元素的数量
 */
int main() {
    map<string, int> mp;
    insertDateToStringIntMap(mp);

    /* 4-1 判断map是否为空 */
    cout << "map is empty ? " << mp.empty() << endl;

    /* 4-2 获取map中元素的数量 */
    cout << "map length   = " << mp.size() << endl;

    return 0;
}
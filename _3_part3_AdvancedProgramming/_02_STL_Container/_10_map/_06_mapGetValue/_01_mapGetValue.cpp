// Create by hui on 2022/12/13 0:28
// Code describe: 根据key获取value
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
    map[key]              // 使用map[key]获取对应的value
 */
int main() {
    map<string, int> mp;
    insertDateToStringIntMap(mp);

    /* 6-1 使用map[key]获取对应的value */
    int value = mp["中国移动"];
    cout << "中国移动=" << value << endl;

    return 0;
}
// Create by hui on 2022/12/12 22:15
// Code describe: 创建map容器(map的构造方法)
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
    map(keyT, valueT) mp;                 // 使用无参构造创建map容器
    map(const map& mp);                         // 使用拷贝构造创建map容器
 */

int main() {
    /* 1-1 使用无参构造创建map容器 */
    map<string, int> mp;
    insertDateToStringIntMap(mp);

    /* 1-2 使用拷贝构造创建map容器 */
    map<string, int> copyMap(mp);

    printMap("copyMap", copyMap);

    return 0;
}
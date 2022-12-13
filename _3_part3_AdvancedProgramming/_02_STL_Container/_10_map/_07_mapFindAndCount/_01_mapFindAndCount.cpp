// Create by hui on 2022/12/13 13:52
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
    map<keyT,valueT>::iterator find(keyT key);              // 查找key是否存在, 若存在, 返回该键的迭代器, 若不存在, 返回set.end();
    int cout(keyT key);                                     // 统计key的元素个数
 */

int main() {
    map<string, int> mp;
    insertDateToStringIntMap(mp);
    string lianTon = "中国联通";
    /* 7-1 查找key是否存在, 若存在, 返回该键的迭代器, 若不存在, 返回set.end() */
    const map<string, int>::iterator& lianTonIt = mp.find(lianTon);
    if (lianTonIt != mp.end()){
        cout << lianTon << "=" << (*lianTonIt).second << endl;
    } else{
        cout << "don't find value in key = " << lianTon << endl;
    }
    /* 7-2 统计key的元素个数 */
    int count = mp.count(lianTon);
    cout << lianTon << "'s num = " << count << endl;

    return 0;
}
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
    swap(map<keyT, valueT> mp);             // 使用map的swap方法交换两个map的所有元素
 */
int main() {
    map<string, int> map1;
    map1.insert(make_pair("map1", 100));
    map<string, int> map2;
    map2.insert(make_pair("map2", 200));

    /* 3-1 使用map的swap方法交换两个map的所有元素 */
    map1.swap(map2);

    printMap("map1", map1);
    printMap("map2", map2);


    return 0;
}
// Create by hui on 2022/12/13 14:08
// Code describe: 修改map的排序规则
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
template<class T1, class T2, class T3>
void printMap(const string& mapName, const map<T1, T2, T3> & mp){
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

template<class T>
void insertDateToStringIntMap(map<string, int, T> & mp){
    mp.insert(make_pair("中国移动", 10086));
    mp.insert(make_pair("中国联通", 10010));
    mp.insert(pair<string, int>("中国电信", 10000));
    mp.insert(pair<string, int>("中国铁路", 12306));
}

/* 8-1 编写仿函数修改map的排序规则 */
class MyCompare
{
public:
    bool operator()(const string& value1, const string& value2){
        return value1 > value2;
    }
};

int main() {
    map<string, int> map1;
    insertDateToStringIntMap(map1);
    printMap("default sort map", map1);

    /* 8-2 使用仿函数创建map, 修改其排序规则 */
    map<string, int, MyCompare> map2;
    insertDateToStringIntMap(map2);

    printMap("MyCompare sort map", map2);



    return 0;
}
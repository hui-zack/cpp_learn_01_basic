// Create by hui on 2022/12/13 14:46
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

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

void foreachMapFunc(const pair<string, int> & par){
    cout << par.first << "=" << par.second << " ";
}


int main() {
    map<string, int> mp;
    insertDateToStringIntMap(mp);
    /* 10-1 使用增强for循环遍历map */
    for(pair<string, int> ele: mp){
        cout << ele.first << "=" << ele.second << " ";
    }
    cout << endl;
    
    /* 10-2 使用普通for循环遍历map */
    for (map<string, int>::iterator it = mp.begin(); it != mp.end(); it ++){
        cout << (*it).first << "=" << (*it).second << " ";
    }
    cout << endl;

    /* 10-3 使用while循环遍历map */
    map<string, int>::iterator it = mp.begin();
    while (it != mp.end()){
        cout << (*it).first << "=" << (*it).second << " ";
        it++;
    }
    cout << endl;

    /* 10-4 使用algo的for_each算法遍历map, 自定义操作函数foreachMapFunc */
    for_each(mp.begin(), mp.end(), foreachMapFunc);
    cout << endl;

    return 0;
}
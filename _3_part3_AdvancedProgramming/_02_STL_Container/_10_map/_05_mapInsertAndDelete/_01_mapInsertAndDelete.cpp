// Create by hui on 2022/12/12 23:00
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
    插入元素
        insert(make_pair(key, value))                       // 使用make_pair自动创建pair对象向map插入元素
        insert(pair<keyT, valueT>(key, value))              // 创建pair匿名对象向map插入元素
        insert(map<keyT, valueT>::value_type(key, value))   // 使用map的静态方法value_type插入元素(该方法指定自动创建pair)
    删除元素
        erase(keyT key);                                    // 根据key值删除元素
        erase(auto pos);                                    // 删除迭代器pos位置元素, 返回下一个元素的迭代器
        erase(auto selfMap.begin(), auto selfMap.end());    // 删除[beg, end)区间的元素
        clear();                                            // 删除所有元素
 */

int main() {

    map<string, int> mp;
    insertDateToStringIntMap(mp);
    /* 5-1-1 使用make_pair自动创建pair对象向map插入元素 */
    mp.insert(pair<string, int>("中国", 86));

    /* 5-1-2 创建pair匿名对象向map插入元素 */
    mp.insert(make_pair("日本", 87));

    /* 5-1-3 使用map的静态方法value_type插入元素(该方法指定自动创建pair) */
    mp.insert(map<string, int>::value_type("韩国", 85));

    printMap("init mp\t", mp);

    /* 5-2-1 根据key值删除元素 */
    mp.erase("日本");
    printMap("del japan byKey", mp);

    /* 5-2-2 根据key值删除元素 */
    mp.erase(mp.begin());
    printMap("del byIterator", mp);

    /* 5-2-3 根据迭代器区间删除元素 */
    mp.erase(++mp.begin(), mp.end());
    printMap("del bySection", mp);
    /* 5-2-4 删除所有元素 */
    mp.clear();
    printMap("after clear", mp);
    return 0;
}
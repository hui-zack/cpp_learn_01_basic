// Create by hui on 2022/12/14 14:30
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>
#include <algorithm>
#include "../_00_util/containerUtil.cpp"

using namespace std;
/**
    iterator find_if(iterator beg, iterator end, _pred);
        // -- 条件查找元素算法, 找到返回元素迭代器位置, 找不到返回迭代器end位置, 找到一个就停止 --
        // iterator beg     开始查找位置
        // iterator end     结束查找位置
        // _pred            返回bool类型的函数对象(仿函数/谓词)
 */


class Person{
public:
    string _name;
    int _age;
    Person(string name, int age): _name(move(name)), _age(age){};
};

class FindIfIntFunctor{
public:
    bool operator()(int ele){
        return ele > 5;
    }
};

class FindIfPersonFunctor{
public:
    bool operator()(const Person& person){
        return person._name == "犬夜叉";
    }
};
int main() {
    vector<int> vec;
    insertIntDataToVector(vec);

    /* 4-1 使用find_if查找vector<int>中的元素元素 */
    const vector<int>::iterator& it = find_if(vec.begin(), vec.end(), FindIfIntFunctor());
    if (it != vec.end()){
        cout << "find ele > 5, start ele = " << *it << endl;
    }


    vector<Person> personVec;
    Person person1("犬夜叉", 18);
    Person person2("戈薇", 15);
    Person person3("七宝", 9);
    personVec.push_back(person1);
    personVec.push_back(person2);
    personVec.push_back(person3);

    /* 4-2 使用find_if查找vector<Person>中的元素 */
    const vector<Person>::iterator personIt = find_if(personVec.begin(), personVec.end(), FindIfPersonFunctor());
    if (personIt != personVec.end()){
        cout << "find person, name = " << (*personIt)._name << ", age = "<< (*personIt)._age << endl;
    }

    return 0;
}
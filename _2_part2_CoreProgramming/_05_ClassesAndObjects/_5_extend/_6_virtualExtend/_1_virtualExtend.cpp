// Create by hui on 2022/11/14 14:40
// Code describe: YangTuo继承自Yang和Tuo类, Yang和Tuo类都继承了Animal类, 构成了菱形继承
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;

class Animal{
public:
    string name;
};

/* 菱形继承的两个父类使用虚继承, 保证Animal的资源只有一个 */
class Yang:virtual public Animal{
public:
};

class Tuo:virtual public Animal{
public:
};

class YangTuo: public Yang, public Tuo{
public:
    string name;
};


int main() {
    YangTuo yangTuo = YangTuo();

    yangTuo.Yang::name = "yang";
    yangTuo.Tuo::name = "tuo";


    cout << yangTuo.Yang::name << endl;
    cout << yangTuo.Tuo::name << endl;

    /* 6-1  */


    /* 6-2 */


    return 0;
}
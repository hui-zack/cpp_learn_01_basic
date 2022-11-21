// Create by hui on 2022/6/16 10:16
// Code describe: 
// Keyword      : 

#include <iostream>

using namespace std;

class House;



class Me{

public:
    void invokeHousePrivateVar(const House& house);

};


class House{
    /* 3-1 声明类外成员函数为友元 */
    friend void Me::invokeHousePrivateVar(const House& house);
private:
    string privateVar = "default";
};

/** Me类成员方法的类外实现 */
void Me::invokeHousePrivateVar(const House& house){
    /* 3-2 被声明为友元的类外成员函数访问其私有变量 */
    cout << house.privateVar << endl;
}


int main() {
    Me me = Me();
    me.invokeHousePrivateVar(House());

    return 0;
}
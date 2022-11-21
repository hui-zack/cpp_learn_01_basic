// Create by hui on 2022/11/6 0:35
// Code describe: 
// Keyword      : 

#include <iostream>
#include <utility>

using namespace std;

/* 4-3 推荐基类尽量为无参+get+set形式, 这样可降低主调用类使用传统方式初始化基类的性能消耗 */
class Phone{    /** 基类 */
private:
    string name;
public:
    Phone() {
    }
    string getName(){
        return name;
    }
    void setName(string name){
        this->name = move(name);
    }
};

class Person{   /** 主调用类 */
private:
    string m_name;
    Phone m_phone;

public:
    Person(string name, string phoneName, const char string1[2]) {
        this->m_name = move(name);
        m_phone.setName(move(phoneName));
    }
};

int main() {
    Person person = Person("hui", "mi", nullptr);
    return 0;

}
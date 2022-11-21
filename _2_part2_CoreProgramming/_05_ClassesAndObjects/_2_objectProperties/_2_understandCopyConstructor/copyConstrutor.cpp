// Create by hui on 2022/5/26 16:11
// Code describe: 拷贝构造在值传递函数中的自动调用
// Keyword      :

#include <iostream>

using namespace std;

class Person{

private:
    int port = 10086;

public:

    Person() {
        cout << "[Person] NoParam Constructor init, addr = " << (long long) this << endl;
    }

    Person(const int& age) {
        cout << "[Person] HaveParam Constructor init, addr = " << (long long) this << endl;
        this->port = age;
    }

    Person(const Person &p) {
        this->port = p.port;

        cout << "[Person] Copy Constructor init, addr = " << (long long) this << endl;
    }

    ~Person() {
        cout << "[Person] destructor object, addr = " << (long long) this << endl;
    }

    int getPort() {
        return this->port;
    }

};


void personAsFuncValueParam(Person person){
    cout << "[testFunc] the person object addr = " <<(long long) &person << endl;
}

Person personAsFuncReturnObject() {
    Person person = Person();

    return person;
}

/** 本函数用于判断栈区的person对象作为函数返回值时, person对象的外部使用情况对原person对象内存释放的影响 */
void test(){
    Person person = personAsFuncReturnObject();
    cout << "[test] the receive person object addr = " << (long long) & person << endl;
}


int main() {
    /* 2-1 person对象作为值传递实参时, 系统使用person的拷贝构造创建新person对象, 传入的是实参副本 */
//    Person person = Person();
//    personAsFuncValueParam(person);
//
//    cout << "\n" << endl;

    /* 2-2 函数局部对象person作为值传递返回类型, 新版编译器会返回person的引用, 外部有使用扩展作用域, 无食用释放该对象内存 */
    Person person1 = personAsFuncReturnObject();
    cout << "[main] receive person object addr = " <<(long long) &person1 << ", port = " << person1.getPort() << endl;
    cout << "[main] receive person object addr = " <<(long long) &person1 << ", port = " <<person1.getPort() << endl;

    cout << 123 << endl;

    return 0;
}


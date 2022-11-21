// Create by hui on 2021/12/29 14:40
// Code describe: 构造函数和析构函数(对象的初始化和清理)
// Keyword      : 

#include <iostream>

using namespace std;


class Person {

private:
    int port = 10086;

public:
    /* 1-1-1 编写无参构造 */
    Person() {
        cout << "[Person] NoParam Constructor init, addr = " << (long long) this << endl;
    }

    /* 1-1-2 编写有参构造 */
    Person(int age) {
        cout << "[Person] HaveParam Constructor init, addr = " << (long long) this << endl;
        this->port = age;
    }

    /* 1-1-3 编写拷贝构造函数, 形参为相同类型的常引用 */
    Person(const Person &p) {
        this->port = p.port;
        cout << "[Person] Copy Constructor init, addr = " << (long long) this << endl;
    }

    /* 1-1-4 编写析构函数(析构函数不能有参数) */
    ~Person() {
        cout << "[Person] destructor object, addr = " << (long long) this << endl;
    }

    int getPort() {
        return this->port;
    }

};


int main() {
    /* 1-2-1 显示法创建对象-栈中分配地址, 函数执行完则自动释放内存 */
    Person person = Person();               // 显示法有参: Person person = Person(10);

    /* 1-2-2 new创建对象-堆中分配地址, 程序员手动释放 */
    Person *pPerson = new Person();

    cout << person.getPort() << endl;
    cout << pPerson->getPort() << endl;

    delete pPerson;

    return 0;
}
/** 其他不常用的创建对象的方法 */
void testMethod() {
    /* 1-3-1 括号法创建对象 */
    Person p1{};                 // 无参构造创建, 栈中分配内存
    Person p2(10);          // 有参构造创建, 栈中分配内存
    Person p3(p2);               // 拷贝构造创建, 栈中分配内存

    /* 1-3-2 匿名法创建对象 */
    Person();                   // 匿名对象由于无法调用, 创建后编译器会立即释放该对象
                                // 不能使用拷贝构造函数初始化匿名对象, 编译器把 Person (p2)认为成Person p2这种括号法创建对象, 导致重定义
    /* 1-3-3 隐式转换法创建对象, 隐式转换法不能创建无参构造 */
    Person p4 = 10;             // 相当于Person p4 = Person(4);
    Person p5 = p4;             // 相当于Person p4 = Person(4);
}

// Create by hui on 2022/5/27 11:30
// Code describe: 深拷贝对象和浅拷贝对象
// Keyword      : 

#include <iostream>

using namespace std;

class Person{

private:
    int port = 10086;
    /** 指针型成员属性 */
    int* height;
public:

    Person() {
        cout << "[Person] NoParam Constructor init, addr = " << (long long) this << endl;
    }

    Person(int age, int* height) {
        cout << "[Person] HaveParam Constructor init, addr = " << (long long) this << endl;
        this->port = age;
        /** 有参构造函数中在堆区开辟新内存, 存储指针的携带值 */
        this->height = new int(*height);
    }

    Person(const Person &p) {
        this->port = p.port;
        /* 3-1-1 浅拷贝: 编译器默认的构造函数用来复制指针, 会导致新对象的该指针属性与原对象指向相同 */
        // this->height = p.height;
        /* 3-2-1 深拷贝: 使用new堆区开辟新内存储存数据并返回新内存地址 */
        this->height = new int(*p.height);
        cout << "[Person] Copy Constructor init, addr = " << (long long) this << endl;
    }

    ~Person() {
        cout << "[Person] destructor object, addr = " << (long long) this << endl;
        /* 3-2-2 析构函数手动释放本地对象的堆区属性 */
        delete this->height;

    }

    int getPort() {
        return this->port;
    }

};


int main() {
    Person person = Person();

    return 0;
}


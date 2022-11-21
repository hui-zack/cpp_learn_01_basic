// Create by hui on 2022/5/27 11:30
// Code describe: ��������ǳ��������
// Keyword      : 

#include <iostream>

using namespace std;

class Person{

private:
    int port = 10086;
    /** ָ���ͳ�Ա���� */
    int* height;
public:

    Person() {
        cout << "[Person] NoParam Constructor init, addr = " << (long long) this << endl;
    }

    Person(int age, int* height) {
        cout << "[Person] HaveParam Constructor init, addr = " << (long long) this << endl;
        this->port = age;
        /** �вι��캯�����ڶ����������ڴ�, �洢ָ���Я��ֵ */
        this->height = new int(*height);
    }

    Person(const Person &p) {
        this->port = p.port;
        /* 3-1-1 ǳ����: ������Ĭ�ϵĹ��캯����������ָ��, �ᵼ���¶���ĸ�ָ��������ԭ����ָ����ͬ */
        // this->height = p.height;
        /* 3-2-1 ���: ʹ��new�����������ڴ洢�����ݲ��������ڴ��ַ */
        this->height = new int(*p.height);
        cout << "[Person] Copy Constructor init, addr = " << (long long) this << endl;
    }

    ~Person() {
        cout << "[Person] destructor object, addr = " << (long long) this << endl;
        /* 3-2-2 ���������ֶ��ͷű��ض���Ķ������� */
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


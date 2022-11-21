// Create by hui on 2022/11/6 19:42
// Code describe: 
// Keyword      :
class Person{

};
class Camera{
public:

    Camera() = default;
    Camera(int id){
        this->id = id;
    }

    int id;
};


int main() {
    /* 1-3-1-1 显示法创建对象-栈中分配地址, 函数执行完则自动释放内存 */
    Person person = Person();               // 显示法有参: Person person = Person(10);

    /* 1-3-1-2 new创建对象-堆中分配地址, 程序员手动释放 */
    auto *pPerson = new Person();
    delete pPerson;


    return 0;
}
/** 其他不常用的创建对象的方法 */
void testMethod() {
    /* 1-3-2-1 括号法创建对象 */
    Person p1{};                 // 无参构造创建, 栈中分配内存
    Person p2();


    /* 1-3-2-2 匿名法创建对象 */
    Person();                   // 匿名对象由于无法调用, 创建后编译器会立即释放该对象
    // 不能使用拷贝构造函数初始化匿名对象, 编译器把 Person (p2)认为成Person p2这种括号法创建对象, 导致重定义

    /* 1-3-2-3 隐式转换法创建对象, 隐式转换法不能创建无参构造 */
    Camera c1 = 10;             // 相当于Person p4 = Person(4);
    Camera c2 = c1;             // 相当于Person p4 = Person(4);
}

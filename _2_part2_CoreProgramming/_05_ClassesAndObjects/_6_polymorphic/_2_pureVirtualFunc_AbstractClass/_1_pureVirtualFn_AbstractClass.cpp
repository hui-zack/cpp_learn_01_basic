// Create by hui on 2022/11/15 23:30
// Code describe: 多态案例实现计算器(和普通写法实现计算器比较)
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;

/**
 * 多态的优点:
 *  代码组织结构清晰
 *  可读性强
 *  利于前期和后期的扩展以及维护
 * */




/* 2-1-2 定义抽象类, 定义了纯虚函数的类被编译器认为是是抽象类 */
class AbstractCalculator{
public:
    int numA;
    int numB;

    /* 2-2-2-1 定义纯虚成员函数把类将变成抽象类, 子类必须重写该函数 */
    virtual int getResult() = 0;            // 纯虚函数, 子类必须重写该方法

    /** 虚函数 不强制子类重写, 但子类重写后可以多态调用重写后的实现内容  */
    virtual void virtualFunc(){
        cout << "[AbstractCalculator] 虚函数 " << endl;
    }

    /** 实函数 不强制子类重写, 重写后无法多态调用重写后的实现内容 */
    void normalFunc(){
        cout << "[AbstractCalculator] 实函数 " << endl;
    }
    /* 3-1 编写默认的虚析构函数, 才能让父类被delete时, 能调到堆区子类对象的析构函数 */
    virtual ~AbstractCalculator()= default;

};

/* 2-2-1 多态扩展实现加法 */
class AddCalculator: public AbstractCalculator{
public:
    int getResult() override{
        return this->numA + this->numB;
    }

    ~AddCalculator(){
        cout << "[AddCalculator] destructor used " << endl;
    }
};

/* 2-2-2 多态扩展实现减法 */
class SubCalculator: public AbstractCalculator{
public:
    int * value;
    int getResult() override{
        return this->numA - this->numB;
    }

    ~SubCalculator(){
        cout << "[SubCalculator] destructor used " << endl;
    }

};

/** 传统写法实现计算器 */
class Calculator{
public:
    int numA;
    int numB;

    // 如果要扩展新的功能, 就要不断的修改源码
    // 而在真实开发中, 我们提倡开闭原则(对扩展进行开发, 对修改进行关闭)
    int getResult(const string& operaType){
        if (operaType == "+"){
            return numA + numB;
        } else if (operaType == "-"){
            return numA - numB;
        } else if (operaType == "*"){
            return numA * numB;
        } else if (operaType == "/"){
            return numA / numB;
        }

        return 0;
    }
};



int main() {
    /** 调用普通方式实现的计算器计算减法结果 */
    Calculator calculator = Calculator();
    calculator.numA = 80;
    calculator.numB = 20;
    cout << calculator.numA << " - " << calculator.numB << " = " << calculator.getResult("/") << endl;


    /* 2-3-1 多态方式调用扩展的减法功能-堆区new使用多态 */
    AbstractCalculator * subCalculator = new SubCalculator();
    subCalculator->numA = 10;
    subCalculator->numB = 5;
    cout << subCalculator->numA << " + " << subCalculator->numB << " = " << subCalculator->getResult() << endl;

    delete subCalculator;

    /* 2-3-2 多态方式调用扩展的减法功能-栈区引用使用多态 */
    SubCalculator subCalculatorObj1 = SubCalculator();
    AbstractCalculator& subCalculator1 = subCalculatorObj1;
    subCalculator1.numA = 20;
    subCalculator1.numB = 10;
    cout << subCalculator1.numA << " - " << subCalculator1.numB << " = " << subCalculator1.getResult() << endl;


    /* 2-3-3 多态方式调用扩展的减法功能-栈区指针使用多态 */
    SubCalculator subCalculatorObj2 = SubCalculator();
    AbstractCalculator* subCalculator2 = &subCalculatorObj2;
    subCalculator2->numA = 45;
    subCalculator2->numB = 19;
    cout << subCalculator2->numA << " - " << subCalculator2->numB << " = " << subCalculator2->getResult() << endl;


    /** 多态对象调用抽象基类的虚函数 */
    subCalculator2->virtualFunc();

    /** 多态对象调用抽象基类的实函数 */
    subCalculator2->normalFunc();

    return 0;
}
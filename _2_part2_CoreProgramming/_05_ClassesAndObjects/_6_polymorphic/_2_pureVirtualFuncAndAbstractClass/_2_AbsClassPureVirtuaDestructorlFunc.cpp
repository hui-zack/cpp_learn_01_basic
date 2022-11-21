// Create by hui on 2022/11/16 23:11
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;

class AbstractDrink {
public:
    /** 使用了纯虚函数, 该类是一个抽象类 */
    virtual void boil() = 0;                // 煮水
    virtual void PourInCup() = 0;           // 倒入杯中
    virtual void putSomeThing() = 0;        // 加入佐料
    virtual void brew() = 0;                // 冲泡

    void makeDrink() {
        cout << "---- 开始制作 ----" << endl;
        this->boil();
        this->PourInCup();
        this->putSomeThing();
        this->brew();
        cout << "---- 完成制作 ----" << endl;
    }
    /* 3-2-1 抽象类内编写纯虚析构 */
    virtual ~AbstractDrink() = 0;
};

/* 3-2-2 抽象类外进行实现, 哪怕是空实现 */
AbstractDrink::~AbstractDrink() {}

class Coffee : public AbstractDrink {
public:
    void boil() override {
        cout << "使用热水器烧水" << endl;
    }

    void PourInCup() override {
        cout << "把咖啡倒入杯子里" << endl;
    }

    void putSomeThing() override {
        cout << "加入牛奶和白糖" << endl;
    }

    void brew() override {
        cout << "使用热水冲泡咖啡" << endl;
    }

    ~Coffee() {
        cout << "[Coffee] destructor used" << endl;
    }
};

class MilkTea : public AbstractDrink {
public:
    void boil() override {
        cout << "使用热水器烧水" << endl;
    }

    void PourInCup() override {
        cout << "把茶叶倒入杯子里" << endl;
    }

    void putSomeThing() override {
        cout << "加入牛奶和白糖" << endl;
    }

    void brew() override {
        cout << "使用热水冲泡奶茶" << endl;
    }

    ~MilkTea() {
        cout << "[MilkTea] destructor used" << endl;
    }
};

void makeDrink(AbstractDrink &&abstractDrink) {
    abstractDrink.makeDrink();

}

void makeDrink(AbstractDrink &abstractDrink) {
    abstractDrink.makeDrink();
}

void makeDrink(AbstractDrink *abstractDrink) {
    abstractDrink->makeDrink();
    delete abstractDrink;
}

int main() {
    makeDrink(new MilkTea());

    cout << "\n---- 分割线 ----\n" << endl;

    makeDrink(Coffee());

    return 0;
}
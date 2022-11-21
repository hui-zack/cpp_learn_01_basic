// Create by hui on 2022/11/10 21:20
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>

using namespace std;

class Integer{
private:
    friend ostream& operator<<(ostream& cout, Integer& integer);
    friend ostream& operator<<(ostream& cout, Integer&& integer);
    int value;

public:
    Integer(){
        this->value = 0;
    }

    Integer(int num){
        this->value = num;
    }
    /* 1-1-1 类内重载前置递增运算符(形参为空则被编译器将其作为前置运算符) */
    Integer& operator++(){
        this->value += 1;
        return *this;
    }

    /* 1-2-1 类内重载后置递增运算符(形参不为空则被编译器将其作为后置运算符) */
    Integer operator ++(int){
        Integer tempInteger = *this;
        this->value ++;

        return tempInteger;
    }
    
    int getValue(){
        return this->value;
    }
};
/** 设置Integer的左移运算符 */
ostream& operator<<(ostream& cout, Integer& integer){
    cout << integer.value;
    return cout;
}
/** 由于后置递增返回了右值, 因此使用了右值引用形参来重载 */
ostream& operator<<(ostream& cout, Integer&& integer){
    cout << integer.value;
    return cout;
}

void test(Integer&& integer){
    cout << integer.getValue() << endl;
}

int main() {
    Integer integer = 10086;       // 隐式法创建对象

    /* 1-1-2 使用前置递增运算符 */
    cout << ++integer << endl;
    cout << integer << endl;

    auto &&integer1 = integer++;        //测似返回值为左值引用还是右值引用

    integer = 10086;
    /* 1-2-2 使用后置递增运算符 */
    cout << integer++ << endl;
    cout << integer << endl;
    return 0;
}
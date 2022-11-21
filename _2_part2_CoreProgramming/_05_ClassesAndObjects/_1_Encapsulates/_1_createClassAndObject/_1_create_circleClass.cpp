// Create by hui on 2021/12/27 13:42
// Code describe: 创建一个圆类
// Keyword      : 

#include <iostream>

using namespace std;

/* 1-1-1 简单封装圆类, 编写获取周长方法 */
class circle{
public:
    int m_r;

    double getRound(){
        return 2 * 3.1415926 * m_r;
    }
};


int main() {
    /* 1-1-2 实例化圆类对象 */
    circle c1{};
    c1.m_r = 10;
    cout << "周长: " << c1.getRound() << endl;

    return 0;
}
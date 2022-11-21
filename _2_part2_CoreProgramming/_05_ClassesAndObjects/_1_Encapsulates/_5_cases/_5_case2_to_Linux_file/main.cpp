// Create by hui on 2021/12/28 18:41
// Code describe: 
// Keyword      : 

#include <iostream>
//#include "lib/circle.h"
//#include "lib/point.h"
#include "lib\circle.cpp"
#include "lib\point.h"

using namespace std;
void isInCircle(circle &c, Point&p);


int main() {
    /* 圆的对象 */
    circle c1{};
    c1.setR(10);
    c1.getCenter().setX(0);
    c1.getCenter().setY(0);

    /* 点的对象 */
    Point p1{};
    p1.setX(5);
    p1.setY(6);

    isInCircle(c1, p1);


    return 0;
}

void isInCircle(circle &c, Point&p){
    // 计算两点之间距离平方
    int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
                   (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

    // 计算半径的平方
    int rDistance = c.getR() * c.getR();

    if (distance > rDistance){
        cout << "在圆外" << endl;
    } else if (distance == rDistance){
        cout << "在圆上" << endl;
    } else {
        cout << "在圆内" << endl;
    }
}



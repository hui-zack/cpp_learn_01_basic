// Create by hui on 2021/12/28 16:01
// Code describe:
// Keyword      :
/*
 * 点到圆心的距离:
 *  点到圆心的距离 == 半径       点在园上
 *  点到圆心的距离 > 半径        点在园外
 *  点到圆形的距离 < 半径        点在员外
 *  点到圆心的距离: (x1-x2)^2 + (y1 - y2)^2  r^2对比
 * */
#include <iostream>

using namespace std;


class Point{                /* 点类 */
private:
    int X;
    int Y;
public:
    /* X 获取和设置 */
    void setX(int x){
        X = x;
    }

    int getX(){
        return X;
    }
    /* Y 获取和设置 */
    void setY(int y){
        Y = y;
    }

    int getY(){
        return Y;
    }
};


class circle{               /* 圆类 */
private:
    int R;
    Point Center;
public:
    /* R 设置和获取 */
    void setR(int r){
        R = r;
    }

    int getR() const{
        return R;
    }

    /* 圆心获取 */
    Point getCenter(){
        return Center;
    }

};

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
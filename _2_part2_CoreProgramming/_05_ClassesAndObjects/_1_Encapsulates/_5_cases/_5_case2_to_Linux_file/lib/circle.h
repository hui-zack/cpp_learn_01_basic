//
// Created by admin on 2021/12/28.
//

#ifndef C___CIRCLE_H
#define C___CIRCLE_H



#include <iostream>
#include "point.h"


using namespace std;
/* 圆类 */
class circle{
private:
    int R;
    Point Center;
public:
    /* R 设置和获取 */
    void setR(int r);
    int getR() const;

    /* 圆心获取 */
    Point getCenter();
};
#endif //C___CIRCLE_H
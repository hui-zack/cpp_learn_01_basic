#include "circle.h"

/* R 设置和获取 */
void circle::setR(int r){
    R = r;
}

int circle::getR() const{
    return R;
}

/* 圆心获取 */
Point circle::getCenter(){
    return Center;
}

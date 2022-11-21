#include <iostream>

# include "point.h"

using namespace std;
class Point{                /* 点类 */
private:

    int X ;
    int Y;
    string name ;
public:

    /* X 获取和设置 */
    void setX(int x){
        this->X = x;
    };
    int getX(){
        return X;
    };

    int getY(){
        return this->Y;
    };
    void setY(int y){
        Y = y;
    };
};


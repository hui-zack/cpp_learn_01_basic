// Create by hui on 2021/12/28 13:02
// Code describe: 设计立方体类 (体积 = H * W * L)
// Keyword      : 
/*
 * 设计立方体类
 *  求立方体面积和体积的方法
 *  分别用全局函数(全局函数)和成员函数判断两个立方体是否相等
 * */
#include <iostream>

using namespace std;


class Cube {

public:

    void setL(int l) {
        L = l;
    }

    int getL() {
        return L;
    }

    void setW(int w) {
        W = w;
    }

    int getW() {
        return W;
    }

    void setH(int h) {
        H = h;
    }

    int getH() {
        return H;
    }


    int calculateS() {
        return 2 * L * W + 2 * W * H + 2 * H * L;
    }

    int calculateV(){
        return L * W * H;
    }

    bool isSameByCube(Cube cube){
        if (cube.getL() == this->getL() and cube.getW() == this->getW() and cube.getH() == this->getH() ){
            return true;
        } else{
            return false;
        }
    }


private:
    int L;          // 长
    int W;          // 宽
    int H;          // 高
};

/* --> 2[全局函数判断两个长方体是否相等] */

bool isSameTwoCube(Cube c1, Cube c2){
    if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()){
        return true;
    }
    return false;
}


int main() {
    /* --> 1[长方体类调用和测试] */
    Cube c1{};
    c1.setL(10);
    c1.setW(10);
    c1.setH(10);

    cout << "Cube class: 面积: " << c1.calculateS() << endl;
    cout << "Cube class: 体积: " << c1.calculateV() << endl;

    Cube c2{};
    c2.setL(10);
    c2.setW(10);
    c2.setH(11);

    /* --> 2[利用cube成员函数判断两个长方体是否相等] */
    bool sameResult = c1.isSameByCube(c2);
    bool sameResult1 = isSameTwoCube(c1, c2);
    cout << "Cube成员函数判断-两个立方体(Cube)是否相同: " << sameResult << endl;
    cout << "全局函数判断-两个立方体(Cube)是否相同: " << sameResult1 << endl;

    return 0;
}
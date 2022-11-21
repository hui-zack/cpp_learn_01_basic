// Create by hui on 2021/12/28 16:01
// Code describe:
// Keyword      :
/*
 * �㵽Բ�ĵľ���:
 *  �㵽Բ�ĵľ��� == �뾶       ����԰��
 *  �㵽Բ�ĵľ��� > �뾶        ����԰��
 *  �㵽Բ�εľ��� < �뾶        ����Ա��
 *  �㵽Բ�ĵľ���: (x1-x2)^2 + (y1 - y2)^2  r^2�Ա�
 * */
#include <iostream>

using namespace std;


class Point{                /* ���� */
private:
    int X;
    int Y;
public:
    /* X ��ȡ������ */
    void setX(int x){
        X = x;
    }

    int getX(){
        return X;
    }
    /* Y ��ȡ������ */
    void setY(int y){
        Y = y;
    }

    int getY(){
        return Y;
    }
};


class circle{               /* Բ�� */
private:
    int R;
    Point Center;
public:
    /* R ���úͻ�ȡ */
    void setR(int r){
        R = r;
    }

    int getR() const{
        return R;
    }

    /* Բ�Ļ�ȡ */
    Point getCenter(){
        return Center;
    }

};

void isInCircle(circle &c, Point&p){
    // ��������֮�����ƽ��
    int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
                   (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

    // ����뾶��ƽ��
    int rDistance = c.getR() * c.getR();

    if (distance > rDistance){
        cout << "��Բ��" << endl;
    } else if (distance == rDistance){
        cout << "��Բ��" << endl;
    } else {
        cout << "��Բ��" << endl;
    }
}



int main() {
    /* Բ�Ķ��� */
    circle c1{};
    c1.setR(10);
    c1.getCenter().setX(0);
    c1.getCenter().setY(0);

    /* ��Ķ��� */
    Point p1{};
    p1.setX(5);
    p1.setY(6);

    isInCircle(c1, p1);

    return 0;
}
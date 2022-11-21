// Create by hui on 2021/12/14 17:03
// Code describe: 
// Keyword      : 

#include <iostream>
#include <string>


using namespace std;



class Camera{
public:
    int id = -1;
    string name;
};


int main() {
    Camera camera = Camera();
    cout << typeid(camera).name() << endl;
}
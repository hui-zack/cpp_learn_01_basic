//
// Created by admin on 2022/11/9.
//

#ifndef C___CAMERA_H
#define C___CAMERA_H

#include <string>

using namespace std;

class Camera {
private:
    string name;
public:
    const string &getName() const;

    void setName(const string &name);
};


#endif //C___CAMERA_H

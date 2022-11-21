//
// Created by admin on 2022/11/9.
//

#include "Camera.h"

const string &Camera::getName() const {
    return name;
}

void Camera::setName(const string &name) {
    this->name = name;
}

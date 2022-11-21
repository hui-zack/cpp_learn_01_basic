//
// Created by admin on 2022/11/9.
//

#include "test.h"

void Test::setName(string name) {
    this->name = move(name);
}

string Test::getName() {
    return this->name;
}

void Test::setCamera() {
    Camera camera = Camera();
    camera.setName("123");
}

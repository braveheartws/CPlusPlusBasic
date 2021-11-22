//
// Created by admin on 2021/11/22.
//

#include <iostream>
#include "Benz.h"

Benz::Benz(int _size) : Car(50),size(_size) {

}

void Benz::show() {
    Car::show();
    std :: cout << "benz show" << std::endl;
}
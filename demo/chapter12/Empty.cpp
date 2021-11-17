//
// Created by admin on 2021/11/17.
//

#include "Empty.h"
#include <iostream>
Empty::Empty() {
    std::cout << " constructor" << std::endl;
}

Empty::~Empty() {
    std::cout << " destroy" << std::endl;
}

Empty::Empty(const Empty &et) {
    std::cout << " copy" << std::endl;
}


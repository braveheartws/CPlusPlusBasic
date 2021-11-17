//
// Created by admin on 2021/11/17.
//

#include "Animal.h"
Animal::Animal(int _meta, int _age, int _type, const std::string& _name):meta(_meta),age(_age), type(_type){
    std::cout << " animal create" <<std::endl;
}

void Animal::show() {
    std::cout << " animal show" << std::endl;
}
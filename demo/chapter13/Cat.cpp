//
// Created by admin on 2021/11/17.
//

#include "Cat.h"

Cat::Cat(int meta1, int age1, int type1, const std::string &name1) : Animal(meta1, age1, type1, name1),self(name1) {

}

std::ostream &operator<<(std::ostream& os,const Cat & cat) {
    os << "cat: " << cat.name << " | " << cat.age << " | " << cat.self;
    return os;
}

void Cat::show() {

    std::cout << " cat show" << std::endl;
}

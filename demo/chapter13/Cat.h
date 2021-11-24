//
// Created by admin on 2021/11/17.
//

#ifndef CPLUSPLUSBASIC_CAT_H
#define CPLUSPLUSBASIC_CAT_H

#include "Animal.h"
#include <ostream>

class Cat :public Animal{
private:
    std::string self;
public:
    Cat(int meta1, int age1, int type1, const std::string &name1);
    friend std::ostream & operator<<(std::ostream& os,const Cat &cat);
    void show();
};


#endif //CPLUSPLUSBASIC_CAT_H

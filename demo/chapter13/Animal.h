//
// Created by admin on 2021/11/17.
//

#ifndef CPLUSPLUSBASIC_ANIMAL_H
#define CPLUSPLUSBASIC_ANIMAL_H
#include <iostream>

class Animal {
private:
    int meta;
protected:
    int age;
public:
    int type;
    std::string name;
    Animal(int _meta,int _age, int _type, const std::string& name);

    void show();
};


#endif //CPLUSPLUSBASIC_ANIMAL_H

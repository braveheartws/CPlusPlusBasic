//
// Created by admin on 2021/11/18.
//

#ifndef CPLUSPLUSBASIC_CHILD_H
#define CPLUSPLUSBASIC_CHILD_H


#include "Father.h"

class Child : public Father{
private:
    int color;
public:
    Child(int age);
};


#endif //CPLUSPLUSBASIC_CHILD_H

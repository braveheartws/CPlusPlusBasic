//
// Created by admin on 2021/11/22.
//

#ifndef CPLUSPLUSBASIC_CAR_H
#define CPLUSPLUSBASIC_CAR_H


class Car {
private:
    int price;
public:
    Car(int price);
    virtual void show() = 0;
};


#endif //CPLUSPLUSBASIC_CAR_H

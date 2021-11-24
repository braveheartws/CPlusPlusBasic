//
// Created by admin on 2021/11/18.
//

#include "BrassPlus.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

void BrassPlus::Withdraw(double amt) {
    cout << __func__ << endl;
}

void BrassPlus::ViewAcct() const {
    cout << "brass plus" << __func__ << endl;
    Brass::ViewAcct();
}

BrassPlus::BrassPlus() {
    cout << __func__ << endl;
    show = true;
}

BrassPlus::BrassPlus(const Brass &ba, double ml, double r) {

}

BrassPlus::BrassPlus(const std::string &s, long an, double bal, double m1, double r) {

}

BrassPlus::~BrassPlus() {

}
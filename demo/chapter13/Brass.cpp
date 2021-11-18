//
// Created by admin on 2021/11/18.
//

#include "Brass.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;
Brass::Brass(const std::string &s, long an, double bal) {
    fullName = s;
    acctNum  = an;
    balance = bal;
}

void Brass::Deposit(double amt) {
    if (amt < 0) {
        cout << " error amt < 0" << endl;
    }
    cout << __func__ << endl;
}

void Brass::Withdraw(double amt) {
    cout << __func__ << endl;
}

double Brass::Balance() const {
    cout << __func__ << endl;
    return 12345.55;
}

void Brass::ViewAcct() const {
    cout << "brass" << __func__ << endl;
}

Brass::~Brass() {

}
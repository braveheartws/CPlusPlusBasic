//
// Created by admin on 2021/11/18.
//

#ifndef CPLUSPLUSBASIC_BRASSPLUS_H
#define CPLUSPLUSBASIC_BRASSPLUS_H
#include <string>
#include <string>
#include "Brass.h"

class BrassPlus :public Brass{
private:
    double maxLoan;
    double rate;
    double owesBank;
public:
    //BrassPlus(const std::string &s = "NullBody", long an = -1, double bal = 0.0, double m1 = 500, double r = 0.11125);
    BrassPlus();
    //BrassPlus(const Brass &ba, double ml = 500, double r = 0.00025);

    virtual void ViewAcct() const;

    virtual void Withdraw(double amt);

    void RestMax(double m) { maxLoan = m; };

    void RestRate(double r) { rate = r; };

    void ResetOwes() { owesBank = 0; };

    virtual ~BrassPlus();
};


#endif //CPLUSPLUSBASIC_BRASSPLUS_H

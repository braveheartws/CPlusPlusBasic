//
// Created by admin on 2021/11/18.
//

#ifndef CPLUSPLUSBASIC_BRASS_H
#define CPLUSPLUSBASIC_BRASS_H
#include <string>

class Brass {
private:
    std::string fullName;
    long acctNum;
    double balance;
protected:
    bool show;
public:
    Brass(const std::string & s = "NullBody", long an = -1, double bal = 0.0);

    void Deposit(double  amt);

    virtual void Withdraw(double amt);

    double Balance() const;

    virtual void ViewAcct() const;

    virtual ~Brass();
};


#endif //CPLUSPLUSBASIC_BRASS_H

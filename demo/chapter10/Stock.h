//
// Created by 39535 on 2021/11/10.
//

#ifndef CPLUSPLUSBASIC_STOCK_H
#define CPLUSPLUSBASIC_STOCK_H

#include <string>

class Stock {
private:
    std::string company;
    long shares;
    double m_share_val;
    double m_total_val;

    void reset();

public:
    Stock();

    Stock(double &share_val, double &total_val);

    ~Stock();

    void acquire(const std::string &co, long n, double pr);

    void buy(long num, double price);

    void sell(long num, double price);

    void print() const;

};

#endif //CPLUSPLUSBASIC_STOCK_H

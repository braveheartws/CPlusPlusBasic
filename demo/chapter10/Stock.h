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
    double share_val;
    double total_val;
    void reset();
public:
    void acquire(const std::string &co, long  n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
};

#endif //CPLUSPLUSBASIC_STOCK_H

//
// Created by 39535 on 2021/11/10.
//

#include "Stock.h"

void Stock::acquire(const std::string &co, long n, double pr) {

}

void Stock::buy(long num, double price) {

}

void Stock::sell(long num, double price) {

}

inline void Stock::reset() {
    this->total_val = this->share_val * this->shares;
}
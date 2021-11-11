//
// Created by 39535 on 2021/11/10.
//

#include "Stock.h"
#include <iostream>
Stock::Stock() {
    using namespace std;
    cout << "constructor" << endl;
}
Stock::Stock(double &share_val, double &total_val) {
    m_share_val = share_val;
    m_total_val = total_val;
    using namespace std;
    cout << "constructor2" << endl;
}

Stock::~Stock() {
    using namespace std;
    cout << "deconstructor" << endl;
}

void Stock::acquire(const std::string &co, long n, double pr) {

}

void Stock::buy(long num, double price) {

}

void Stock::sell(long num, double price) {

}

inline void Stock::reset() {
    this->m_total_val = this->m_share_val * this->shares;
}

void Stock::print() const{
    std::cout << " info : " << this->m_total_val << "  |  " << this->m_share_val << std::endl;
}
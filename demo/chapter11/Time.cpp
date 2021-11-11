//
// Created by admin on 2021/11/11.
//

#include "Time.h"
#include <iostream>

using namespace std;
Time::Time() {
    hours = minutes = 0;
}

void Time::AddHr(int h) {
    hours += h;
}

void Time::AddMin(int m) {
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::Reset(int h , int m ) {
    hours = h;
    minutes = m;
}

Time::Time(int h, int m) {
    hours = h;
    minutes = m;
}

void Time::Show() const {
    cout << hours << " : " << minutes << endl;
}

Time Time::operator+(const Time &other) const {
    Time time;
    time.minutes = other.minutes + minutes;
    time.hours = other.hours + hours + time.minutes / 60;
    time.minutes = time.minutes % 60;
    return time;
}

Time Time::operator*(const double &other) const {
    return *this;
}

ostream& operator<<(ostream& os, const Time &time) {
    os << time.hours <<" : " << time.minutes << endl;
    return os;
}
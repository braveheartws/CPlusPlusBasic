//
// Created by admin on 2021/11/11.
//

#ifndef CPLUSPLUSBASIC_TIME_H
#define CPLUSPLUSBASIC_TIME_H

#include <ostream>
class Time {
private:
    int hours;
    int minutes;
public:
    Time();

    Time(int h,int m);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    Time operator+(const Time &other) const;
    //friend void operator<<(std::ostream &os, const Time &time);
    friend Time operator*(double m,const Time &time) {
        return time * m;
    };
    Time operator*(const double &other) const;
    friend std::ostream & operator<<(std::ostream &os, const Time &time);
    void Show() const;

};


#endif //CPLUSPLUSBASIC_TIME_H

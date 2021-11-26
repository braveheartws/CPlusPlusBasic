//
// Created by 39535 on 2021/11/24.
//

#ifndef CPLUSPLUSBASIC_WORKER_H
#define CPLUSPLUSBASIC_WORKER_H

#include <string>

class Worker {
private:
    std::string fullname;
    long id;
public:
    Worker() : fullname("no one"), id(0L) {};

    Worker(const std::string &s, long n) : fullname(s), id(n) {};

    virtual ~Worker() = 0;

    virtual void Set();

    virtual void Show() const;
};

class Waiter : virtual public Worker {
private:
    int panache;
public:
    Waiter() : Worker(), panache(0) {}

    Waiter(const std::string &s, long n, int p = 0) : Worker(s, n), panache(p) {}

    Waiter(const Worker &wk, int p = 0) : Worker(wk), panache(p) {}

    void Set();

    void Show() const;

};

class Singer : virtual public Worker {
protected:
    enum {
        other, alto, contralto, soprano, bass, baritone, tenor
    };
    enum {
        Vtypes = 7
    };
private:
    static char *pv[Vtypes];
    int voice;
public:
    Singer() : Worker(),voice(other) {}
    Singer(const std::string &s,long n,int v=other):Worker(s,n),voice(v){}
    Singer(const Worker&wk,int v = other):Worker(wk),voice(v){}
    void Set();
    void Show() const;

};


/*class SingerWaiter: public Singer, public Waiter{


};*/

#endif //CPLUSPLUSBASIC_WORKER_H

//
// Created by admin on 2021/11/29.
//

#ifndef CPLUSPLUSDEMO_BETA_H
#define CPLUSPLUSDEMO_BETA_H

#include <iostream>

using std::cout;
using std::endl;

template<typename T>
class beta {
private:
    template<class V>
    class hold {
    private:
        V val;
    public:
        hold(V v = 0) : val(v) {}

        void show() const { cout << val << endl; }

        V Value() const { return val; }
    };

    hold<T> q;
    hold<int> n;
public:
    beta(T t, int i) : q(t), n(i) {}

    template<class U>
    U blab(U u, T t) { return (n.Value() + q.Value()) * u / t; }

    void Show() const { q.show(), n.show(); }
};

template<typename Type>
class SStack{

};

template<template<typename T> class Thing>
class Crab {
private:
    Thing<int> s1;
    Thing<double> s2;
public:
    Crab() {};

    bool push(int a, double x) { return s1.push(a) && s2.push(x); }

};

#endif //CPLUSPLUSDEMO_BETA_H

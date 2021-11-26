//
// Created by admin on 2021/11/23.
//

#include <iostream>
#include <valarray>
#include "StudentNew.h"
#include "PublicHuman.h"
#include "ProtectedHuman.h"
#include "PrivateHuman.h"
#include "Worker.h"
#include "xx/Stack.h"


using namespace std;

template<typename T>
T _max(const T &t1, const T &t2) {
    return t1 > t2 ? t1 : t2;
}

class TestExplicit {
public:
    TestExplicit(const char *p) {};
};

class A {
private:
    int a;
public:
    A(int a) : a(a) {};
};

class B : public A {
private:
    int b;
public:
    B(int a = 0, int b = 0) : A(a), b(b) {};
};

class C : public B {
private:
    int c;
public:
    C(int a = 0, int b = 0, int c = 0) : B(a, b), c(c) {};
};




int mainc14() {
    valarray<int> valarr = {1, 23, 4, 5, 6};
    cout << valarr.max() << endl;
    PublicHuman publicHuman(18);
    publicHuman.PublicShow();
    ProtectedHuman protectedHuman;
    PrivateHuman privateHuman;
    valarray<int> va(8, 40);
    va[0] = 5;
    va[1] = 8;
    cout << va.max() << endl;
    TestExplicit te = "xxxx";
    double d = 55;
    StudentNew studentNew("zhangjunpu", &d, 5);
    studentNew.max();
    ArrayDb ss;
    cout << studentNew << endl;

    Waiter bob("Bob Apple", 1324L, 5);

    Singer bev("Beverly Hills", 522L, 3);


    return 0;
}
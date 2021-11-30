//
// Created by admin on 2021/11/30.
//

#include <iostream>
#include "tv.h"
#include <exception>
#include <cstdlib>

int test(int a, int b) {
    if (a == -b) {
        throw "xxxxbbbbccc";
    }
    return a + b;
}
struct Big {
    double buf[200000000000000000];
};

class AA{

};

class BB {

};

int main() {
    using namespace std;
    Tv s42;
    cout <<" init settings" << endl;
    s42.settings();
    s42.onoff();
    s42.chanup();
    cout << " Adjusted settings for 42\n";
    s42.chanup();
    cout<< " \n Adjuest" << endl;
    Outer::PubInner pb;

    try {
        int ret = test(5, -5);
    } catch (const char *msg) {
        cout << msg << endl;
    }
    Big *big;
//    try {
//        int a = 21;
//        big = new (std::nothrow)Big[a];
//    }catch (bad_alloc & ba) {
//        cout << "what? " << ba.what() << endl;
//        exit(EXIT_FAILURE);
//    }
    BB *bb;
    cout << typeid(*bb).name() <<endl;
    return 0;
}


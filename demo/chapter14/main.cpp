//
// Created by admin on 2021/11/23.
//

#include <iostream>
#include <valarray>

using namespace std;

template<typename T>
T _max(const T &t1, const T &t2) {
    return t1 > t2 ? t1 : t2;
}

class TestExplicit {
public:
    TestExplicit(const char * p) {};
};

int main() {
    valarray<int> valarr = {1, 23, 4, 5, 6};
    cout << valarr.max() << endl;

    valarray<int> va(8, 40);
    va[0] = 5;
    va[1] = 8;
    cout << va.max() << endl;
    TestExplicit te = "xxxx";
    return 0;
}
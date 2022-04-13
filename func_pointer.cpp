//
// Created by admin on 2022/1/19.
//

#include <iostream>

struct Listener {
    int (*add)(int&, int&);

    int (*sub)(int&, int&);
};

int Add(int &a, int &b) {
    return a + b;
}

int Sub(int &a, int &b) {
    return a - b;
}

using namespace std;

int main() {
    struct Listener listener;
    listener.add = &Add;
    listener.sub = &Sub;
    int a =8,b = 7;
    int ret = listener.add(a,b);
    cout << "ret : " << ret << endl;
    ret = listener.sub(a,b);
    cout << "ret : " << ret << endl;
    return 0;
}
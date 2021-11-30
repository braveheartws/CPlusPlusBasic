//
// Created by braveheartws on 2021/11/30.
//

#ifndef CPLUSPLUSBASIC_HASFRIENDT_H
#define CPLUSPLUSBASIC_HASFRIENDT_H

#include <iostream>

using namespace std;

template<typename T>
void counts();

template<typename T>
void report(T &);

template<class TT>
class HasFriendT {
private:
    TT item;
    static int ct;
public:
    HasFriendT(const TT &i) : item(i) { ct++; }
    ~HasFriendT() { ct--; }
    friend void counts<TT>();
    friend void report<>(HasFriendT<TT> &);

    template<typename C,typename D> friend void show2(C &c,D&d);
};
template<typename T>
int HasFriendT<T>::ct = 0;
template<typename T>
void counts() {
    cout << "template size :" << sizeof(HasFriendT<T>) << endl;
    cout << "count :" << HasFriendT<T>::ct << endl;
}

template<typename T>
void report(T& it) {
    cout << it.item << endl;
}


template<typename C,typename D> void show2(C &c,D&d){
    cout << c.item << endl;
    cout << d.item<<endl;
}

#endif //CPLUSPLUSBASIC_HASFRIENDT_H

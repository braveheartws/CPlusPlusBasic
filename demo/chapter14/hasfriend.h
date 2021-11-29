//
// Created by admin on 2021/11/29.
//

#ifndef CPLUSPLUSDEMO_HASFRIEND_H
#define CPLUSPLUSDEMO_HASFRIEND_H

#include <iostream>

using namespace std;

template<typename T>
class HasFriend {
private:
    T item;
    static int ct;
public:
    HasFriend(const T &t) : item(t) { ct++; }

    ~HasFriend() { ct-- ;};

    friend void counts();

    friend void reports(HasFriend<T> &);
};

template<class T>
int HasFriend<T>::ct = 0;

void counts() {
    cout << " count: " << HasFriend<int>::ct << endl;
};

void reports(HasFriend<int> &hr) {
    cout << " HasFriend<int>" << hr.item << endl;
}


#endif //CPLUSPLUSDEMO_HASFRIEND_H
